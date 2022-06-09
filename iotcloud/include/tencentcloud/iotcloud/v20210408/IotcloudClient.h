/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_IOTCLOUD_V20210408_IOTCLOUDCLIENT_H_
#define TENCENTCLOUD_IOTCLOUD_V20210408_IOTCLOUDCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/iotcloud/v20210408/model/CreateDeviceRequest.h>
#include <tencentcloud/iotcloud/v20210408/model/CreateDeviceResponse.h>
#include <tencentcloud/iotcloud/v20210408/model/CreatePrivateCARequest.h>
#include <tencentcloud/iotcloud/v20210408/model/CreatePrivateCAResponse.h>
#include <tencentcloud/iotcloud/v20210408/model/CreateProductRequest.h>
#include <tencentcloud/iotcloud/v20210408/model/CreateProductResponse.h>
#include <tencentcloud/iotcloud/v20210408/model/DeleteDeviceRequest.h>
#include <tencentcloud/iotcloud/v20210408/model/DeleteDeviceResponse.h>
#include <tencentcloud/iotcloud/v20210408/model/DeletePrivateCARequest.h>
#include <tencentcloud/iotcloud/v20210408/model/DeletePrivateCAResponse.h>
#include <tencentcloud/iotcloud/v20210408/model/DeleteProductRequest.h>
#include <tencentcloud/iotcloud/v20210408/model/DeleteProductResponse.h>
#include <tencentcloud/iotcloud/v20210408/model/DescribeDeviceRequest.h>
#include <tencentcloud/iotcloud/v20210408/model/DescribeDeviceResponse.h>
#include <tencentcloud/iotcloud/v20210408/model/DescribeDevicesRequest.h>
#include <tencentcloud/iotcloud/v20210408/model/DescribeDevicesResponse.h>
#include <tencentcloud/iotcloud/v20210408/model/DescribePrivateCARequest.h>
#include <tencentcloud/iotcloud/v20210408/model/DescribePrivateCAResponse.h>
#include <tencentcloud/iotcloud/v20210408/model/DescribePrivateCABindedProductsRequest.h>
#include <tencentcloud/iotcloud/v20210408/model/DescribePrivateCABindedProductsResponse.h>
#include <tencentcloud/iotcloud/v20210408/model/DescribePrivateCAsRequest.h>
#include <tencentcloud/iotcloud/v20210408/model/DescribePrivateCAsResponse.h>
#include <tencentcloud/iotcloud/v20210408/model/DescribeProductRequest.h>
#include <tencentcloud/iotcloud/v20210408/model/DescribeProductResponse.h>
#include <tencentcloud/iotcloud/v20210408/model/DescribeProductCARequest.h>
#include <tencentcloud/iotcloud/v20210408/model/DescribeProductCAResponse.h>
#include <tencentcloud/iotcloud/v20210408/model/DescribeProductsRequest.h>
#include <tencentcloud/iotcloud/v20210408/model/DescribeProductsResponse.h>
#include <tencentcloud/iotcloud/v20210408/model/SetProductsForbiddenStatusRequest.h>
#include <tencentcloud/iotcloud/v20210408/model/SetProductsForbiddenStatusResponse.h>
#include <tencentcloud/iotcloud/v20210408/model/UpdateDeviceLogLevelRequest.h>
#include <tencentcloud/iotcloud/v20210408/model/UpdateDeviceLogLevelResponse.h>
#include <tencentcloud/iotcloud/v20210408/model/UpdateDevicesEnableStateRequest.h>
#include <tencentcloud/iotcloud/v20210408/model/UpdateDevicesEnableStateResponse.h>
#include <tencentcloud/iotcloud/v20210408/model/UpdatePrivateCARequest.h>
#include <tencentcloud/iotcloud/v20210408/model/UpdatePrivateCAResponse.h>
#include <tencentcloud/iotcloud/v20210408/model/UpdateProductDynamicRegisterRequest.h>
#include <tencentcloud/iotcloud/v20210408/model/UpdateProductDynamicRegisterResponse.h>


