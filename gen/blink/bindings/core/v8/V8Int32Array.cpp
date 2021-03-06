// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8Int32Array.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8ArrayBuffer.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "core/dom/ContextFeatures.h"
#include "core/dom/Document.h"
#include "platform/RuntimeEnabledFeatures.h"
#include "platform/TraceEvent.h"
#include "wtf/GetPtr.h"
#include "wtf/RefPtr.h"

namespace blink {

// Suppress warning: global constructors, because struct WrapperTypeInfo is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
const WrapperTypeInfo V8Int32Array::wrapperTypeInfo = { gin::kEmbedderBlink, 0, V8Int32Array::refObject, V8Int32Array::derefObject, V8Int32Array::trace, 0, 0, V8Int32Array::preparePrototypeObject, V8Int32Array::installConditionallyEnabledProperties, "Int32Array", &V8ArrayBufferView::wrapperTypeInfo, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Independent, WrapperTypeInfo::RefCountedObject };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in DOMInt32Array.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.

bool V8Int32Array::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return v8Value->IsInt32Array();
}

DOMInt32Array* V8Int32Array::toImpl(v8::Local<v8::Object> object)
{
    ASSERT(object->IsInt32Array());
    ScriptWrappable* scriptWrappable = toScriptWrappable(object);
    if (scriptWrappable)
        return scriptWrappable->toImpl<DOMInt32Array>();

    v8::Local<v8::Int32Array> v8View = object.As<v8::Int32Array>();
    RefPtr<DOMInt32Array> typedArray = DOMInt32Array::create(V8ArrayBuffer::toImpl(v8View->Buffer()), v8View->ByteOffset(), v8View->Length());
    v8::Local<v8::Object> associatedWrapper = typedArray->associateWithWrapper(v8::Isolate::GetCurrent(), typedArray->wrapperTypeInfo(), object);
    ASSERT_UNUSED(associatedWrapper, associatedWrapper == object);

    return typedArray->toImpl<DOMInt32Array>();
}

DOMInt32Array* V8Int32Array::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : 0;
}

void V8Int32Array::refObject(ScriptWrappable* scriptWrappable)
{
    scriptWrappable->toImpl<DOMInt32Array>()->ref();
}

void V8Int32Array::derefObject(ScriptWrappable* scriptWrappable)
{
    scriptWrappable->toImpl<DOMInt32Array>()->deref();
}

} // namespace blink
