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

#ifndef TENCENTCLOUD_CVM_V20170312_CVMCLIENT_H_
#define TENCENTCLOUD_CVM_V20170312_CVMCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/cvm/v20170312/model/AllocateHostsRequest.h>
#include <tencentcloud/cvm/v20170312/model/AllocateHostsResponse.h>
#include <tencentcloud/cvm/v20170312/model/AssociateInstancesKeyPairsRequest.h>
#include <tencentcloud/cvm/v20170312/model/AssociateInstancesKeyPairsResponse.h>
#include <tencentcloud/cvm/v20170312/model/AssociateSecurityGroupsRequest.h>
#include <tencentcloud/cvm/v20170312/model/AssociateSecurityGroupsResponse.h>
#include <tencentcloud/cvm/v20170312/model/ConfigureChcAssistVpcRequest.h>
#include <tencentcloud/cvm/v20170312/model/ConfigureChcAssistVpcResponse.h>
#include <tencentcloud/cvm/v20170312/model/ConfigureChcDeployVpcRequest.h>
#include <tencentcloud/cvm/v20170312/model/ConfigureChcDeployVpcResponse.h>
#include <tencentcloud/cvm/v20170312/model/ConvertOperatingSystemsRequest.h>
#include <tencentcloud/cvm/v20170312/model/ConvertOperatingSystemsResponse.h>
#include <tencentcloud/cvm/v20170312/model/CreateDisasterRecoverGroupRequest.h>
#include <tencentcloud/cvm/v20170312/model/CreateDisasterRecoverGroupResponse.h>
#include <tencentcloud/cvm/v20170312/model/CreateImageRequest.h>
#include <tencentcloud/cvm/v20170312/model/CreateImageResponse.h>
#include <tencentcloud/cvm/v20170312/model/CreateKeyPairRequest.h>
#include <tencentcloud/cvm/v20170312/model/CreateKeyPairResponse.h>
#include <tencentcloud/cvm/v20170312/model/CreateLaunchTemplateVersionRequest.h>
#include <tencentcloud/cvm/v20170312/model/CreateLaunchTemplateVersionResponse.h>
#include <tencentcloud/cvm/v20170312/model/DeleteDisasterRecoverGroupsRequest.h>
#include <tencentcloud/cvm/v20170312/model/DeleteDisasterRecoverGroupsResponse.h>
#include <tencentcloud/cvm/v20170312/model/DeleteImagesRequest.h>
#include <tencentcloud/cvm/v20170312/model/DeleteImagesResponse.h>
#include <tencentcloud/cvm/v20170312/model/DeleteKeyPairsRequest.h>
#include <tencentcloud/cvm/v20170312/model/DeleteKeyPairsResponse.h>
#include <tencentcloud/cvm/v20170312/model/DeleteLaunchTemplateRequest.h>
#include <tencentcloud/cvm/v20170312/model/DeleteLaunchTemplateResponse.h>
#include <tencentcloud/cvm/v20170312/model/DeleteLaunchTemplateVersionsRequest.h>
#include <tencentcloud/cvm/v20170312/model/DeleteLaunchTemplateVersionsResponse.h>
#include <tencentcloud/cvm/v20170312/model/DescribeChcDeniedActionsRequest.h>
#include <tencentcloud/cvm/v20170312/model/DescribeChcDeniedActionsResponse.h>
#include <tencentcloud/cvm/v20170312/model/DescribeChcHostsRequest.h>
#include <tencentcloud/cvm/v20170312/model/DescribeChcHostsResponse.h>
#include <tencentcloud/cvm/v20170312/model/DescribeDisasterRecoverGroupQuotaRequest.h>
#include <tencentcloud/cvm/v20170312/model/DescribeDisasterRecoverGroupQuotaResponse.h>
#include <tencentcloud/cvm/v20170312/model/DescribeDisasterRecoverGroupsRequest.h>
#include <tencentcloud/cvm/v20170312/model/DescribeDisasterRecoverGroupsResponse.h>
#include <tencentcloud/cvm/v20170312/model/DescribeHostsRequest.h>
#include <tencentcloud/cvm/v20170312/model/DescribeHostsResponse.h>
#include <tencentcloud/cvm/v20170312/model/DescribeImageFromFamilyRequest.h>
#include <tencentcloud/cvm/v20170312/model/DescribeImageFromFamilyResponse.h>
#include <tencentcloud/cvm/v20170312/model/DescribeImageQuotaRequest.h>
#include <tencentcloud/cvm/v20170312/model/DescribeImageQuotaResponse.h>
#include <tencentcloud/cvm/v20170312/model/DescribeImageSharePermissionRequest.h>
#include <tencentcloud/cvm/v20170312/model/DescribeImageSharePermissionResponse.h>
#include <tencentcloud/cvm/v20170312/model/DescribeImagesRequest.h>
#include <tencentcloud/cvm/v20170312/model/DescribeImagesResponse.h>
#include <tencentcloud/cvm/v20170312/model/DescribeImportImageOsRequest.h>
#include <tencentcloud/cvm/v20170312/model/DescribeImportImageOsResponse.h>
#include <tencentcloud/cvm/v20170312/model/DescribeInstanceFamilyConfigsRequest.h>
#include <tencentcloud/cvm/v20170312/model/DescribeInstanceFamilyConfigsResponse.h>
#include <tencentcloud/cvm/v20170312/model/DescribeInstancesRequest.h>
#include <tencentcloud/cvm/v20170312/model/DescribeInstancesResponse.h>
#include <tencentcloud/cvm/v20170312/model/DescribeInstancesOperationLimitRequest.h>
#include <tencentcloud/cvm/v20170312/model/DescribeInstancesOperationLimitResponse.h>
#include <tencentcloud/cvm/v20170312/model/DescribeInstancesStatusRequest.h>
#include <tencentcloud/cvm/v20170312/model/DescribeInstancesStatusResponse.h>
#include <tencentcloud/cvm/v20170312/model/DescribeInternetChargeTypeConfigsRequest.h>
#include <tencentcloud/cvm/v20170312/model/DescribeInternetChargeTypeConfigsResponse.h>
#include <tencentcloud/cvm/v20170312/model/DescribeKeyPairsRequest.h>
#include <tencentcloud/cvm/v20170312/model/DescribeKeyPairsResponse.h>
#include <tencentcloud/cvm/v20170312/model/DescribeLaunchTemplateVersionsRequest.h>
#include <tencentcloud/cvm/v20170312/model/DescribeLaunchTemplateVersionsResponse.h>
#include <tencentcloud/cvm/v20170312/model/DescribeLaunchTemplatesRequest.h>
#include <tencentcloud/cvm/v20170312/model/DescribeLaunchTemplatesResponse.h>
#include <tencentcloud/cvm/v20170312/model/DescribeRegionsRequest.h>
#include <tencentcloud/cvm/v20170312/model/DescribeRegionsResponse.h>
#include <tencentcloud/cvm/v20170312/model/DescribeReservedInstancesConfigInfosRequest.h>
#include <tencentcloud/cvm/v20170312/model/DescribeReservedInstancesConfigInfosResponse.h>
#include <tencentcloud/cvm/v20170312/model/DescribeReservedInstancesOfferingsRequest.h>
#include <tencentcloud/cvm/v20170312/model/DescribeReservedInstancesOfferingsResponse.h>
#include <tencentcloud/cvm/v20170312/model/DescribeZoneInstanceConfigInfosRequest.h>
#include <tencentcloud/cvm/v20170312/model/DescribeZoneInstanceConfigInfosResponse.h>
#include <tencentcloud/cvm/v20170312/model/DescribeZonesRequest.h>
#include <tencentcloud/cvm/v20170312/model/DescribeZonesResponse.h>
#include <tencentcloud/cvm/v20170312/model/DisassociateInstancesKeyPairsRequest.h>
#include <tencentcloud/cvm/v20170312/model/DisassociateInstancesKeyPairsResponse.h>
#include <tencentcloud/cvm/v20170312/model/DisassociateSecurityGroupsRequest.h>
#include <tencentcloud/cvm/v20170312/model/DisassociateSecurityGroupsResponse.h>
#include <tencentcloud/cvm/v20170312/model/EnterRescueModeRequest.h>
#include <tencentcloud/cvm/v20170312/model/EnterRescueModeResponse.h>
#include <tencentcloud/cvm/v20170312/model/ExitRescueModeRequest.h>
#include <tencentcloud/cvm/v20170312/model/ExitRescueModeResponse.h>
#include <tencentcloud/cvm/v20170312/model/ExportImagesRequest.h>
#include <tencentcloud/cvm/v20170312/model/ExportImagesResponse.h>
#include <tencentcloud/cvm/v20170312/model/ImportImageRequest.h>
#include <tencentcloud/cvm/v20170312/model/ImportImageResponse.h>
#include <tencentcloud/cvm/v20170312/model/ImportKeyPairRequest.h>
#include <tencentcloud/cvm/v20170312/model/ImportKeyPairResponse.h>
#include <tencentcloud/cvm/v20170312/model/InquirePricePurchaseReservedInstancesOfferingRequest.h>
#include <tencentcloud/cvm/v20170312/model/InquirePricePurchaseReservedInstancesOfferingResponse.h>
#include <tencentcloud/cvm/v20170312/model/InquiryPriceResetInstanceRequest.h>
#include <tencentcloud/cvm/v20170312/model/InquiryPriceResetInstanceResponse.h>
#include <tencentcloud/cvm/v20170312/model/InquiryPriceResetInstancesInternetMaxBandwidthRequest.h>
#include <tencentcloud/cvm/v20170312/model/InquiryPriceResetInstancesInternetMaxBandwidthResponse.h>
#include <tencentcloud/cvm/v20170312/model/InquiryPriceResetInstancesTypeRequest.h>
#include <tencentcloud/cvm/v20170312/model/InquiryPriceResetInstancesTypeResponse.h>
#include <tencentcloud/cvm/v20170312/model/InquiryPriceResizeInstanceDisksRequest.h>
#include <tencentcloud/cvm/v20170312/model/InquiryPriceResizeInstanceDisksResponse.h>
#include <tencentcloud/cvm/v20170312/model/InquiryPriceRunInstancesRequest.h>
#include <tencentcloud/cvm/v20170312/model/InquiryPriceRunInstancesResponse.h>
#include <tencentcloud/cvm/v20170312/model/ModifyChcAttributeRequest.h>
#include <tencentcloud/cvm/v20170312/model/ModifyChcAttributeResponse.h>
#include <tencentcloud/cvm/v20170312/model/ModifyDisasterRecoverGroupAttributeRequest.h>
#include <tencentcloud/cvm/v20170312/model/ModifyDisasterRecoverGroupAttributeResponse.h>
#include <tencentcloud/cvm/v20170312/model/ModifyHostsAttributeRequest.h>
#include <tencentcloud/cvm/v20170312/model/ModifyHostsAttributeResponse.h>
#include <tencentcloud/cvm/v20170312/model/ModifyImageAttributeRequest.h>
#include <tencentcloud/cvm/v20170312/model/ModifyImageAttributeResponse.h>
#include <tencentcloud/cvm/v20170312/model/ModifyImageSharePermissionRequest.h>
#include <tencentcloud/cvm/v20170312/model/ModifyImageSharePermissionResponse.h>
#include <tencentcloud/cvm/v20170312/model/ModifyInstancesAttributeRequest.h>
#include <tencentcloud/cvm/v20170312/model/ModifyInstancesAttributeResponse.h>
#include <tencentcloud/cvm/v20170312/model/ModifyInstancesProjectRequest.h>
#include <tencentcloud/cvm/v20170312/model/ModifyInstancesProjectResponse.h>
#include <tencentcloud/cvm/v20170312/model/ModifyInstancesVpcAttributeRequest.h>
#include <tencentcloud/cvm/v20170312/model/ModifyInstancesVpcAttributeResponse.h>
#include <tencentcloud/cvm/v20170312/model/ModifyKeyPairAttributeRequest.h>
#include <tencentcloud/cvm/v20170312/model/ModifyKeyPairAttributeResponse.h>
#include <tencentcloud/cvm/v20170312/model/ModifyLaunchTemplateDefaultVersionRequest.h>
#include <tencentcloud/cvm/v20170312/model/ModifyLaunchTemplateDefaultVersionResponse.h>
#include <tencentcloud/cvm/v20170312/model/PurchaseReservedInstancesOfferingRequest.h>
#include <tencentcloud/cvm/v20170312/model/PurchaseReservedInstancesOfferingResponse.h>
#include <tencentcloud/cvm/v20170312/model/RebootInstancesRequest.h>
#include <tencentcloud/cvm/v20170312/model/RebootInstancesResponse.h>
#include <tencentcloud/cvm/v20170312/model/RemoveChcAssistVpcRequest.h>
#include <tencentcloud/cvm/v20170312/model/RemoveChcAssistVpcResponse.h>
#include <tencentcloud/cvm/v20170312/model/RemoveChcDeployVpcRequest.h>
#include <tencentcloud/cvm/v20170312/model/RemoveChcDeployVpcResponse.h>
#include <tencentcloud/cvm/v20170312/model/ResetInstanceRequest.h>
#include <tencentcloud/cvm/v20170312/model/ResetInstanceResponse.h>
#include <tencentcloud/cvm/v20170312/model/ResetInstancesInternetMaxBandwidthRequest.h>
#include <tencentcloud/cvm/v20170312/model/ResetInstancesInternetMaxBandwidthResponse.h>
#include <tencentcloud/cvm/v20170312/model/ResetInstancesPasswordRequest.h>
#include <tencentcloud/cvm/v20170312/model/ResetInstancesPasswordResponse.h>
#include <tencentcloud/cvm/v20170312/model/ResetInstancesTypeRequest.h>
#include <tencentcloud/cvm/v20170312/model/ResetInstancesTypeResponse.h>
#include <tencentcloud/cvm/v20170312/model/ResizeInstanceDisksRequest.h>
#include <tencentcloud/cvm/v20170312/model/ResizeInstanceDisksResponse.h>
#include <tencentcloud/cvm/v20170312/model/RunInstancesRequest.h>
#include <tencentcloud/cvm/v20170312/model/RunInstancesResponse.h>
#include <tencentcloud/cvm/v20170312/model/StartInstancesRequest.h>
#include <tencentcloud/cvm/v20170312/model/StartInstancesResponse.h>
#include <tencentcloud/cvm/v20170312/model/StopInstancesRequest.h>
#include <tencentcloud/cvm/v20170312/model/StopInstancesResponse.h>
#include <tencentcloud/cvm/v20170312/model/SyncImagesRequest.h>
#include <tencentcloud/cvm/v20170312/model/SyncImagesResponse.h>
#include <tencentcloud/cvm/v20170312/model/TerminateInstancesRequest.h>
#include <tencentcloud/cvm/v20170312/model/TerminateInstancesResponse.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            class CvmClient : public AbstractClient
            {
            public:
                CvmClient(const Credential &credential, const std::string &region);
                CvmClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::AllocateHostsResponse> AllocateHostsOutcome;
                typedef std::future<AllocateHostsOutcome> AllocateHostsOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::AllocateHostsRequest&, AllocateHostsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AllocateHostsAsyncHandler;
                typedef Outcome<Core::Error, Model::AssociateInstancesKeyPairsResponse> AssociateInstancesKeyPairsOutcome;
                typedef std::future<AssociateInstancesKeyPairsOutcome> AssociateInstancesKeyPairsOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::AssociateInstancesKeyPairsRequest&, AssociateInstancesKeyPairsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AssociateInstancesKeyPairsAsyncHandler;
                typedef Outcome<Core::Error, Model::AssociateSecurityGroupsResponse> AssociateSecurityGroupsOutcome;
                typedef std::future<AssociateSecurityGroupsOutcome> AssociateSecurityGroupsOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::AssociateSecurityGroupsRequest&, AssociateSecurityGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AssociateSecurityGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::ConfigureChcAssistVpcResponse> ConfigureChcAssistVpcOutcome;
                typedef std::future<ConfigureChcAssistVpcOutcome> ConfigureChcAssistVpcOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::ConfigureChcAssistVpcRequest&, ConfigureChcAssistVpcOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ConfigureChcAssistVpcAsyncHandler;
                typedef Outcome<Core::Error, Model::ConfigureChcDeployVpcResponse> ConfigureChcDeployVpcOutcome;
                typedef std::future<ConfigureChcDeployVpcOutcome> ConfigureChcDeployVpcOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::ConfigureChcDeployVpcRequest&, ConfigureChcDeployVpcOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ConfigureChcDeployVpcAsyncHandler;
                typedef Outcome<Core::Error, Model::ConvertOperatingSystemsResponse> ConvertOperatingSystemsOutcome;
                typedef std::future<ConvertOperatingSystemsOutcome> ConvertOperatingSystemsOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::ConvertOperatingSystemsRequest&, ConvertOperatingSystemsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ConvertOperatingSystemsAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDisasterRecoverGroupResponse> CreateDisasterRecoverGroupOutcome;
                typedef std::future<CreateDisasterRecoverGroupOutcome> CreateDisasterRecoverGroupOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::CreateDisasterRecoverGroupRequest&, CreateDisasterRecoverGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDisasterRecoverGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateImageResponse> CreateImageOutcome;
                typedef std::future<CreateImageOutcome> CreateImageOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::CreateImageRequest&, CreateImageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateImageAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateKeyPairResponse> CreateKeyPairOutcome;
                typedef std::future<CreateKeyPairOutcome> CreateKeyPairOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::CreateKeyPairRequest&, CreateKeyPairOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateKeyPairAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateLaunchTemplateVersionResponse> CreateLaunchTemplateVersionOutcome;
                typedef std::future<CreateLaunchTemplateVersionOutcome> CreateLaunchTemplateVersionOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::CreateLaunchTemplateVersionRequest&, CreateLaunchTemplateVersionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateLaunchTemplateVersionAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDisasterRecoverGroupsResponse> DeleteDisasterRecoverGroupsOutcome;
                typedef std::future<DeleteDisasterRecoverGroupsOutcome> DeleteDisasterRecoverGroupsOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::DeleteDisasterRecoverGroupsRequest&, DeleteDisasterRecoverGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDisasterRecoverGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteImagesResponse> DeleteImagesOutcome;
                typedef std::future<DeleteImagesOutcome> DeleteImagesOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::DeleteImagesRequest&, DeleteImagesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteImagesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteKeyPairsResponse> DeleteKeyPairsOutcome;
                typedef std::future<DeleteKeyPairsOutcome> DeleteKeyPairsOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::DeleteKeyPairsRequest&, DeleteKeyPairsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteKeyPairsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteLaunchTemplateResponse> DeleteLaunchTemplateOutcome;
                typedef std::future<DeleteLaunchTemplateOutcome> DeleteLaunchTemplateOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::DeleteLaunchTemplateRequest&, DeleteLaunchTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLaunchTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteLaunchTemplateVersionsResponse> DeleteLaunchTemplateVersionsOutcome;
                typedef std::future<DeleteLaunchTemplateVersionsOutcome> DeleteLaunchTemplateVersionsOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::DeleteLaunchTemplateVersionsRequest&, DeleteLaunchTemplateVersionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLaunchTemplateVersionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeChcDeniedActionsResponse> DescribeChcDeniedActionsOutcome;
                typedef std::future<DescribeChcDeniedActionsOutcome> DescribeChcDeniedActionsOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::DescribeChcDeniedActionsRequest&, DescribeChcDeniedActionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeChcDeniedActionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeChcHostsResponse> DescribeChcHostsOutcome;
                typedef std::future<DescribeChcHostsOutcome> DescribeChcHostsOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::DescribeChcHostsRequest&, DescribeChcHostsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeChcHostsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDisasterRecoverGroupQuotaResponse> DescribeDisasterRecoverGroupQuotaOutcome;
                typedef std::future<DescribeDisasterRecoverGroupQuotaOutcome> DescribeDisasterRecoverGroupQuotaOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::DescribeDisasterRecoverGroupQuotaRequest&, DescribeDisasterRecoverGroupQuotaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDisasterRecoverGroupQuotaAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDisasterRecoverGroupsResponse> DescribeDisasterRecoverGroupsOutcome;
                typedef std::future<DescribeDisasterRecoverGroupsOutcome> DescribeDisasterRecoverGroupsOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::DescribeDisasterRecoverGroupsRequest&, DescribeDisasterRecoverGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDisasterRecoverGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeHostsResponse> DescribeHostsOutcome;
                typedef std::future<DescribeHostsOutcome> DescribeHostsOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::DescribeHostsRequest&, DescribeHostsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHostsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeImageFromFamilyResponse> DescribeImageFromFamilyOutcome;
                typedef std::future<DescribeImageFromFamilyOutcome> DescribeImageFromFamilyOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::DescribeImageFromFamilyRequest&, DescribeImageFromFamilyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageFromFamilyAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeImageQuotaResponse> DescribeImageQuotaOutcome;
                typedef std::future<DescribeImageQuotaOutcome> DescribeImageQuotaOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::DescribeImageQuotaRequest&, DescribeImageQuotaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageQuotaAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeImageSharePermissionResponse> DescribeImageSharePermissionOutcome;
                typedef std::future<DescribeImageSharePermissionOutcome> DescribeImageSharePermissionOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::DescribeImageSharePermissionRequest&, DescribeImageSharePermissionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageSharePermissionAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeImagesResponse> DescribeImagesOutcome;
                typedef std::future<DescribeImagesOutcome> DescribeImagesOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::DescribeImagesRequest&, DescribeImagesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImagesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeImportImageOsResponse> DescribeImportImageOsOutcome;
                typedef std::future<DescribeImportImageOsOutcome> DescribeImportImageOsOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::DescribeImportImageOsRequest&, DescribeImportImageOsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImportImageOsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceFamilyConfigsResponse> DescribeInstanceFamilyConfigsOutcome;
                typedef std::future<DescribeInstanceFamilyConfigsOutcome> DescribeInstanceFamilyConfigsOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::DescribeInstanceFamilyConfigsRequest&, DescribeInstanceFamilyConfigsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceFamilyConfigsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstancesResponse> DescribeInstancesOutcome;
                typedef std::future<DescribeInstancesOutcome> DescribeInstancesOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::DescribeInstancesRequest&, DescribeInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstancesOperationLimitResponse> DescribeInstancesOperationLimitOutcome;
                typedef std::future<DescribeInstancesOperationLimitOutcome> DescribeInstancesOperationLimitOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::DescribeInstancesOperationLimitRequest&, DescribeInstancesOperationLimitOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstancesOperationLimitAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstancesStatusResponse> DescribeInstancesStatusOutcome;
                typedef std::future<DescribeInstancesStatusOutcome> DescribeInstancesStatusOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::DescribeInstancesStatusRequest&, DescribeInstancesStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstancesStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInternetChargeTypeConfigsResponse> DescribeInternetChargeTypeConfigsOutcome;
                typedef std::future<DescribeInternetChargeTypeConfigsOutcome> DescribeInternetChargeTypeConfigsOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::DescribeInternetChargeTypeConfigsRequest&, DescribeInternetChargeTypeConfigsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInternetChargeTypeConfigsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeKeyPairsResponse> DescribeKeyPairsOutcome;
                typedef std::future<DescribeKeyPairsOutcome> DescribeKeyPairsOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::DescribeKeyPairsRequest&, DescribeKeyPairsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeKeyPairsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLaunchTemplateVersionsResponse> DescribeLaunchTemplateVersionsOutcome;
                typedef std::future<DescribeLaunchTemplateVersionsOutcome> DescribeLaunchTemplateVersionsOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::DescribeLaunchTemplateVersionsRequest&, DescribeLaunchTemplateVersionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLaunchTemplateVersionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLaunchTemplatesResponse> DescribeLaunchTemplatesOutcome;
                typedef std::future<DescribeLaunchTemplatesOutcome> DescribeLaunchTemplatesOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::DescribeLaunchTemplatesRequest&, DescribeLaunchTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLaunchTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRegionsResponse> DescribeRegionsOutcome;
                typedef std::future<DescribeRegionsOutcome> DescribeRegionsOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::DescribeRegionsRequest&, DescribeRegionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRegionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeReservedInstancesConfigInfosResponse> DescribeReservedInstancesConfigInfosOutcome;
                typedef std::future<DescribeReservedInstancesConfigInfosOutcome> DescribeReservedInstancesConfigInfosOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::DescribeReservedInstancesConfigInfosRequest&, DescribeReservedInstancesConfigInfosOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeReservedInstancesConfigInfosAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeReservedInstancesOfferingsResponse> DescribeReservedInstancesOfferingsOutcome;
                typedef std::future<DescribeReservedInstancesOfferingsOutcome> DescribeReservedInstancesOfferingsOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::DescribeReservedInstancesOfferingsRequest&, DescribeReservedInstancesOfferingsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeReservedInstancesOfferingsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeZoneInstanceConfigInfosResponse> DescribeZoneInstanceConfigInfosOutcome;
                typedef std::future<DescribeZoneInstanceConfigInfosOutcome> DescribeZoneInstanceConfigInfosOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::DescribeZoneInstanceConfigInfosRequest&, DescribeZoneInstanceConfigInfosOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeZoneInstanceConfigInfosAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeZonesResponse> DescribeZonesOutcome;
                typedef std::future<DescribeZonesOutcome> DescribeZonesOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::DescribeZonesRequest&, DescribeZonesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeZonesAsyncHandler;
                typedef Outcome<Core::Error, Model::DisassociateInstancesKeyPairsResponse> DisassociateInstancesKeyPairsOutcome;
                typedef std::future<DisassociateInstancesKeyPairsOutcome> DisassociateInstancesKeyPairsOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::DisassociateInstancesKeyPairsRequest&, DisassociateInstancesKeyPairsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisassociateInstancesKeyPairsAsyncHandler;
                typedef Outcome<Core::Error, Model::DisassociateSecurityGroupsResponse> DisassociateSecurityGroupsOutcome;
                typedef std::future<DisassociateSecurityGroupsOutcome> DisassociateSecurityGroupsOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::DisassociateSecurityGroupsRequest&, DisassociateSecurityGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisassociateSecurityGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::EnterRescueModeResponse> EnterRescueModeOutcome;
                typedef std::future<EnterRescueModeOutcome> EnterRescueModeOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::EnterRescueModeRequest&, EnterRescueModeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EnterRescueModeAsyncHandler;
                typedef Outcome<Core::Error, Model::ExitRescueModeResponse> ExitRescueModeOutcome;
                typedef std::future<ExitRescueModeOutcome> ExitRescueModeOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::ExitRescueModeRequest&, ExitRescueModeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExitRescueModeAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportImagesResponse> ExportImagesOutcome;
                typedef std::future<ExportImagesOutcome> ExportImagesOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::ExportImagesRequest&, ExportImagesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportImagesAsyncHandler;
                typedef Outcome<Core::Error, Model::ImportImageResponse> ImportImageOutcome;
                typedef std::future<ImportImageOutcome> ImportImageOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::ImportImageRequest&, ImportImageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ImportImageAsyncHandler;
                typedef Outcome<Core::Error, Model::ImportKeyPairResponse> ImportKeyPairOutcome;
                typedef std::future<ImportKeyPairOutcome> ImportKeyPairOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::ImportKeyPairRequest&, ImportKeyPairOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ImportKeyPairAsyncHandler;
                typedef Outcome<Core::Error, Model::InquirePricePurchaseReservedInstancesOfferingResponse> InquirePricePurchaseReservedInstancesOfferingOutcome;
                typedef std::future<InquirePricePurchaseReservedInstancesOfferingOutcome> InquirePricePurchaseReservedInstancesOfferingOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::InquirePricePurchaseReservedInstancesOfferingRequest&, InquirePricePurchaseReservedInstancesOfferingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InquirePricePurchaseReservedInstancesOfferingAsyncHandler;
                typedef Outcome<Core::Error, Model::InquiryPriceResetInstanceResponse> InquiryPriceResetInstanceOutcome;
                typedef std::future<InquiryPriceResetInstanceOutcome> InquiryPriceResetInstanceOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::InquiryPriceResetInstanceRequest&, InquiryPriceResetInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InquiryPriceResetInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::InquiryPriceResetInstancesInternetMaxBandwidthResponse> InquiryPriceResetInstancesInternetMaxBandwidthOutcome;
                typedef std::future<InquiryPriceResetInstancesInternetMaxBandwidthOutcome> InquiryPriceResetInstancesInternetMaxBandwidthOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::InquiryPriceResetInstancesInternetMaxBandwidthRequest&, InquiryPriceResetInstancesInternetMaxBandwidthOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InquiryPriceResetInstancesInternetMaxBandwidthAsyncHandler;
                typedef Outcome<Core::Error, Model::InquiryPriceResetInstancesTypeResponse> InquiryPriceResetInstancesTypeOutcome;
                typedef std::future<InquiryPriceResetInstancesTypeOutcome> InquiryPriceResetInstancesTypeOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::InquiryPriceResetInstancesTypeRequest&, InquiryPriceResetInstancesTypeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InquiryPriceResetInstancesTypeAsyncHandler;
                typedef Outcome<Core::Error, Model::InquiryPriceResizeInstanceDisksResponse> InquiryPriceResizeInstanceDisksOutcome;
                typedef std::future<InquiryPriceResizeInstanceDisksOutcome> InquiryPriceResizeInstanceDisksOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::InquiryPriceResizeInstanceDisksRequest&, InquiryPriceResizeInstanceDisksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InquiryPriceResizeInstanceDisksAsyncHandler;
                typedef Outcome<Core::Error, Model::InquiryPriceRunInstancesResponse> InquiryPriceRunInstancesOutcome;
                typedef std::future<InquiryPriceRunInstancesOutcome> InquiryPriceRunInstancesOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::InquiryPriceRunInstancesRequest&, InquiryPriceRunInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InquiryPriceRunInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyChcAttributeResponse> ModifyChcAttributeOutcome;
                typedef std::future<ModifyChcAttributeOutcome> ModifyChcAttributeOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::ModifyChcAttributeRequest&, ModifyChcAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyChcAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDisasterRecoverGroupAttributeResponse> ModifyDisasterRecoverGroupAttributeOutcome;
                typedef std::future<ModifyDisasterRecoverGroupAttributeOutcome> ModifyDisasterRecoverGroupAttributeOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::ModifyDisasterRecoverGroupAttributeRequest&, ModifyDisasterRecoverGroupAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDisasterRecoverGroupAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyHostsAttributeResponse> ModifyHostsAttributeOutcome;
                typedef std::future<ModifyHostsAttributeOutcome> ModifyHostsAttributeOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::ModifyHostsAttributeRequest&, ModifyHostsAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyHostsAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyImageAttributeResponse> ModifyImageAttributeOutcome;
                typedef std::future<ModifyImageAttributeOutcome> ModifyImageAttributeOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::ModifyImageAttributeRequest&, ModifyImageAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyImageAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyImageSharePermissionResponse> ModifyImageSharePermissionOutcome;
                typedef std::future<ModifyImageSharePermissionOutcome> ModifyImageSharePermissionOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::ModifyImageSharePermissionRequest&, ModifyImageSharePermissionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyImageSharePermissionAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyInstancesAttributeResponse> ModifyInstancesAttributeOutcome;
                typedef std::future<ModifyInstancesAttributeOutcome> ModifyInstancesAttributeOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::ModifyInstancesAttributeRequest&, ModifyInstancesAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstancesAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyInstancesProjectResponse> ModifyInstancesProjectOutcome;
                typedef std::future<ModifyInstancesProjectOutcome> ModifyInstancesProjectOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::ModifyInstancesProjectRequest&, ModifyInstancesProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstancesProjectAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyInstancesVpcAttributeResponse> ModifyInstancesVpcAttributeOutcome;
                typedef std::future<ModifyInstancesVpcAttributeOutcome> ModifyInstancesVpcAttributeOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::ModifyInstancesVpcAttributeRequest&, ModifyInstancesVpcAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstancesVpcAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyKeyPairAttributeResponse> ModifyKeyPairAttributeOutcome;
                typedef std::future<ModifyKeyPairAttributeOutcome> ModifyKeyPairAttributeOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::ModifyKeyPairAttributeRequest&, ModifyKeyPairAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyKeyPairAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyLaunchTemplateDefaultVersionResponse> ModifyLaunchTemplateDefaultVersionOutcome;
                typedef std::future<ModifyLaunchTemplateDefaultVersionOutcome> ModifyLaunchTemplateDefaultVersionOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::ModifyLaunchTemplateDefaultVersionRequest&, ModifyLaunchTemplateDefaultVersionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLaunchTemplateDefaultVersionAsyncHandler;
                typedef Outcome<Core::Error, Model::PurchaseReservedInstancesOfferingResponse> PurchaseReservedInstancesOfferingOutcome;
                typedef std::future<PurchaseReservedInstancesOfferingOutcome> PurchaseReservedInstancesOfferingOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::PurchaseReservedInstancesOfferingRequest&, PurchaseReservedInstancesOfferingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PurchaseReservedInstancesOfferingAsyncHandler;
                typedef Outcome<Core::Error, Model::RebootInstancesResponse> RebootInstancesOutcome;
                typedef std::future<RebootInstancesOutcome> RebootInstancesOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::RebootInstancesRequest&, RebootInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RebootInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::RemoveChcAssistVpcResponse> RemoveChcAssistVpcOutcome;
                typedef std::future<RemoveChcAssistVpcOutcome> RemoveChcAssistVpcOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::RemoveChcAssistVpcRequest&, RemoveChcAssistVpcOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RemoveChcAssistVpcAsyncHandler;
                typedef Outcome<Core::Error, Model::RemoveChcDeployVpcResponse> RemoveChcDeployVpcOutcome;
                typedef std::future<RemoveChcDeployVpcOutcome> RemoveChcDeployVpcOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::RemoveChcDeployVpcRequest&, RemoveChcDeployVpcOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RemoveChcDeployVpcAsyncHandler;
                typedef Outcome<Core::Error, Model::ResetInstanceResponse> ResetInstanceOutcome;
                typedef std::future<ResetInstanceOutcome> ResetInstanceOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::ResetInstanceRequest&, ResetInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResetInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::ResetInstancesInternetMaxBandwidthResponse> ResetInstancesInternetMaxBandwidthOutcome;
                typedef std::future<ResetInstancesInternetMaxBandwidthOutcome> ResetInstancesInternetMaxBandwidthOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::ResetInstancesInternetMaxBandwidthRequest&, ResetInstancesInternetMaxBandwidthOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResetInstancesInternetMaxBandwidthAsyncHandler;
                typedef Outcome<Core::Error, Model::ResetInstancesPasswordResponse> ResetInstancesPasswordOutcome;
                typedef std::future<ResetInstancesPasswordOutcome> ResetInstancesPasswordOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::ResetInstancesPasswordRequest&, ResetInstancesPasswordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResetInstancesPasswordAsyncHandler;
                typedef Outcome<Core::Error, Model::ResetInstancesTypeResponse> ResetInstancesTypeOutcome;
                typedef std::future<ResetInstancesTypeOutcome> ResetInstancesTypeOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::ResetInstancesTypeRequest&, ResetInstancesTypeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResetInstancesTypeAsyncHandler;
                typedef Outcome<Core::Error, Model::ResizeInstanceDisksResponse> ResizeInstanceDisksOutcome;
                typedef std::future<ResizeInstanceDisksOutcome> ResizeInstanceDisksOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::ResizeInstanceDisksRequest&, ResizeInstanceDisksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResizeInstanceDisksAsyncHandler;
                typedef Outcome<Core::Error, Model::RunInstancesResponse> RunInstancesOutcome;
                typedef std::future<RunInstancesOutcome> RunInstancesOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::RunInstancesRequest&, RunInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RunInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::StartInstancesResponse> StartInstancesOutcome;
                typedef std::future<StartInstancesOutcome> StartInstancesOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::StartInstancesRequest&, StartInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::StopInstancesResponse> StopInstancesOutcome;
                typedef std::future<StopInstancesOutcome> StopInstancesOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::StopInstancesRequest&, StopInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::SyncImagesResponse> SyncImagesOutcome;
                typedef std::future<SyncImagesOutcome> SyncImagesOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::SyncImagesRequest&, SyncImagesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SyncImagesAsyncHandler;
                typedef Outcome<Core::Error, Model::TerminateInstancesResponse> TerminateInstancesOutcome;
                typedef std::future<TerminateInstancesOutcome> TerminateInstancesOutcomeCallable;
                typedef std::function<void(const CvmClient*, const Model::TerminateInstancesRequest&, TerminateInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TerminateInstancesAsyncHandler;



                /**
                 *This API is used to create CDH instances with specified configuration.
* When HostChargeType is PREPAID, the HostChargePrepaid parameter must be specified.
                 * @param req AllocateHostsRequest
                 * @return AllocateHostsOutcome
                 */
                AllocateHostsOutcome AllocateHosts(const Model::AllocateHostsRequest &request);
                void AllocateHostsAsync(const Model::AllocateHostsRequest& request, const AllocateHostsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AllocateHostsOutcomeCallable AllocateHostsCallable(const Model::AllocateHostsRequest& request);

                /**
                 *This API is used to associate key pairs with instances.

* If the public key of a key pair is written to the `SSH` configuration of the instance, users will be able to log in to the instance with the private key of the key pair.
* If the instance is already associated with a key, the old key will become invalid.
If you currently use a password to log in, you will no longer be able to do so after you associate the instance with a key.
* Batch operations are supported. The maximum number of instances in each request is 100. If any instance in the request cannot be associated with a key, you will get an error code.
                 * @param req AssociateInstancesKeyPairsRequest
                 * @return AssociateInstancesKeyPairsOutcome
                 */
                AssociateInstancesKeyPairsOutcome AssociateInstancesKeyPairs(const Model::AssociateInstancesKeyPairsRequest &request);
                void AssociateInstancesKeyPairsAsync(const Model::AssociateInstancesKeyPairsRequest& request, const AssociateInstancesKeyPairsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AssociateInstancesKeyPairsOutcomeCallable AssociateInstancesKeyPairsCallable(const Model::AssociateInstancesKeyPairsRequest& request);

                /**
                 *This API is used to associate security groups with specified instances.
                 * @param req AssociateSecurityGroupsRequest
                 * @return AssociateSecurityGroupsOutcome
                 */
                AssociateSecurityGroupsOutcome AssociateSecurityGroups(const Model::AssociateSecurityGroupsRequest &request);
                void AssociateSecurityGroupsAsync(const Model::AssociateSecurityGroupsRequest& request, const AssociateSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AssociateSecurityGroupsOutcomeCallable AssociateSecurityGroupsCallable(const Model::AssociateSecurityGroupsRequest& request);

                /**
                 *This API is used to configure the out-of-band network and deployment network of a CHC host.
                 * @param req ConfigureChcAssistVpcRequest
                 * @return ConfigureChcAssistVpcOutcome
                 */
                ConfigureChcAssistVpcOutcome ConfigureChcAssistVpc(const Model::ConfigureChcAssistVpcRequest &request);
                void ConfigureChcAssistVpcAsync(const Model::ConfigureChcAssistVpcRequest& request, const ConfigureChcAssistVpcAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ConfigureChcAssistVpcOutcomeCallable ConfigureChcAssistVpcCallable(const Model::ConfigureChcAssistVpcRequest& request);

                /**
                 *This API is used to configure the deployment network of a CHC host.
                 * @param req ConfigureChcDeployVpcRequest
                 * @return ConfigureChcDeployVpcOutcome
                 */
                ConfigureChcDeployVpcOutcome ConfigureChcDeployVpc(const Model::ConfigureChcDeployVpcRequest &request);
                void ConfigureChcDeployVpcAsync(const Model::ConfigureChcDeployVpcRequest& request, const ConfigureChcDeployVpcAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ConfigureChcDeployVpcOutcomeCallable ConfigureChcDeployVpcCallable(const Model::ConfigureChcDeployVpcRequest& request);

                /**
                 *This API is used to switch the operating system of an instance with CentOS 7 or CentOS 8 as the source operating system.
                 * @param req ConvertOperatingSystemsRequest
                 * @return ConvertOperatingSystemsOutcome
                 */
                ConvertOperatingSystemsOutcome ConvertOperatingSystems(const Model::ConvertOperatingSystemsRequest &request);
                void ConvertOperatingSystemsAsync(const Model::ConvertOperatingSystemsRequest& request, const ConvertOperatingSystemsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ConvertOperatingSystemsOutcomeCallable ConvertOperatingSystemsCallable(const Model::ConvertOperatingSystemsRequest& request);

                /**
                 *This API is used to create a [spread placement group](https://intl.cloud.tencent.com/document/product/213/15486?from_cn_redirect=1). After you create one, you can specify it for an instance when you [create the instance](https://intl.cloud.tencent.com/document/api/213/15730?from_cn_redirect=1), 
                 * @param req CreateDisasterRecoverGroupRequest
                 * @return CreateDisasterRecoverGroupOutcome
                 */
                CreateDisasterRecoverGroupOutcome CreateDisasterRecoverGroup(const Model::CreateDisasterRecoverGroupRequest &request);
                void CreateDisasterRecoverGroupAsync(const Model::CreateDisasterRecoverGroupRequest& request, const CreateDisasterRecoverGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDisasterRecoverGroupOutcomeCallable CreateDisasterRecoverGroupCallable(const Model::CreateDisasterRecoverGroupRequest& request);

                /**
                 *This API is used to create a new image with the system disk of an instance. The image can be used to create new instances.
                 * @param req CreateImageRequest
                 * @return CreateImageOutcome
                 */
                CreateImageOutcome CreateImage(const Model::CreateImageRequest &request);
                void CreateImageAsync(const Model::CreateImageRequest& request, const CreateImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateImageOutcomeCallable CreateImageCallable(const Model::CreateImageRequest& request);

                /**
                 *This API is used to create an `OpenSSH RSA` key pair, which you can use to log in to a `Linux` instance.

* You only need to specify a name, and the system will automatically create a key pair and return its `ID` and the public and private keys.
* The name of the key pair must be unique.
* You can save the private key to a file and use it as an authentication method for `SSH`.
* Tencent Cloud does not save users' private keys. Be sure to save it yourself.
                 * @param req CreateKeyPairRequest
                 * @return CreateKeyPairOutcome
                 */
                CreateKeyPairOutcome CreateKeyPair(const Model::CreateKeyPairRequest &request);
                void CreateKeyPairAsync(const Model::CreateKeyPairRequest& request, const CreateKeyPairAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateKeyPairOutcomeCallable CreateKeyPairCallable(const Model::CreateKeyPairRequest& request);

                /**
                 *This API is used to create an instance launch template based on the specified template ID and the corresponding template version number. The default version number will be used when no template version numbers are specified. Each instance launch template can have up to 30 version numbers.
                 * @param req CreateLaunchTemplateVersionRequest
                 * @return CreateLaunchTemplateVersionOutcome
                 */
                CreateLaunchTemplateVersionOutcome CreateLaunchTemplateVersion(const Model::CreateLaunchTemplateVersionRequest &request);
                void CreateLaunchTemplateVersionAsync(const Model::CreateLaunchTemplateVersionRequest& request, const CreateLaunchTemplateVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateLaunchTemplateVersionOutcomeCallable CreateLaunchTemplateVersionCallable(const Model::CreateLaunchTemplateVersionRequest& request);

                /**
                 *This API is used to delete a [spread placement group](https://intl.cloud.tencent.com/document/product/213/15486?from_cn_redirect=1). Only empty placement groups can be deleted. To delete a non-empty group, you need to terminate all the CVM instances in it first. Otherwise, the deletion will fail.
                 * @param req DeleteDisasterRecoverGroupsRequest
                 * @return DeleteDisasterRecoverGroupsOutcome
                 */
                DeleteDisasterRecoverGroupsOutcome DeleteDisasterRecoverGroups(const Model::DeleteDisasterRecoverGroupsRequest &request);
                void DeleteDisasterRecoverGroupsAsync(const Model::DeleteDisasterRecoverGroupsRequest& request, const DeleteDisasterRecoverGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDisasterRecoverGroupsOutcomeCallable DeleteDisasterRecoverGroupsCallable(const Model::DeleteDisasterRecoverGroupsRequest& request);

                /**
                 *This API is used to delete one or more images.

* If the [ImageState](https://intl.cloud.tencent.com/document/product/213/15753?from_cn_redirect=1#Image) of an image is `CREATING` or `USING`, the image cannot be deleted. Call the [DescribeImages](https://intl.cloud.tencent.com/document/api/213/15715?from_cn_redirect=1) API to query the image status.
* Up to 10 custom images are allowed in each region. If you have run out of the quota, delete unused images to create new ones.
* A shared image cannot be deleted.
                 * @param req DeleteImagesRequest
                 * @return DeleteImagesOutcome
                 */
                DeleteImagesOutcome DeleteImages(const Model::DeleteImagesRequest &request);
                void DeleteImagesAsync(const Model::DeleteImagesRequest& request, const DeleteImagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteImagesOutcomeCallable DeleteImagesCallable(const Model::DeleteImagesRequest& request);

                /**
                 *This API is used to delete the key pairs hosted in Tencent Cloud.

* You can delete multiple key pairs at the same time.
* A key pair used by an instance or image cannot be deleted. Therefore, you need to verify whether all the key pairs have been deleted successfully.
                 * @param req DeleteKeyPairsRequest
                 * @return DeleteKeyPairsOutcome
                 */
                DeleteKeyPairsOutcome DeleteKeyPairs(const Model::DeleteKeyPairsRequest &request);
                void DeleteKeyPairsAsync(const Model::DeleteKeyPairsRequest& request, const DeleteKeyPairsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteKeyPairsOutcomeCallable DeleteKeyPairsCallable(const Model::DeleteKeyPairsRequest& request);

                /**
                 *This API is used to delete an instance launch template.
                 * @param req DeleteLaunchTemplateRequest
                 * @return DeleteLaunchTemplateOutcome
                 */
                DeleteLaunchTemplateOutcome DeleteLaunchTemplate(const Model::DeleteLaunchTemplateRequest &request);
                void DeleteLaunchTemplateAsync(const Model::DeleteLaunchTemplateRequest& request, const DeleteLaunchTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteLaunchTemplateOutcomeCallable DeleteLaunchTemplateCallable(const Model::DeleteLaunchTemplateRequest& request);

                /**
                 *This API is used to delete one or more instance launch template versions.
                 * @param req DeleteLaunchTemplateVersionsRequest
                 * @return DeleteLaunchTemplateVersionsOutcome
                 */
                DeleteLaunchTemplateVersionsOutcome DeleteLaunchTemplateVersions(const Model::DeleteLaunchTemplateVersionsRequest &request);
                void DeleteLaunchTemplateVersionsAsync(const Model::DeleteLaunchTemplateVersionsRequest& request, const DeleteLaunchTemplateVersionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteLaunchTemplateVersionsOutcomeCallable DeleteLaunchTemplateVersionsCallable(const Model::DeleteLaunchTemplateVersionsRequest& request);

                /**
                 *This API is used to query the actions not allowed for the specified CHC instances.
                 * @param req DescribeChcDeniedActionsRequest
                 * @return DescribeChcDeniedActionsOutcome
                 */
                DescribeChcDeniedActionsOutcome DescribeChcDeniedActions(const Model::DescribeChcDeniedActionsRequest &request);
                void DescribeChcDeniedActionsAsync(const Model::DescribeChcDeniedActionsRequest& request, const DescribeChcDeniedActionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeChcDeniedActionsOutcomeCallable DescribeChcDeniedActionsCallable(const Model::DescribeChcDeniedActionsRequest& request);

                /**
                 *This API is used to query the details of one or more CHC host.

* You can filter the query results with the instance ID, name or device type. See `Filter` for more information.
* If no parameter is defined, a certain number of instances under the current account will be returned. The number is specified by `Limit` and is `20` by default.
                 * @param req DescribeChcHostsRequest
                 * @return DescribeChcHostsOutcome
                 */
                DescribeChcHostsOutcome DescribeChcHosts(const Model::DescribeChcHostsRequest &request);
                void DescribeChcHostsAsync(const Model::DescribeChcHostsRequest& request, const DescribeChcHostsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeChcHostsOutcomeCallable DescribeChcHostsCallable(const Model::DescribeChcHostsRequest& request);

                /**
                 *This API is used to query the quota of [spread placement groups](https://intl.cloud.tencent.com/document/product/213/15486?from_cn_redirect=1).
                 * @param req DescribeDisasterRecoverGroupQuotaRequest
                 * @return DescribeDisasterRecoverGroupQuotaOutcome
                 */
                DescribeDisasterRecoverGroupQuotaOutcome DescribeDisasterRecoverGroupQuota(const Model::DescribeDisasterRecoverGroupQuotaRequest &request);
                void DescribeDisasterRecoverGroupQuotaAsync(const Model::DescribeDisasterRecoverGroupQuotaRequest& request, const DescribeDisasterRecoverGroupQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDisasterRecoverGroupQuotaOutcomeCallable DescribeDisasterRecoverGroupQuotaCallable(const Model::DescribeDisasterRecoverGroupQuotaRequest& request);

                /**
                 *This API is used to query the information on [spread placement groups](https://intl.cloud.tencent.com/document/product/213/15486?from_cn_redirect=1).
                 * @param req DescribeDisasterRecoverGroupsRequest
                 * @return DescribeDisasterRecoverGroupsOutcome
                 */
                DescribeDisasterRecoverGroupsOutcome DescribeDisasterRecoverGroups(const Model::DescribeDisasterRecoverGroupsRequest &request);
                void DescribeDisasterRecoverGroupsAsync(const Model::DescribeDisasterRecoverGroupsRequest& request, const DescribeDisasterRecoverGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDisasterRecoverGroupsOutcomeCallable DescribeDisasterRecoverGroupsCallable(const Model::DescribeDisasterRecoverGroupsRequest& request);

                /**
                 *This API is used to query the details of CDH instances.
                 * @param req DescribeHostsRequest
                 * @return DescribeHostsOutcome
                 */
                DescribeHostsOutcome DescribeHosts(const Model::DescribeHostsRequest &request);
                void DescribeHostsAsync(const Model::DescribeHostsRequest& request, const DescribeHostsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeHostsOutcomeCallable DescribeHostsCallable(const Model::DescribeHostsRequest& request);

                /**
                 *This API is used to view information about available images within an image family.
                 * @param req DescribeImageFromFamilyRequest
                 * @return DescribeImageFromFamilyOutcome
                 */
                DescribeImageFromFamilyOutcome DescribeImageFromFamily(const Model::DescribeImageFromFamilyRequest &request);
                void DescribeImageFromFamilyAsync(const Model::DescribeImageFromFamilyRequest& request, const DescribeImageFromFamilyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeImageFromFamilyOutcomeCallable DescribeImageFromFamilyCallable(const Model::DescribeImageFromFamilyRequest& request);

                /**
                 *This API is used to query the image quota of an user account.
                 * @param req DescribeImageQuotaRequest
                 * @return DescribeImageQuotaOutcome
                 */
                DescribeImageQuotaOutcome DescribeImageQuota(const Model::DescribeImageQuotaRequest &request);
                void DescribeImageQuotaAsync(const Model::DescribeImageQuotaRequest& request, const DescribeImageQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeImageQuotaOutcomeCallable DescribeImageQuotaCallable(const Model::DescribeImageQuotaRequest& request);

                /**
                 *This API is used to query image sharing information.
                 * @param req DescribeImageSharePermissionRequest
                 * @return DescribeImageSharePermissionOutcome
                 */
                DescribeImageSharePermissionOutcome DescribeImageSharePermission(const Model::DescribeImageSharePermissionRequest &request);
                void DescribeImageSharePermissionAsync(const Model::DescribeImageSharePermissionRequest& request, const DescribeImageSharePermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeImageSharePermissionOutcomeCallable DescribeImageSharePermissionCallable(const Model::DescribeImageSharePermissionRequest& request);

                /**
                 *This API is used to view the list of images.

* You specify the image ID or set filters to query the details of certain images.
* You can specify `Offset` and `Limit` to select a certain part of the results. By default, the information on the first 20 matching results is returned.
                 * @param req DescribeImagesRequest
                 * @return DescribeImagesOutcome
                 */
                DescribeImagesOutcome DescribeImages(const Model::DescribeImagesRequest &request);
                void DescribeImagesAsync(const Model::DescribeImagesRequest& request, const DescribeImagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeImagesOutcomeCallable DescribeImagesCallable(const Model::DescribeImagesRequest& request);

                /**
                 *This API is used to query the list of supported operating systems of imported images.
                 * @param req DescribeImportImageOsRequest
                 * @return DescribeImportImageOsOutcome
                 */
                DescribeImportImageOsOutcome DescribeImportImageOs(const Model::DescribeImportImageOsRequest &request);
                void DescribeImportImageOsAsync(const Model::DescribeImportImageOsRequest& request, const DescribeImportImageOsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeImportImageOsOutcomeCallable DescribeImportImageOsCallable(const Model::DescribeImportImageOsRequest& request);

                /**
                 *This API is used to query a list of model families available to the current user in the current region.
                 * @param req DescribeInstanceFamilyConfigsRequest
                 * @return DescribeInstanceFamilyConfigsOutcome
                 */
                DescribeInstanceFamilyConfigsOutcome DescribeInstanceFamilyConfigs(const Model::DescribeInstanceFamilyConfigsRequest &request);
                void DescribeInstanceFamilyConfigsAsync(const Model::DescribeInstanceFamilyConfigsRequest& request, const DescribeInstanceFamilyConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceFamilyConfigsOutcomeCallable DescribeInstanceFamilyConfigsCallable(const Model::DescribeInstanceFamilyConfigsRequest& request);

                /**
                 *This API is used to query the details of instances.

* You can filter the query results with the instance `ID`, name, or billing method. See `Filter` for more information.
* If no parameter is defined, a certain number of instances under the current account will be returned. The number is specified by `Limit` and is 20 by default.
                 * @param req DescribeInstancesRequest
                 * @return DescribeInstancesOutcome
                 */
                DescribeInstancesOutcome DescribeInstances(const Model::DescribeInstancesRequest &request);
                void DescribeInstancesAsync(const Model::DescribeInstancesRequest& request, const DescribeInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstancesOutcomeCallable DescribeInstancesCallable(const Model::DescribeInstancesRequest& request);

                /**
                 *This API is used to query limitations on operations on an instance.

* Currently you can use this API to query the maximum number of times you can modify the configuration of an instance.
                 * @param req DescribeInstancesOperationLimitRequest
                 * @return DescribeInstancesOperationLimitOutcome
                 */
                DescribeInstancesOperationLimitOutcome DescribeInstancesOperationLimit(const Model::DescribeInstancesOperationLimitRequest &request);
                void DescribeInstancesOperationLimitAsync(const Model::DescribeInstancesOperationLimitRequest& request, const DescribeInstancesOperationLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstancesOperationLimitOutcomeCallable DescribeInstancesOperationLimitCallable(const Model::DescribeInstancesOperationLimitRequest& request);

                /**
                 *This API is used to query the status of instances.

* You can query the status of an instance with its `ID`.
* If no parameter is defined, the status of a certain number of instances under the current account will be returned. The number is specified by `Limit` and is 20 by default.
                 * @param req DescribeInstancesStatusRequest
                 * @return DescribeInstancesStatusOutcome
                 */
                DescribeInstancesStatusOutcome DescribeInstancesStatus(const Model::DescribeInstancesStatusRequest &request);
                void DescribeInstancesStatusAsync(const Model::DescribeInstancesStatusRequest& request, const DescribeInstancesStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstancesStatusOutcomeCallable DescribeInstancesStatusCallable(const Model::DescribeInstancesStatusRequest& request);

                /**
                 *This API is used to query the network billing methods.
                 * @param req DescribeInternetChargeTypeConfigsRequest
                 * @return DescribeInternetChargeTypeConfigsOutcome
                 */
                DescribeInternetChargeTypeConfigsOutcome DescribeInternetChargeTypeConfigs(const Model::DescribeInternetChargeTypeConfigsRequest &request);
                void DescribeInternetChargeTypeConfigsAsync(const Model::DescribeInternetChargeTypeConfigsRequest& request, const DescribeInternetChargeTypeConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInternetChargeTypeConfigsOutcomeCallable DescribeInternetChargeTypeConfigsCallable(const Model::DescribeInternetChargeTypeConfigsRequest& request);

                /**
                 *This API is used to query key pairs.

* A key pair is a pair of keys generated by an algorithm in which the public key is available to the public and the private key is available only to the user. You can use this API to query the public key but not the private key.
                 * @param req DescribeKeyPairsRequest
                 * @return DescribeKeyPairsOutcome
                 */
                DescribeKeyPairsOutcome DescribeKeyPairs(const Model::DescribeKeyPairsRequest &request);
                void DescribeKeyPairsAsync(const Model::DescribeKeyPairsRequest& request, const DescribeKeyPairsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeKeyPairsOutcomeCallable DescribeKeyPairsCallable(const Model::DescribeKeyPairsRequest& request);

                /**
                 *This API is used to query the information of instance launch template versions.
                 * @param req DescribeLaunchTemplateVersionsRequest
                 * @return DescribeLaunchTemplateVersionsOutcome
                 */
                DescribeLaunchTemplateVersionsOutcome DescribeLaunchTemplateVersions(const Model::DescribeLaunchTemplateVersionsRequest &request);
                void DescribeLaunchTemplateVersionsAsync(const Model::DescribeLaunchTemplateVersionsRequest& request, const DescribeLaunchTemplateVersionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLaunchTemplateVersionsOutcomeCallable DescribeLaunchTemplateVersionsCallable(const Model::DescribeLaunchTemplateVersionsRequest& request);

                /**
                 *This API is used to query one or more instance launch templates.
                 * @param req DescribeLaunchTemplatesRequest
                 * @return DescribeLaunchTemplatesOutcome
                 */
                DescribeLaunchTemplatesOutcome DescribeLaunchTemplates(const Model::DescribeLaunchTemplatesRequest &request);
                void DescribeLaunchTemplatesAsync(const Model::DescribeLaunchTemplatesRequest& request, const DescribeLaunchTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLaunchTemplatesOutcomeCallable DescribeLaunchTemplatesCallable(const Model::DescribeLaunchTemplatesRequest& request);

                /**
                 *This API is suspended. To query the information of regions, use [DescribeZones](https://intl.cloud.tencent.com/document/product/1596/77930?from_cn_redirect=1).
                 * @param req DescribeRegionsRequest
                 * @return DescribeRegionsOutcome
                 */
                DescribeRegionsOutcome DescribeRegions(const Model::DescribeRegionsRequest &request);
                void DescribeRegionsAsync(const Model::DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRegionsOutcomeCallable DescribeRegionsCallable(const Model::DescribeRegionsRequest& request);

                /**
                 *This API is used to describe reserved instance (RI) offerings. Currently, RIs are only offered to beta users.
                 * @param req DescribeReservedInstancesConfigInfosRequest
                 * @return DescribeReservedInstancesConfigInfosOutcome
                 */
                DescribeReservedInstancesConfigInfosOutcome DescribeReservedInstancesConfigInfos(const Model::DescribeReservedInstancesConfigInfosRequest &request);
                void DescribeReservedInstancesConfigInfosAsync(const Model::DescribeReservedInstancesConfigInfosRequest& request, const DescribeReservedInstancesConfigInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeReservedInstancesConfigInfosOutcomeCallable DescribeReservedInstancesConfigInfosCallable(const Model::DescribeReservedInstancesConfigInfosRequest& request);

                /**
                 *This API is used to describe Reserved Instance offerings that are available for purchase.
                 * @param req DescribeReservedInstancesOfferingsRequest
                 * @return DescribeReservedInstancesOfferingsOutcome
                 */
                DescribeReservedInstancesOfferingsOutcome DescribeReservedInstancesOfferings(const Model::DescribeReservedInstancesOfferingsRequest &request);
                void DescribeReservedInstancesOfferingsAsync(const Model::DescribeReservedInstancesOfferingsRequest& request, const DescribeReservedInstancesOfferingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeReservedInstancesOfferingsOutcomeCallable DescribeReservedInstancesOfferingsCallable(const Model::DescribeReservedInstancesOfferingsRequest& request);

                /**
                 *This API is used to query the configurations of models in an availability zone.
                 * @param req DescribeZoneInstanceConfigInfosRequest
                 * @return DescribeZoneInstanceConfigInfosOutcome
                 */
                DescribeZoneInstanceConfigInfosOutcome DescribeZoneInstanceConfigInfos(const Model::DescribeZoneInstanceConfigInfosRequest &request);
                void DescribeZoneInstanceConfigInfosAsync(const Model::DescribeZoneInstanceConfigInfosRequest& request, const DescribeZoneInstanceConfigInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeZoneInstanceConfigInfosOutcomeCallable DescribeZoneInstanceConfigInfosCallable(const Model::DescribeZoneInstanceConfigInfosRequest& request);

                /**
                 *This API is used to query availability zones.
                 * @param req DescribeZonesRequest
                 * @return DescribeZonesOutcome
                 */
                DescribeZonesOutcome DescribeZones(const Model::DescribeZonesRequest &request);
                void DescribeZonesAsync(const Model::DescribeZonesRequest& request, const DescribeZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeZonesOutcomeCallable DescribeZonesCallable(const Model::DescribeZonesRequest& request);

                /**
                 *This API is used to unbind one or more key pairs from one or more instances.

* It only supports [`STOPPED`](https://intl.cloud.tencent.com/document/product/213/15753?from_cn_redirect=1#InstanceStatus) Linux instances.
* After a key pair is disassociated from an instance, you can log in to the instance with password.
* If you did not set a password for the instance, you will not be able to log in via SSH after the unbinding. In this case, you can call [ResetInstancesPassword](https://intl.cloud.tencent.com/document/api/213/15736?from_cn_redirect=1) to set a login password.
* Batch operations are supported. The maximum number of instances in each request is 100. If instances not available for the operation are selected, you will get an error code.
                 * @param req DisassociateInstancesKeyPairsRequest
                 * @return DisassociateInstancesKeyPairsOutcome
                 */
                DisassociateInstancesKeyPairsOutcome DisassociateInstancesKeyPairs(const Model::DisassociateInstancesKeyPairsRequest &request);
                void DisassociateInstancesKeyPairsAsync(const Model::DisassociateInstancesKeyPairsRequest& request, const DisassociateInstancesKeyPairsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisassociateInstancesKeyPairsOutcomeCallable DisassociateInstancesKeyPairsCallable(const Model::DisassociateInstancesKeyPairsRequest& request);

                /**
                 *This API is used to disassociate security groups from instances.
                 * @param req DisassociateSecurityGroupsRequest
                 * @return DisassociateSecurityGroupsOutcome
                 */
                DisassociateSecurityGroupsOutcome DisassociateSecurityGroups(const Model::DisassociateSecurityGroupsRequest &request);
                void DisassociateSecurityGroupsAsync(const Model::DisassociateSecurityGroupsRequest& request, const DisassociateSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisassociateSecurityGroupsOutcomeCallable DisassociateSecurityGroupsCallable(const Model::DisassociateSecurityGroupsRequest& request);

                /**
                 *This API is used to enter the rescue mode.
                 * @param req EnterRescueModeRequest
                 * @return EnterRescueModeOutcome
                 */
                EnterRescueModeOutcome EnterRescueMode(const Model::EnterRescueModeRequest &request);
                void EnterRescueModeAsync(const Model::EnterRescueModeRequest& request, const EnterRescueModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EnterRescueModeOutcomeCallable EnterRescueModeCallable(const Model::EnterRescueModeRequest& request);

                /**
                 *This API is used to exit the rescue mode.
                 * @param req ExitRescueModeRequest
                 * @return ExitRescueModeOutcome
                 */
                ExitRescueModeOutcome ExitRescueMode(const Model::ExitRescueModeRequest &request);
                void ExitRescueModeAsync(const Model::ExitRescueModeRequest& request, const ExitRescueModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExitRescueModeOutcomeCallable ExitRescueModeCallable(const Model::ExitRescueModeRequest& request);

                /**
                 *This API is used to export custom images to the specified COS bucket.
                 * @param req ExportImagesRequest
                 * @return ExportImagesOutcome
                 */
                ExportImagesOutcome ExportImages(const Model::ExportImagesRequest &request);
                void ExportImagesAsync(const Model::ExportImagesRequest& request, const ExportImagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportImagesOutcomeCallable ExportImagesCallable(const Model::ExportImagesRequest& request);

                /**
                 *This API is used to import an image. The image imported can be used to create instances. Currently, this API supports RAW, VHD, QCOW2, and VMDK image formats.
                 * @param req ImportImageRequest
                 * @return ImportImageOutcome
                 */
                ImportImageOutcome ImportImage(const Model::ImportImageRequest &request);
                void ImportImageAsync(const Model::ImportImageRequest& request, const ImportImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ImportImageOutcomeCallable ImportImageCallable(const Model::ImportImageRequest& request);

                /**
                 *This API is used to import key pairs.

* You can use this API to import key pairs to a user account, but the key pairs will not be automatically associated with any instance. You may use [AssociasteInstancesKeyPair](https://intl.cloud.tencent.com/document/api/213/15698?from_cn_redirect=1) to associate key pairs with instances.
* You need to specify the names of the key pairs and the content of the public keys.
* If you only have private keys, you can convert them to public keys with the `SSL` tool before importing them.
                 * @param req ImportKeyPairRequest
                 * @return ImportKeyPairOutcome
                 */
                ImportKeyPairOutcome ImportKeyPair(const Model::ImportKeyPairRequest &request);
                void ImportKeyPairAsync(const Model::ImportKeyPairRequest& request, const ImportKeyPairAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ImportKeyPairOutcomeCallable ImportKeyPairCallable(const Model::ImportKeyPairRequest& request);

                /**
                 *This API is used to query the price of reserved instances. It only supports querying purchasable reserved instance offerings. Currently, RIs are only offered to beta users.
                 * @param req InquirePricePurchaseReservedInstancesOfferingRequest
                 * @return InquirePricePurchaseReservedInstancesOfferingOutcome
                 */
                InquirePricePurchaseReservedInstancesOfferingOutcome InquirePricePurchaseReservedInstancesOffering(const Model::InquirePricePurchaseReservedInstancesOfferingRequest &request);
                void InquirePricePurchaseReservedInstancesOfferingAsync(const Model::InquirePricePurchaseReservedInstancesOfferingRequest& request, const InquirePricePurchaseReservedInstancesOfferingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InquirePricePurchaseReservedInstancesOfferingOutcomeCallable InquirePricePurchaseReservedInstancesOfferingCallable(const Model::InquirePricePurchaseReservedInstancesOfferingRequest& request);

                /**
                 *This API is used to inquire about the price for reinstalling an instance.

* If you have specified the parameter `ImageId`, inquire about the price for reinstallation by using the specified image. Otherwise, inquire about the price for reinstallation based on the image currently used by the instance.
* Currently, only instances with a [system disk type](https://intl.cloud.tencent.com/document/api/213/15753?from_cn_redirect=1#SystemDisk) of `CLOUD_BSSD`, `CLOUD_PREMIUM`, or `CLOUD_SSD` are supported for inquiring about the price for reinstallation caused by switching between `Linux` and `Windows` operating systems through this API.
* Currently, instances in regions outside the Chinese mainland are not supported for inquiring about the price for reinstallation caused by switching between `Linux` and `Windows` operating systems through this API.
                 * @param req InquiryPriceResetInstanceRequest
                 * @return InquiryPriceResetInstanceOutcome
                 */
                InquiryPriceResetInstanceOutcome InquiryPriceResetInstance(const Model::InquiryPriceResetInstanceRequest &request);
                void InquiryPriceResetInstanceAsync(const Model::InquiryPriceResetInstanceRequest& request, const InquiryPriceResetInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InquiryPriceResetInstanceOutcomeCallable InquiryPriceResetInstanceCallable(const Model::InquiryPriceResetInstanceRequest& request);

                /**
                 *This API is used to query the price for upgrading the public bandwidth cap of an instance.

* The allowed bandwidth cap varies for different models. For details, see [Purchasing Network Bandwidth](https://intl.cloud.tencent.com/document/product/213/509?from_cn_redirect=1).
* For bandwidth billed by the `TRAFFIC_POSTPAID_BY_HOUR` method, changing the bandwidth cap through this API takes effect in real time. You can increase or reduce bandwidth within applicable limits.
                 * @param req InquiryPriceResetInstancesInternetMaxBandwidthRequest
                 * @return InquiryPriceResetInstancesInternetMaxBandwidthOutcome
                 */
                InquiryPriceResetInstancesInternetMaxBandwidthOutcome InquiryPriceResetInstancesInternetMaxBandwidth(const Model::InquiryPriceResetInstancesInternetMaxBandwidthRequest &request);
                void InquiryPriceResetInstancesInternetMaxBandwidthAsync(const Model::InquiryPriceResetInstancesInternetMaxBandwidthRequest& request, const InquiryPriceResetInstancesInternetMaxBandwidthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InquiryPriceResetInstancesInternetMaxBandwidthOutcomeCallable InquiryPriceResetInstancesInternetMaxBandwidthCallable(const Model::InquiryPriceResetInstancesInternetMaxBandwidthRequest& request);

                /**
                 *This API is used to query the price for adjusting the instance model.

* Currently, you can only use this API to query the prices of instances whose [system disk type](https://intl.cloud.tencent.com/document/api/213/9452?from_cn_redirect=1#block_device) is `CLOUD_BASIC`, `CLOUD_PREMIUM`, or `CLOUD_SSD`.
* Currently, you cannot use this API to query the prices of [CDH](https://intl.cloud.tencent.com/document/product/416?from_cn_redirect=1) instances.
                 * @param req InquiryPriceResetInstancesTypeRequest
                 * @return InquiryPriceResetInstancesTypeOutcome
                 */
                InquiryPriceResetInstancesTypeOutcome InquiryPriceResetInstancesType(const Model::InquiryPriceResetInstancesTypeRequest &request);
                void InquiryPriceResetInstancesTypeAsync(const Model::InquiryPriceResetInstancesTypeRequest& request, const InquiryPriceResetInstancesTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InquiryPriceResetInstancesTypeOutcomeCallable InquiryPriceResetInstancesTypeCallable(const Model::InquiryPriceResetInstancesTypeRequest& request);

                /**
                 *This API is used to query the price for expanding data disks of an instance.

* Currently, you can only use this API to query the price of non-elastic data disks whose [disk type](https://intl.cloud.tencent.com/document/api/213/9452?from_cn_redirect=1#block_device) is `CLOUD_BASIC`, `CLOUD_PREMIUM`, or `CLOUD_SSD`. You can use [`DescribeDisks`](https://intl.cloud.tencent.com/document/api/362/16315?from_cn_redirect=1) to check whether a disk is elastic. If the `Portable` field in the response is `false`, it means that the disk is non-elastic.
* Currently, you cannot use this API to query the price for [CDH](https://intl.cloud.tencent.com/document/product/416?from_cn_redirect=1) instances. *Also, you can only query the price of expanding one data disk at a time.
                 * @param req InquiryPriceResizeInstanceDisksRequest
                 * @return InquiryPriceResizeInstanceDisksOutcome
                 */
                InquiryPriceResizeInstanceDisksOutcome InquiryPriceResizeInstanceDisks(const Model::InquiryPriceResizeInstanceDisksRequest &request);
                void InquiryPriceResizeInstanceDisksAsync(const Model::InquiryPriceResizeInstanceDisksRequest& request, const InquiryPriceResizeInstanceDisksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InquiryPriceResizeInstanceDisksOutcomeCallable InquiryPriceResizeInstanceDisksCallable(const Model::InquiryPriceResizeInstanceDisksRequest& request);

                /**
                 *This API is used to query the price of creating instances. You can only use this API for instances whose configuration is within the purchase limit. For more information, see [RunInstances](https://intl.cloud.tencent.com/document/api/213/15730?from_cn_redirect=1).
                 * @param req InquiryPriceRunInstancesRequest
                 * @return InquiryPriceRunInstancesOutcome
                 */
                InquiryPriceRunInstancesOutcome InquiryPriceRunInstances(const Model::InquiryPriceRunInstancesRequest &request);
                void InquiryPriceRunInstancesAsync(const Model::InquiryPriceRunInstancesRequest& request, const InquiryPriceRunInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InquiryPriceRunInstancesOutcomeCallable InquiryPriceRunInstancesCallable(const Model::InquiryPriceRunInstancesRequest& request);

                /**
                 *This API is used to modify the CHC host attributes.
                 * @param req ModifyChcAttributeRequest
                 * @return ModifyChcAttributeOutcome
                 */
                ModifyChcAttributeOutcome ModifyChcAttribute(const Model::ModifyChcAttributeRequest &request);
                void ModifyChcAttributeAsync(const Model::ModifyChcAttributeRequest& request, const ModifyChcAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyChcAttributeOutcomeCallable ModifyChcAttributeCallable(const Model::ModifyChcAttributeRequest& request);

                /**
                 *This API is used to modify the attributes of [spread placement groups](https://intl.cloud.tencent.com/document/product/213/15486?from_cn_redirect=1).
                 * @param req ModifyDisasterRecoverGroupAttributeRequest
                 * @return ModifyDisasterRecoverGroupAttributeOutcome
                 */
                ModifyDisasterRecoverGroupAttributeOutcome ModifyDisasterRecoverGroupAttribute(const Model::ModifyDisasterRecoverGroupAttributeRequest &request);
                void ModifyDisasterRecoverGroupAttributeAsync(const Model::ModifyDisasterRecoverGroupAttributeRequest& request, const ModifyDisasterRecoverGroupAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDisasterRecoverGroupAttributeOutcomeCallable ModifyDisasterRecoverGroupAttributeCallable(const Model::ModifyDisasterRecoverGroupAttributeRequest& request);

                /**
                 *This API is used to modify the attributes of a CDH instance, such as instance name and renewal flag. One of the two parameters, HostName and RenewFlag, must be set, but you cannot set both of them at the same time.
                 * @param req ModifyHostsAttributeRequest
                 * @return ModifyHostsAttributeOutcome
                 */
                ModifyHostsAttributeOutcome ModifyHostsAttribute(const Model::ModifyHostsAttributeRequest &request);
                void ModifyHostsAttributeAsync(const Model::ModifyHostsAttributeRequest& request, const ModifyHostsAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyHostsAttributeOutcomeCallable ModifyHostsAttributeCallable(const Model::ModifyHostsAttributeRequest& request);

                /**
                 *This API is used to modify image attributes.

* Attributes of shared images cannot be modified.
                 * @param req ModifyImageAttributeRequest
                 * @return ModifyImageAttributeOutcome
                 */
                ModifyImageAttributeOutcome ModifyImageAttribute(const Model::ModifyImageAttributeRequest &request);
                void ModifyImageAttributeAsync(const Model::ModifyImageAttributeRequest& request, const ModifyImageAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyImageAttributeOutcomeCallable ModifyImageAttributeCallable(const Model::ModifyImageAttributeRequest& request);

                /**
                 *This API is used to modify image sharing information.

* The account with shared image access can use the image to create instances.
* Each custom image can be shared with a maximum of 500 accounts.
* Shared images cannot have their names or description changed. They can only be used to create instances.
* Sharing is only supported within the same region as the recipient's account.
                 * @param req ModifyImageSharePermissionRequest
                 * @return ModifyImageSharePermissionOutcome
                 */
                ModifyImageSharePermissionOutcome ModifyImageSharePermission(const Model::ModifyImageSharePermissionRequest &request);
                void ModifyImageSharePermissionAsync(const Model::ModifyImageSharePermissionRequest& request, const ModifyImageSharePermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyImageSharePermissionOutcomeCallable ModifyImageSharePermissionCallable(const Model::ModifyImageSharePermissionRequest& request);

                /**
                 *The API is used to modify the attributes of an instance. Only the name and the associated security groups can be modified for now.

* An attribute must be specified in the request.
* "Instance name" is a custom name for easier management. Tencent Cloud does not use the name for online support or instance management.
* Batch operations are supported. Each request can modify up to 100 instances.
* When you modify the security groups associated with an instance is modified, the original security groups are disassociated.
* You can use the API [DescribeInstances](https://intl.cloud.tencent.com/document/api/213/15728?from_cn_redirect=1#.E7.A4.BA.E4.BE.8B3-.E6.9F.A5.E8.AF.A2.E5.AE.9E.E4.BE.8B.E7.9A.84.E6.9C.80.E6.96.B0.E6.93.8D.E4.BD.9C.E6.83.85.E5.86.B5) to query the instance operation result. If the 'LatestOperationState' in the response is **SUCCESS**, the operation is successful.
                 * @param req ModifyInstancesAttributeRequest
                 * @return ModifyInstancesAttributeOutcome
                 */
                ModifyInstancesAttributeOutcome ModifyInstancesAttribute(const Model::ModifyInstancesAttributeRequest &request);
                void ModifyInstancesAttributeAsync(const Model::ModifyInstancesAttributeRequest& request, const ModifyInstancesAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyInstancesAttributeOutcomeCallable ModifyInstancesAttributeCallable(const Model::ModifyInstancesAttributeRequest& request);

                /**
                 *This API is used to change the project to which an instance is assigned.

* Project is a virtual concept. You can create multiple projects under one account, manage different resources in each project, and assign different instances to different projects. You may use the [DescribeInstances](https://intl.cloud.tencent.com/document/api/213/15728?from_cn_redirect=1) API to query instances and use the project ID to filter the results.
* You cannot modify the project of an instance that is bound to a load balancer. You need to unbind the load balancer from the instance by using the [DeregisterInstancesFromLoadBalancer](https://intl.cloud.tencent.com/document/api/214/1258?from_cn_redirect=1) API before using this API.
* Batch operations are supported. Up to 100 instances per request is allowed.
* You can use the API [DescribeInstances](https://intl.cloud.tencent.com/document/api/213/15728?from_cn_redirect=1#.E7.A4.BA.E4.BE.8B3-.E6.9F.A5.E8.AF.A2.E5.AE.9E.E4.BE.8B.E7.9A.84.E6.9C.80.E6.96.B0.E6.93.8D.E4.BD.9C.E6.83.85.E5.86.B5) to query the operation result. If the `LatestOperationState` in the response is `SUCCESS`, the operation is successful.
                 * @param req ModifyInstancesProjectRequest
                 * @return ModifyInstancesProjectOutcome
                 */
                ModifyInstancesProjectOutcome ModifyInstancesProject(const Model::ModifyInstancesProjectRequest &request);
                void ModifyInstancesProjectAsync(const Model::ModifyInstancesProjectRequest& request, const ModifyInstancesProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyInstancesProjectOutcomeCallable ModifyInstancesProjectCallable(const Model::ModifyInstancesProjectRequest& request);

                /**
                 *This API is used to modify the VPC attributes of an instance, such as the VPC IP address.
* This action will shut down the instance, and restart it after the modification is completed.
* To migrate an instance to another VPC/subnet, specify the new VPC and subnet directly. Make sure that the instance to migrate is not bound to an [ENI](https://intl.cloud.tencent.com/document/product/576?from_cn_redirect=1) or [CLB](https://intl.cloud.tencent.com/document/product/214?from_cn_redirect=1) instances.
* You can use the API [DescribeInstances](https://intl.cloud.tencent.com/document/api/213/15728?from_cn_redirect=1#.E7.A4.BA.E4.BE.8B3-.E6.9F.A5.E8.AF.A2.E5.AE.9E.E4.BE.8B.E7.9A.84.E6.9C.80.E6.96.B0.E6.93.8D.E4.BD.9C.E6.83.85.E5.86.B5) to query the operation result. If the `LatestOperationState` in the response is `SUCCESS`, the operation is successful.
                 * @param req ModifyInstancesVpcAttributeRequest
                 * @return ModifyInstancesVpcAttributeOutcome
                 */
                ModifyInstancesVpcAttributeOutcome ModifyInstancesVpcAttribute(const Model::ModifyInstancesVpcAttributeRequest &request);
                void ModifyInstancesVpcAttributeAsync(const Model::ModifyInstancesVpcAttributeRequest& request, const ModifyInstancesVpcAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyInstancesVpcAttributeOutcomeCallable ModifyInstancesVpcAttributeCallable(const Model::ModifyInstancesVpcAttributeRequest& request);

                /**
                 *This API is used to modify attributes of a key pair.

* Modify the name and description information of the key pair specified by the key pair ID.
* The key pair name should not be the same as the name of an existing key pair.
* The key pair ID is the unique identifier of a key pair and cannot be modified.

* Either the key pair name or description information should be specified, and both can also be specified simultaneously.
                 * @param req ModifyKeyPairAttributeRequest
                 * @return ModifyKeyPairAttributeOutcome
                 */
                ModifyKeyPairAttributeOutcome ModifyKeyPairAttribute(const Model::ModifyKeyPairAttributeRequest &request);
                void ModifyKeyPairAttributeAsync(const Model::ModifyKeyPairAttributeRequest& request, const ModifyKeyPairAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyKeyPairAttributeOutcomeCallable ModifyKeyPairAttributeCallable(const Model::ModifyKeyPairAttributeRequest& request);

                /**
                 *This API is used to modify the default version of the instance launch template.
                 * @param req ModifyLaunchTemplateDefaultVersionRequest
                 * @return ModifyLaunchTemplateDefaultVersionOutcome
                 */
                ModifyLaunchTemplateDefaultVersionOutcome ModifyLaunchTemplateDefaultVersion(const Model::ModifyLaunchTemplateDefaultVersionRequest &request);
                void ModifyLaunchTemplateDefaultVersionAsync(const Model::ModifyLaunchTemplateDefaultVersionRequest& request, const ModifyLaunchTemplateDefaultVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyLaunchTemplateDefaultVersionOutcomeCallable ModifyLaunchTemplateDefaultVersionCallable(const Model::ModifyLaunchTemplateDefaultVersionRequest& request);

                /**
                 *This API is used to purchase one or more specific Reserved Instances.
                 * @param req PurchaseReservedInstancesOfferingRequest
                 * @return PurchaseReservedInstancesOfferingOutcome
                 */
                PurchaseReservedInstancesOfferingOutcome PurchaseReservedInstancesOffering(const Model::PurchaseReservedInstancesOfferingRequest &request);
                void PurchaseReservedInstancesOfferingAsync(const Model::PurchaseReservedInstancesOfferingRequest& request, const PurchaseReservedInstancesOfferingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PurchaseReservedInstancesOfferingOutcomeCallable PurchaseReservedInstancesOfferingCallable(const Model::PurchaseReservedInstancesOfferingRequest& request);

                /**
                 *This API is used to restart instances.

* You can only perform this operation on instances whose status is `RUNNING`.
* If the API is called successfully, the instance status will become `REBOOTING`. After the instance is restarted, its status will become `RUNNING` again.
* Forced restart is supported. A forced restart is similar to switching off the power of a physical computer and starting it again. It may cause data loss or file system corruption. Be sure to only force start a CVM when it cannot be restarted normally.
* Batch operations are supported. The maximum number of instances in each request is 100.
                 * @param req RebootInstancesRequest
                 * @return RebootInstancesOutcome
                 */
                RebootInstancesOutcome RebootInstances(const Model::RebootInstancesRequest &request);
                void RebootInstancesAsync(const Model::RebootInstancesRequest& request, const RebootInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RebootInstancesOutcomeCallable RebootInstancesCallable(const Model::RebootInstancesRequest& request);

                /**
                 *This API is used to remove the out-of-band network and deployment network of a CHC host.
                 * @param req RemoveChcAssistVpcRequest
                 * @return RemoveChcAssistVpcOutcome
                 */
                RemoveChcAssistVpcOutcome RemoveChcAssistVpc(const Model::RemoveChcAssistVpcRequest &request);
                void RemoveChcAssistVpcAsync(const Model::RemoveChcAssistVpcRequest& request, const RemoveChcAssistVpcAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RemoveChcAssistVpcOutcomeCallable RemoveChcAssistVpcCallable(const Model::RemoveChcAssistVpcRequest& request);

                /**
                 *This API is used to remove the deployment network of a CHC host.
                 * @param req RemoveChcDeployVpcRequest
                 * @return RemoveChcDeployVpcOutcome
                 */
                RemoveChcDeployVpcOutcome RemoveChcDeployVpc(const Model::RemoveChcDeployVpcRequest &request);
                void RemoveChcDeployVpcAsync(const Model::RemoveChcDeployVpcRequest& request, const RemoveChcDeployVpcAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RemoveChcDeployVpcOutcomeCallable RemoveChcDeployVpcCallable(const Model::RemoveChcDeployVpcRequest& request);

                /**
                 *This API (ResetInstance) is used to reinstall the operating system on a specified instance.



* If you have specified the parameter `ImageId`, use the specified image for reinstallation. Otherwise, perform reinstallation based on the image currently used by the instance.
* The system disk will be formatted and reset. Ensure that there are no important files in the system disk.
* If you do not specify a password, a random password will be sent via Message Center.
* Currently, only instances with a [system disk type](https://intl.cloud.tencent.com/document/api/213/9452?from_cn_redirect=1#SystemDisk) of `CLOUD_BASIC`, `CLOUD_PREMIUM`, `CLOUD_SSD`, or `CLOUD_BSSD` are supported for implementing operating system switching through this API.
* You can query the result of the instance operation by calling the API [DescribeInstances](https://intl.cloud.tencent.com/document/api/213/15728?from_cn_redirect=1#.E7.A4.BA.E4.BE.8B3-.E6.9F.A5.E8.AF.A2.E5.AE.9E.E4.BE.8B.E7.9A.84.E6.9C.80.E6.96.B0.E6.93.8D.E4.BD.9C.E6.83.85.E5.86.B5). If the latest operation status (LatestOperationState) of the instance is **SUCCESS**, the operation is successful.
                 * @param req ResetInstanceRequest
                 * @return ResetInstanceOutcome
                 */
                ResetInstanceOutcome ResetInstance(const Model::ResetInstanceRequest &request);
                void ResetInstanceAsync(const Model::ResetInstanceRequest& request, const ResetInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResetInstanceOutcomeCallable ResetInstanceCallable(const Model::ResetInstanceRequest& request);

                /**
                 *This API is used to change the public bandwidth cap of an instance.

* The allowed bandwidth cap varies for different models. For details, see [Purchasing Network Bandwidth](https://intl.cloud.tencent.com/document/product/213/509?from_cn_redirect=1).
* For bandwidth billed by the `TRAFFIC_POSTPAID_BY_HOUR` method, changing the bandwidth cap through this API takes effect in real time. Users can increase or reduce bandwidth within applicable limits.
                 * @param req ResetInstancesInternetMaxBandwidthRequest
                 * @return ResetInstancesInternetMaxBandwidthOutcome
                 */
                ResetInstancesInternetMaxBandwidthOutcome ResetInstancesInternetMaxBandwidth(const Model::ResetInstancesInternetMaxBandwidthRequest &request);
                void ResetInstancesInternetMaxBandwidthAsync(const Model::ResetInstancesInternetMaxBandwidthRequest& request, const ResetInstancesInternetMaxBandwidthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResetInstancesInternetMaxBandwidthOutcomeCallable ResetInstancesInternetMaxBandwidthCallable(const Model::ResetInstancesInternetMaxBandwidthRequest& request);

                /**
                 *This API is used to reset the password of the operating system instances to a user-specified password.

* To modify the password of the administrator account: the name of the administrator account varies with the operating system. In Windows, it is `Administrator`; in Ubuntu, it is `ubuntu`; in Linux, it is `root`.
* To reset the password of a running instance, you need to set the parameter `ForceStop` to `True` for a forced shutdown. If not, only passwords of stopped instances can be reset.
* Batch operations are supported. You can reset the passwords of up to 100 instances to the same value once.
* You can call the [DescribeInstances](https://intl.cloud.tencent.com/document/api/213/15728?from_cn_redirect=1#.E7.A4.BA.E4.BE.8B3-.E6.9F.A5.E8.AF.A2.E5.AE.9E.E4.BE.8B.E7.9A.84.E6.9C.80.E6.96.B0.E6.93.8D.E4.BD.9C.E6.83.85.E5.86.B5) API and find the result of the operation in the response parameter `LatestOperationState`. If the value is `SUCCESS`, the operation is successful.
                 * @param req ResetInstancesPasswordRequest
                 * @return ResetInstancesPasswordOutcome
                 */
                ResetInstancesPasswordOutcome ResetInstancesPassword(const Model::ResetInstancesPasswordRequest &request);
                void ResetInstancesPasswordAsync(const Model::ResetInstancesPasswordRequest& request, const ResetInstancesPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResetInstancesPasswordOutcomeCallable ResetInstancesPasswordCallable(const Model::ResetInstancesPasswordRequest& request);

                /**
                 *This API is used to change the model of an instance.
* You can only use this API to change the models of instances whose [system disk type](https://intl.cloud.tencent.com/document/api/213/9452?from_cn_redirect=1#block_device) is `CLOUD_BASIC`, `CLOUD_PREMIUM`, or `CLOUD_SSD`.
* Currently, you cannot use this API to change the models of [CDH](https://intl.cloud.tencent.com/document/product/416?from_cn_redirect=1) instances.
                 * @param req ResetInstancesTypeRequest
                 * @return ResetInstancesTypeOutcome
                 */
                ResetInstancesTypeOutcome ResetInstancesType(const Model::ResetInstancesTypeRequest &request);
                void ResetInstancesTypeAsync(const Model::ResetInstancesTypeRequest& request, const ResetInstancesTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResetInstancesTypeOutcomeCallable ResetInstancesTypeCallable(const Model::ResetInstancesTypeRequest& request);

                /**
                 *This API (ResizeInstanceDisks) is used to expand the data disks of an instance.

* Currently, you can only use the API to expand non-elastic data disks whose [disk type](https://intl.cloud.tencent.com/document/api/213/9452?from_cn_redirect=1#block_device) is `CLOUD_BASIC`, `CLOUD_PREMIUM`, or `CLOUD_SSD`. You can use [`DescribeDisks`](https://intl.cloud.tencent.com/document/api/362/16315?from_cn_redirect=1) to check whether a disk is elastic. If the `Portable` field in the response is `false`, it means that the disk is non-elastic.
* Currently, this API does not support [CDH](https://intl.cloud.tencent.com/document/product/416?from_cn_redirect=1) instances.
* Currently, only one data disk can be expanded at a time.
                 * @param req ResizeInstanceDisksRequest
                 * @return ResizeInstanceDisksOutcome
                 */
                ResizeInstanceDisksOutcome ResizeInstanceDisks(const Model::ResizeInstanceDisksRequest &request);
                void ResizeInstanceDisksAsync(const Model::ResizeInstanceDisksRequest& request, const ResizeInstanceDisksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResizeInstanceDisksOutcomeCallable ResizeInstanceDisksCallable(const Model::ResizeInstanceDisksRequest& request);

                /**
                 *This API is used to create one or more instances with a specified configuration.

* After an instance is created successfully, it will start up automatically, and the [instance status](https://intl.cloud.tencent.com/document/api/213/9452?from_cn_redirect=1#instance_state) will become "Running".
* If you create a pay-as-you-go instance billed on an hourly basis, an amount equivalent to the hourly rate will be frozen. Make sure your account balance is sufficient before calling this API.
* The number of instances you can purchase through this API is subject to the [Quota for CVM Instances](https://intl.cloud.tencent.com/document/product/213/2664?from_cn_redirect=1). Instances created through this API and in the CVM console are counted toward the quota.
* This API is an async API. An instance ID list is returned after the creation request is sent. However, it does not mean the creation has been completed. The status of the instance will be `Creating` during the creation. You can use [DescribeInstances](https://intl.cloud.tencent.com/document/api/213/15728?from_cn_redirect=1) to query the status of the instance. If the status changes from `Creating` to `Running`, it means that the instance has been created successfully.
                 * @param req RunInstancesRequest
                 * @return RunInstancesOutcome
                 */
                RunInstancesOutcome RunInstances(const Model::RunInstancesRequest &request);
                void RunInstancesAsync(const Model::RunInstancesRequest& request, const RunInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RunInstancesOutcomeCallable RunInstancesCallable(const Model::RunInstancesRequest& request);

                /**
                 *This API is used to start instances.

* You can only perform this operation on instances whose status is `STOPPED`.
* The instance status will become `STARTING` when the API is called successfully and `RUNNING` when the instance is successfully started.
* Batch operations are supported. The maximum number of instances in each request is 100.
                 * @param req StartInstancesRequest
                 * @return StartInstancesOutcome
                 */
                StartInstancesOutcome StartInstances(const Model::StartInstancesRequest &request);
                void StartInstancesAsync(const Model::StartInstancesRequest& request, const StartInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartInstancesOutcomeCallable StartInstancesCallable(const Model::StartInstancesRequest& request);

                /**
                 *This API is used to shut down instances.

* You can only perform this operation on instances whose status is `RUNNING`.
* The instance status will become `STOPPING` when the API is called successfully and `STOPPED` when the instance is successfully shut down.
* Forced shutdown is supported. A forced shutdown is similar to switching off the power of a physical computer. It may cause data loss or file system corruption. Be sure to only force shut down a CVM when it cannot be sht down normally.
* Batch operations are supported. The maximum number of instances in each request is 100.
                 * @param req StopInstancesRequest
                 * @return StopInstancesOutcome
                 */
                StopInstancesOutcome StopInstances(const Model::StopInstancesRequest &request);
                void StopInstancesAsync(const Model::StopInstancesRequest& request, const StopInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopInstancesOutcomeCallable StopInstancesCallable(const Model::StopInstancesRequest& request);

                /**
                 *This API is used to synchronize custom images to other regions.

* This API only supports synchronizing one image per call.
* This API supports multiple synchronization regions.
* A single account can have a maximum of 500 custom images in each region.
                 * @param req SyncImagesRequest
                 * @return SyncImagesOutcome
                 */
                SyncImagesOutcome SyncImages(const Model::SyncImagesRequest &request);
                void SyncImagesAsync(const Model::SyncImagesRequest& request, const SyncImagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SyncImagesOutcomeCallable SyncImagesCallable(const Model::SyncImagesRequest& request);

                /**
                 *This API is used to return instances.

* Use this API to return instances that are no longer required.
* Pay-as-you-go instances can be returned directly through this API.
* When this API is called for the first time, the instance will be moved to the recycle bin. When this API is called for the second time, the instance will be terminated and cannot be recovered.
* Batch operations are supported. The allowed maximum number of instances in each request is 100.
                 * @param req TerminateInstancesRequest
                 * @return TerminateInstancesOutcome
                 */
                TerminateInstancesOutcome TerminateInstances(const Model::TerminateInstancesRequest &request);
                void TerminateInstancesAsync(const Model::TerminateInstancesRequest& request, const TerminateInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TerminateInstancesOutcomeCallable TerminateInstancesCallable(const Model::TerminateInstancesRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_CVMCLIENT_H_
