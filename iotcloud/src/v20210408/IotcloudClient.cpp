/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <tencentcloud/iotcloud/v20210408/IotcloudClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Iotcloud::V20210408;
using namespace TencentCloud::Iotcloud::V20210408::Model;
using namespace std;

namespace
{
    const string VERSION = "2021-04-08";
    const string ENDPOINT = "iotcloud.intl.tencentcloudapi.com";
}

IotcloudClient::IotcloudClient(const Credential &credential, const string &region) :
    IotcloudClient(credential, region, ClientProfile())
{
}

IotcloudClient::IotcloudClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


IotcloudClient::CreateDeviceOutcome IotcloudClient::CreateDevice(const CreateDeviceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDevice");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDeviceResponse rsp = CreateDeviceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDeviceOutcome(rsp);
        else
            return CreateDeviceOutcome(o.GetError());
    }
    else
    {
        return CreateDeviceOutcome(outcome.GetError());
    }
}

void IotcloudClient::CreateDeviceAsync(const CreateDeviceRequest& request, const CreateDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDevice(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotcloudClient::CreateDeviceOutcomeCallable IotcloudClient::CreateDeviceCallable(const CreateDeviceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDeviceOutcome()>>(
        [this, request]()
        {
            return this->CreateDevice(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotcloudClient::CreatePrivateCAOutcome IotcloudClient::CreatePrivateCA(const CreatePrivateCARequest &request)
{
    auto outcome = MakeRequest(request, "CreatePrivateCA");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePrivateCAResponse rsp = CreatePrivateCAResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePrivateCAOutcome(rsp);
        else
            return CreatePrivateCAOutcome(o.GetError());
    }
    else
    {
        return CreatePrivateCAOutcome(outcome.GetError());
    }
}

void IotcloudClient::CreatePrivateCAAsync(const CreatePrivateCARequest& request, const CreatePrivateCAAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreatePrivateCA(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotcloudClient::CreatePrivateCAOutcomeCallable IotcloudClient::CreatePrivateCACallable(const CreatePrivateCARequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreatePrivateCAOutcome()>>(
        [this, request]()
        {
            return this->CreatePrivateCA(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotcloudClient::CreateProductOutcome IotcloudClient::CreateProduct(const CreateProductRequest &request)
{
    auto outcome = MakeRequest(request, "CreateProduct");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateProductResponse rsp = CreateProductResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateProductOutcome(rsp);
        else
            return CreateProductOutcome(o.GetError());
    }
    else
    {
        return CreateProductOutcome(outcome.GetError());
    }
}

void IotcloudClient::CreateProductAsync(const CreateProductRequest& request, const CreateProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateProduct(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotcloudClient::CreateProductOutcomeCallable IotcloudClient::CreateProductCallable(const CreateProductRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateProductOutcome()>>(
        [this, request]()
        {
            return this->CreateProduct(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotcloudClient::DeleteDeviceOutcome IotcloudClient::DeleteDevice(const DeleteDeviceRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDevice");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDeviceResponse rsp = DeleteDeviceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDeviceOutcome(rsp);
        else
            return DeleteDeviceOutcome(o.GetError());
    }
    else
    {
        return DeleteDeviceOutcome(outcome.GetError());
    }
}

void IotcloudClient::DeleteDeviceAsync(const DeleteDeviceRequest& request, const DeleteDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteDevice(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotcloudClient::DeleteDeviceOutcomeCallable IotcloudClient::DeleteDeviceCallable(const DeleteDeviceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteDeviceOutcome()>>(
        [this, request]()
        {
            return this->DeleteDevice(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotcloudClient::DeleteDeviceShadowOutcome IotcloudClient::DeleteDeviceShadow(const DeleteDeviceShadowRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDeviceShadow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDeviceShadowResponse rsp = DeleteDeviceShadowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDeviceShadowOutcome(rsp);
        else
            return DeleteDeviceShadowOutcome(o.GetError());
    }
    else
    {
        return DeleteDeviceShadowOutcome(outcome.GetError());
    }
}

void IotcloudClient::DeleteDeviceShadowAsync(const DeleteDeviceShadowRequest& request, const DeleteDeviceShadowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteDeviceShadow(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotcloudClient::DeleteDeviceShadowOutcomeCallable IotcloudClient::DeleteDeviceShadowCallable(const DeleteDeviceShadowRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteDeviceShadowOutcome()>>(
        [this, request]()
        {
            return this->DeleteDeviceShadow(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotcloudClient::DeletePrivateCAOutcome IotcloudClient::DeletePrivateCA(const DeletePrivateCARequest &request)
{
    auto outcome = MakeRequest(request, "DeletePrivateCA");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeletePrivateCAResponse rsp = DeletePrivateCAResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeletePrivateCAOutcome(rsp);
        else
            return DeletePrivateCAOutcome(o.GetError());
    }
    else
    {
        return DeletePrivateCAOutcome(outcome.GetError());
    }
}

void IotcloudClient::DeletePrivateCAAsync(const DeletePrivateCARequest& request, const DeletePrivateCAAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeletePrivateCA(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotcloudClient::DeletePrivateCAOutcomeCallable IotcloudClient::DeletePrivateCACallable(const DeletePrivateCARequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeletePrivateCAOutcome()>>(
        [this, request]()
        {
            return this->DeletePrivateCA(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotcloudClient::DeleteProductOutcome IotcloudClient::DeleteProduct(const DeleteProductRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteProduct");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteProductResponse rsp = DeleteProductResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteProductOutcome(rsp);
        else
            return DeleteProductOutcome(o.GetError());
    }
    else
    {
        return DeleteProductOutcome(outcome.GetError());
    }
}

void IotcloudClient::DeleteProductAsync(const DeleteProductRequest& request, const DeleteProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteProduct(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotcloudClient::DeleteProductOutcomeCallable IotcloudClient::DeleteProductCallable(const DeleteProductRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteProductOutcome()>>(
        [this, request]()
        {
            return this->DeleteProduct(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotcloudClient::DescribeDeviceOutcome IotcloudClient::DescribeDevice(const DescribeDeviceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDevice");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDeviceResponse rsp = DescribeDeviceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDeviceOutcome(rsp);
        else
            return DescribeDeviceOutcome(o.GetError());
    }
    else
    {
        return DescribeDeviceOutcome(outcome.GetError());
    }
}

void IotcloudClient::DescribeDeviceAsync(const DescribeDeviceRequest& request, const DescribeDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDevice(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotcloudClient::DescribeDeviceOutcomeCallable IotcloudClient::DescribeDeviceCallable(const DescribeDeviceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDeviceOutcome()>>(
        [this, request]()
        {
            return this->DescribeDevice(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotcloudClient::DescribeDevicesOutcome IotcloudClient::DescribeDevices(const DescribeDevicesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDevices");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDevicesResponse rsp = DescribeDevicesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDevicesOutcome(rsp);
        else
            return DescribeDevicesOutcome(o.GetError());
    }
    else
    {
        return DescribeDevicesOutcome(outcome.GetError());
    }
}

void IotcloudClient::DescribeDevicesAsync(const DescribeDevicesRequest& request, const DescribeDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDevices(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotcloudClient::DescribeDevicesOutcomeCallable IotcloudClient::DescribeDevicesCallable(const DescribeDevicesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDevicesOutcome()>>(
        [this, request]()
        {
            return this->DescribeDevices(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotcloudClient::DescribePrivateCAOutcome IotcloudClient::DescribePrivateCA(const DescribePrivateCARequest &request)
{
    auto outcome = MakeRequest(request, "DescribePrivateCA");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePrivateCAResponse rsp = DescribePrivateCAResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePrivateCAOutcome(rsp);
        else
            return DescribePrivateCAOutcome(o.GetError());
    }
    else
    {
        return DescribePrivateCAOutcome(outcome.GetError());
    }
}

void IotcloudClient::DescribePrivateCAAsync(const DescribePrivateCARequest& request, const DescribePrivateCAAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePrivateCA(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotcloudClient::DescribePrivateCAOutcomeCallable IotcloudClient::DescribePrivateCACallable(const DescribePrivateCARequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePrivateCAOutcome()>>(
        [this, request]()
        {
            return this->DescribePrivateCA(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotcloudClient::DescribePrivateCABindedProductsOutcome IotcloudClient::DescribePrivateCABindedProducts(const DescribePrivateCABindedProductsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePrivateCABindedProducts");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePrivateCABindedProductsResponse rsp = DescribePrivateCABindedProductsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePrivateCABindedProductsOutcome(rsp);
        else
            return DescribePrivateCABindedProductsOutcome(o.GetError());
    }
    else
    {
        return DescribePrivateCABindedProductsOutcome(outcome.GetError());
    }
}

void IotcloudClient::DescribePrivateCABindedProductsAsync(const DescribePrivateCABindedProductsRequest& request, const DescribePrivateCABindedProductsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePrivateCABindedProducts(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotcloudClient::DescribePrivateCABindedProductsOutcomeCallable IotcloudClient::DescribePrivateCABindedProductsCallable(const DescribePrivateCABindedProductsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePrivateCABindedProductsOutcome()>>(
        [this, request]()
        {
            return this->DescribePrivateCABindedProducts(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotcloudClient::DescribePrivateCAsOutcome IotcloudClient::DescribePrivateCAs(const DescribePrivateCAsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePrivateCAs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePrivateCAsResponse rsp = DescribePrivateCAsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePrivateCAsOutcome(rsp);
        else
            return DescribePrivateCAsOutcome(o.GetError());
    }
    else
    {
        return DescribePrivateCAsOutcome(outcome.GetError());
    }
}

void IotcloudClient::DescribePrivateCAsAsync(const DescribePrivateCAsRequest& request, const DescribePrivateCAsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePrivateCAs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotcloudClient::DescribePrivateCAsOutcomeCallable IotcloudClient::DescribePrivateCAsCallable(const DescribePrivateCAsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePrivateCAsOutcome()>>(
        [this, request]()
        {
            return this->DescribePrivateCAs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotcloudClient::DescribeProductOutcome IotcloudClient::DescribeProduct(const DescribeProductRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProduct");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProductResponse rsp = DescribeProductResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProductOutcome(rsp);
        else
            return DescribeProductOutcome(o.GetError());
    }
    else
    {
        return DescribeProductOutcome(outcome.GetError());
    }
}

void IotcloudClient::DescribeProductAsync(const DescribeProductRequest& request, const DescribeProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeProduct(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotcloudClient::DescribeProductOutcomeCallable IotcloudClient::DescribeProductCallable(const DescribeProductRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeProductOutcome()>>(
        [this, request]()
        {
            return this->DescribeProduct(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotcloudClient::DescribeProductCAOutcome IotcloudClient::DescribeProductCA(const DescribeProductCARequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProductCA");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProductCAResponse rsp = DescribeProductCAResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProductCAOutcome(rsp);
        else
            return DescribeProductCAOutcome(o.GetError());
    }
    else
    {
        return DescribeProductCAOutcome(outcome.GetError());
    }
}

void IotcloudClient::DescribeProductCAAsync(const DescribeProductCARequest& request, const DescribeProductCAAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeProductCA(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotcloudClient::DescribeProductCAOutcomeCallable IotcloudClient::DescribeProductCACallable(const DescribeProductCARequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeProductCAOutcome()>>(
        [this, request]()
        {
            return this->DescribeProductCA(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotcloudClient::DescribeProductsOutcome IotcloudClient::DescribeProducts(const DescribeProductsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProducts");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProductsResponse rsp = DescribeProductsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProductsOutcome(rsp);
        else
            return DescribeProductsOutcome(o.GetError());
    }
    else
    {
        return DescribeProductsOutcome(outcome.GetError());
    }
}

void IotcloudClient::DescribeProductsAsync(const DescribeProductsRequest& request, const DescribeProductsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeProducts(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotcloudClient::DescribeProductsOutcomeCallable IotcloudClient::DescribeProductsCallable(const DescribeProductsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeProductsOutcome()>>(
        [this, request]()
        {
            return this->DescribeProducts(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotcloudClient::SetProductsForbiddenStatusOutcome IotcloudClient::SetProductsForbiddenStatus(const SetProductsForbiddenStatusRequest &request)
{
    auto outcome = MakeRequest(request, "SetProductsForbiddenStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetProductsForbiddenStatusResponse rsp = SetProductsForbiddenStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetProductsForbiddenStatusOutcome(rsp);
        else
            return SetProductsForbiddenStatusOutcome(o.GetError());
    }
    else
    {
        return SetProductsForbiddenStatusOutcome(outcome.GetError());
    }
}

void IotcloudClient::SetProductsForbiddenStatusAsync(const SetProductsForbiddenStatusRequest& request, const SetProductsForbiddenStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SetProductsForbiddenStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotcloudClient::SetProductsForbiddenStatusOutcomeCallable IotcloudClient::SetProductsForbiddenStatusCallable(const SetProductsForbiddenStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SetProductsForbiddenStatusOutcome()>>(
        [this, request]()
        {
            return this->SetProductsForbiddenStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotcloudClient::UpdateDeviceLogLevelOutcome IotcloudClient::UpdateDeviceLogLevel(const UpdateDeviceLogLevelRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateDeviceLogLevel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateDeviceLogLevelResponse rsp = UpdateDeviceLogLevelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateDeviceLogLevelOutcome(rsp);
        else
            return UpdateDeviceLogLevelOutcome(o.GetError());
    }
    else
    {
        return UpdateDeviceLogLevelOutcome(outcome.GetError());
    }
}

void IotcloudClient::UpdateDeviceLogLevelAsync(const UpdateDeviceLogLevelRequest& request, const UpdateDeviceLogLevelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateDeviceLogLevel(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotcloudClient::UpdateDeviceLogLevelOutcomeCallable IotcloudClient::UpdateDeviceLogLevelCallable(const UpdateDeviceLogLevelRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateDeviceLogLevelOutcome()>>(
        [this, request]()
        {
            return this->UpdateDeviceLogLevel(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotcloudClient::UpdateDevicesEnableStateOutcome IotcloudClient::UpdateDevicesEnableState(const UpdateDevicesEnableStateRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateDevicesEnableState");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateDevicesEnableStateResponse rsp = UpdateDevicesEnableStateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateDevicesEnableStateOutcome(rsp);
        else
            return UpdateDevicesEnableStateOutcome(o.GetError());
    }
    else
    {
        return UpdateDevicesEnableStateOutcome(outcome.GetError());
    }
}

void IotcloudClient::UpdateDevicesEnableStateAsync(const UpdateDevicesEnableStateRequest& request, const UpdateDevicesEnableStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateDevicesEnableState(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotcloudClient::UpdateDevicesEnableStateOutcomeCallable IotcloudClient::UpdateDevicesEnableStateCallable(const UpdateDevicesEnableStateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateDevicesEnableStateOutcome()>>(
        [this, request]()
        {
            return this->UpdateDevicesEnableState(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotcloudClient::UpdatePrivateCAOutcome IotcloudClient::UpdatePrivateCA(const UpdatePrivateCARequest &request)
{
    auto outcome = MakeRequest(request, "UpdatePrivateCA");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdatePrivateCAResponse rsp = UpdatePrivateCAResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdatePrivateCAOutcome(rsp);
        else
            return UpdatePrivateCAOutcome(o.GetError());
    }
    else
    {
        return UpdatePrivateCAOutcome(outcome.GetError());
    }
}

void IotcloudClient::UpdatePrivateCAAsync(const UpdatePrivateCARequest& request, const UpdatePrivateCAAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdatePrivateCA(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotcloudClient::UpdatePrivateCAOutcomeCallable IotcloudClient::UpdatePrivateCACallable(const UpdatePrivateCARequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdatePrivateCAOutcome()>>(
        [this, request]()
        {
            return this->UpdatePrivateCA(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IotcloudClient::UpdateProductDynamicRegisterOutcome IotcloudClient::UpdateProductDynamicRegister(const UpdateProductDynamicRegisterRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateProductDynamicRegister");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateProductDynamicRegisterResponse rsp = UpdateProductDynamicRegisterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateProductDynamicRegisterOutcome(rsp);
        else
            return UpdateProductDynamicRegisterOutcome(o.GetError());
    }
    else
    {
        return UpdateProductDynamicRegisterOutcome(outcome.GetError());
    }
}

void IotcloudClient::UpdateProductDynamicRegisterAsync(const UpdateProductDynamicRegisterRequest& request, const UpdateProductDynamicRegisterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateProductDynamicRegister(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IotcloudClient::UpdateProductDynamicRegisterOutcomeCallable IotcloudClient::UpdateProductDynamicRegisterCallable(const UpdateProductDynamicRegisterRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateProductDynamicRegisterOutcome()>>(
        [this, request]()
        {
            return this->UpdateProductDynamicRegister(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