namespace TencentCloud
{
    namespace Iotcloud
    {
        namespace V20210408
        {
            class IotcloudClient : public AbstractClient
            {
            public:
                IotcloudClient(const Credential &credential, const std::string &region);
                IotcloudClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CreateDeviceResponse> CreateDeviceOutcome;
                typedef std::future<CreateDeviceOutcome> CreateDeviceOutcomeCallable;
                typedef std::function<void(const IotcloudClient*, const Model::CreateDeviceRequest&, CreateDeviceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDeviceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePrivateCAResponse> CreatePrivateCAOutcome;
                typedef std::future<CreatePrivateCAOutcome> CreatePrivateCAOutcomeCallable;
                typedef std::function<void(const IotcloudClient*, const Model::CreatePrivateCARequest&, CreatePrivateCAOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePrivateCAAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateProductResponse> CreateProductOutcome;
                typedef std::future<CreateProductOutcome> CreateProductOutcomeCallable;
                typedef std::function<void(const IotcloudClient*, const Model::CreateProductRequest&, CreateProductOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateProductAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDeviceResponse> DeleteDeviceOutcome;
                typedef std::future<DeleteDeviceOutcome> DeleteDeviceOutcomeCallable;
                typedef std::function<void(const IotcloudClient*, const Model::DeleteDeviceRequest&, DeleteDeviceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDeviceAsyncHandler;
                typedef Outcome<Core::Error, Model::DeletePrivateCAResponse> DeletePrivateCAOutcome;
                typedef std::future<DeletePrivateCAOutcome> DeletePrivateCAOutcomeCallable;
                typedef std::function<void(const IotcloudClient*, const Model::DeletePrivateCARequest&, DeletePrivateCAOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeletePrivateCAAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteProductResponse> DeleteProductOutcome;
                typedef std::future<DeleteProductOutcome> DeleteProductOutcomeCallable;
                typedef std::function<void(const IotcloudClient*, const Model::DeleteProductRequest&, DeleteProductOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteProductAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDeviceResponse> DescribeDeviceOutcome;
                typedef std::future<DescribeDeviceOutcome> DescribeDeviceOutcomeCallable;
                typedef std::function<void(const IotcloudClient*, const Model::DescribeDeviceRequest&, DescribeDeviceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDeviceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDevicesResponse> DescribeDevicesOutcome;
                typedef std::future<DescribeDevicesOutcome> DescribeDevicesOutcomeCallable;
                typedef std::function<void(const IotcloudClient*, const Model::DescribeDevicesRequest&, DescribeDevicesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDevicesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePrivateCAResponse> DescribePrivateCAOutcome;
                typedef std::future<DescribePrivateCAOutcome> DescribePrivateCAOutcomeCallable;
                typedef std::function<void(const IotcloudClient*, const Model::DescribePrivateCARequest&, DescribePrivateCAOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePrivateCAAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePrivateCABindedProductsResponse> DescribePrivateCABindedProductsOutcome;
                typedef std::future<DescribePrivateCABindedProductsOutcome> DescribePrivateCABindedProductsOutcomeCallable;
                typedef std::function<void(const IotcloudClient*, const Model::DescribePrivateCABindedProductsRequest&, DescribePrivateCABindedProductsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePrivateCABindedProductsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePrivateCAsResponse> DescribePrivateCAsOutcome;
                typedef std::future<DescribePrivateCAsOutcome> DescribePrivateCAsOutcomeCallable;
                typedef std::function<void(const IotcloudClient*, const Model::DescribePrivateCAsRequest&, DescribePrivateCAsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePrivateCAsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProductResponse> DescribeProductOutcome;
                typedef std::future<DescribeProductOutcome> DescribeProductOutcomeCallable;
                typedef std::function<void(const IotcloudClient*, const Model::DescribeProductRequest&, DescribeProductOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProductAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProductCAResponse> DescribeProductCAOutcome;
                typedef std::future<DescribeProductCAOutcome> DescribeProductCAOutcomeCallable;
                typedef std::function<void(const IotcloudClient*, const Model::DescribeProductCARequest&, DescribeProductCAOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProductCAAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProductsResponse> DescribeProductsOutcome;
                typedef std::future<DescribeProductsOutcome> DescribeProductsOutcomeCallable;
                typedef std::function<void(const IotcloudClient*, const Model::DescribeProductsRequest&, DescribeProductsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProductsAsyncHandler;
                typedef Outcome<Core::Error, Model::SetProductsForbiddenStatusResponse> SetProductsForbiddenStatusOutcome;
                typedef std::future<SetProductsForbiddenStatusOutcome> SetProductsForbiddenStatusOutcomeCallable;
                typedef std::function<void(const IotcloudClient*, const Model::SetProductsForbiddenStatusRequest&, SetProductsForbiddenStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetProductsForbiddenStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateDeviceLogLevelResponse> UpdateDeviceLogLevelOutcome;
                typedef std::future<UpdateDeviceLogLevelOutcome> UpdateDeviceLogLevelOutcomeCallable;
                typedef std::function<void(const IotcloudClient*, const Model::UpdateDeviceLogLevelRequest&, UpdateDeviceLogLevelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateDeviceLogLevelAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateDevicesEnableStateResponse> UpdateDevicesEnableStateOutcome;
                typedef std::future<UpdateDevicesEnableStateOutcome> UpdateDevicesEnableStateOutcomeCallable;
                typedef std::function<void(const IotcloudClient*, const Model::UpdateDevicesEnableStateRequest&, UpdateDevicesEnableStateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateDevicesEnableStateAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdatePrivateCAResponse> UpdatePrivateCAOutcome;
                typedef std::future<UpdatePrivateCAOutcome> UpdatePrivateCAOutcomeCallable;
                typedef std::function<void(const IotcloudClient*, const Model::UpdatePrivateCARequest&, UpdatePrivateCAOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdatePrivateCAAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateProductDynamicRegisterResponse> UpdateProductDynamicRegisterOutcome;
                typedef std::future<UpdateProductDynamicRegisterOutcome> UpdateProductDynamicRegisterOutcomeCallable;
                typedef std::function<void(const IotcloudClient*, const Model::UpdateProductDynamicRegisterRequest&, UpdateProductDynamicRegisterOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateProductDynamicRegisterAsyncHandler;



                /**
                 *This API is used to create an IoT Hub device. 
                 * @param req CreateDeviceRequest
                 * @return CreateDeviceOutcome
                 */
                CreateDeviceOutcome CreateDevice(const Model::CreateDeviceRequest &request);
                void CreateDeviceAsync(const Model::CreateDeviceRequest& request, const CreateDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDeviceOutcomeCallable CreateDeviceCallable(const Model::CreateDeviceRequest& request);

                /**
                 *This API is used to create a private CA certificate.
                 * @param req CreatePrivateCARequest
                 * @return CreatePrivateCAOutcome
                 */
                CreatePrivateCAOutcome CreatePrivateCA(const Model::CreatePrivateCARequest &request);
                void CreatePrivateCAAsync(const Model::CreatePrivateCARequest& request, const CreatePrivateCAAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePrivateCAOutcomeCallable CreatePrivateCACallable(const Model::CreatePrivateCARequest& request);

                /**
                 *This API is used to create a new IoT communication product. 
                 * @param req CreateProductRequest
                 * @return CreateProductOutcome
                 */
                CreateProductOutcome CreateProduct(const Model::CreateProductRequest &request);
                void CreateProductAsync(const Model::CreateProductRequest& request, const CreateProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateProductOutcomeCallable CreateProductCallable(const Model::CreateProductRequest& request);

                /**
                 *This API is used to delete an IoT Hub device. 
                 * @param req DeleteDeviceRequest
                 * @return DeleteDeviceOutcome
                 */
                DeleteDeviceOutcome DeleteDevice(const Model::DeleteDeviceRequest &request);
                void DeleteDeviceAsync(const Model::DeleteDeviceRequest& request, const DeleteDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDeviceOutcomeCallable DeleteDeviceCallable(const Model::DeleteDeviceRequest& request);

                /**
                 *This API is used to delete a private CA certificate.
                 * @param req DeletePrivateCARequest
                 * @return DeletePrivateCAOutcome
                 */
                DeletePrivateCAOutcome DeletePrivateCA(const Model::DeletePrivateCARequest &request);
                void DeletePrivateCAAsync(const Model::DeletePrivateCARequest& request, const DeletePrivateCAAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeletePrivateCAOutcomeCallable DeletePrivateCACallable(const Model::DeletePrivateCARequest& request);

                /**
                 *This API is used to delete an IoT Hub product.
                 * @param req DeleteProductRequest
                 * @return DeleteProductOutcome
                 */
                DeleteProductOutcome DeleteProduct(const Model::DeleteProductRequest &request);
                void DeleteProductAsync(const Model::DeleteProductRequest& request, const DeleteProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteProductOutcomeCallable DeleteProductCallable(const Model::DeleteProductRequest& request);

                /**
                 *This API is used to query device details.
                 * @param req DescribeDeviceRequest
                 * @return DescribeDeviceOutcome
                 */
                DescribeDeviceOutcome DescribeDevice(const Model::DescribeDeviceRequest &request);
                void DescribeDeviceAsync(const Model::DescribeDeviceRequest& request, const DescribeDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDeviceOutcomeCallable DescribeDeviceCallable(const Model::DescribeDeviceRequest& request);

                /**
                 *This API is used to get the list of IoT Hub devices. 
                 * @param req DescribeDevicesRequest
                 * @return DescribeDevicesOutcome
                 */
                DescribeDevicesOutcome DescribeDevices(const Model::DescribeDevicesRequest &request);
                void DescribeDevicesAsync(const Model::DescribeDevicesRequest& request, const DescribeDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDevicesOutcomeCallable DescribeDevicesCallable(const Model::DescribeDevicesRequest& request);

                /**
                 *This API is used to query private CA certificate details.
                 * @param req DescribePrivateCARequest
                 * @return DescribePrivateCAOutcome
                 */
                DescribePrivateCAOutcome DescribePrivateCA(const Model::DescribePrivateCARequest &request);
                void DescribePrivateCAAsync(const Model::DescribePrivateCARequest& request, const DescribePrivateCAAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePrivateCAOutcomeCallable DescribePrivateCACallable(const Model::DescribePrivateCARequest& request);

                /**
                 *This API is used to query the products bound to a private CA certificate.
                 * @param req DescribePrivateCABindedProductsRequest
                 * @return DescribePrivateCABindedProductsOutcome
                 */
                DescribePrivateCABindedProductsOutcome DescribePrivateCABindedProducts(const Model::DescribePrivateCABindedProductsRequest &request);
                void DescribePrivateCABindedProductsAsync(const Model::DescribePrivateCABindedProductsRequest& request, const DescribePrivateCABindedProductsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePrivateCABindedProductsOutcomeCallable DescribePrivateCABindedProductsCallable(const Model::DescribePrivateCABindedProductsRequest& request);

                /**
                 *This API is used to get the list of private CA certificates.
                 * @param req DescribePrivateCAsRequest
                 * @return DescribePrivateCAsOutcome
                 */
                DescribePrivateCAsOutcome DescribePrivateCAs(const Model::DescribePrivateCAsRequest &request);
                void DescribePrivateCAsAsync(const Model::DescribePrivateCAsRequest& request, const DescribePrivateCAsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePrivateCAsOutcomeCallable DescribePrivateCAsCallable(const Model::DescribePrivateCAsRequest& request);

                /**
                 *This API is used to query product details.
                 * @param req DescribeProductRequest
                 * @return DescribeProductOutcome
                 */
                DescribeProductOutcome DescribeProduct(const Model::DescribeProductRequest &request);
                void DescribeProductAsync(const Model::DescribeProductRequest& request, const DescribeProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProductOutcomeCallable DescribeProductCallable(const Model::DescribeProductRequest& request);

                /**
                 *This API is used to query the CA certificates bound to a product.
                 * @param req DescribeProductCARequest
                 * @return DescribeProductCAOutcome
                 */
                DescribeProductCAOutcome DescribeProductCA(const Model::DescribeProductCARequest &request);
                void DescribeProductCAAsync(const Model::DescribeProductCARequest& request, const DescribeProductCAAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProductCAOutcomeCallable DescribeProductCACallable(const Model::DescribeProductCARequest& request);

                /**
                 *This API is used to obtain the product list. 
                 * @param req DescribeProductsRequest
                 * @return DescribeProductsOutcome
                 */
                DescribeProductsOutcome DescribeProducts(const Model::DescribeProductsRequest &request);
                void DescribeProductsAsync(const Model::DescribeProductsRequest& request, const DescribeProductsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProductsOutcomeCallable DescribeProductsCallable(const Model::DescribeProductsRequest& request);

                /**
                 *This API is used to enable or disable multiple products at a time.
                 * @param req SetProductsForbiddenStatusRequest
                 * @return SetProductsForbiddenStatusOutcome
                 */
                SetProductsForbiddenStatusOutcome SetProductsForbiddenStatus(const Model::SetProductsForbiddenStatusRequest &request);
                void SetProductsForbiddenStatusAsync(const Model::SetProductsForbiddenStatusRequest& request, const SetProductsForbiddenStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetProductsForbiddenStatusOutcomeCallable SetProductsForbiddenStatusCallable(const Model::SetProductsForbiddenStatusRequest& request);

                /**
                 *This API is used to set the device log level.  
                 * @param req UpdateDeviceLogLevelRequest
                 * @return UpdateDeviceLogLevelOutcome
                 */
                UpdateDeviceLogLevelOutcome UpdateDeviceLogLevel(const Model::UpdateDeviceLogLevelRequest &request);
                void UpdateDeviceLogLevelAsync(const Model::UpdateDeviceLogLevelRequest& request, const UpdateDeviceLogLevelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateDeviceLogLevelOutcomeCallable UpdateDeviceLogLevelCallable(const Model::UpdateDeviceLogLevelRequest& request);

                /**
                 *This API is used to enable or disable multiple devices. 
                 * @param req UpdateDevicesEnableStateRequest
                 * @return UpdateDevicesEnableStateOutcome
                 */
                UpdateDevicesEnableStateOutcome UpdateDevicesEnableState(const Model::UpdateDevicesEnableStateRequest &request);
                void UpdateDevicesEnableStateAsync(const Model::UpdateDevicesEnableStateRequest& request, const UpdateDevicesEnableStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateDevicesEnableStateOutcomeCallable UpdateDevicesEnableStateCallable(const Model::UpdateDevicesEnableStateRequest& request);

                /**
                 *This API is used to update a private CA certificate.
                 * @param req UpdatePrivateCARequest
                 * @return UpdatePrivateCAOutcome
                 */
                UpdatePrivateCAOutcome UpdatePrivateCA(const Model::UpdatePrivateCARequest &request);
                void UpdatePrivateCAAsync(const Model::UpdatePrivateCARequest& request, const UpdatePrivateCAAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdatePrivateCAOutcomeCallable UpdatePrivateCACallable(const Model::UpdatePrivateCARequest& request);

                /**
                 *This API is used to update the configuration of product dynamic registration. 
                 * @param req UpdateProductDynamicRegisterRequest
                 * @return UpdateProductDynamicRegisterOutcome
                 */
                UpdateProductDynamicRegisterOutcome UpdateProductDynamicRegister(const Model::UpdateProductDynamicRegisterRequest &request);
                void UpdateProductDynamicRegisterAsync(const Model::UpdateProductDynamicRegisterRequest& request, const UpdateProductDynamicRegisterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateProductDynamicRegisterOutcomeCallable UpdateProductDynamicRegisterCallable(const Model::UpdateProductDynamicRegisterRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_IOTCLOUD_V20210408_IOTCLOUDCLIENT_H_
