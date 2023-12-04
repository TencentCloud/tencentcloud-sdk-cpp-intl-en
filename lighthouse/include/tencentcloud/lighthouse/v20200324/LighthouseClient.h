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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_LIGHTHOUSECLIENT_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_LIGHTHOUSECLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/lighthouse/v20200324/model/ApplyInstanceSnapshotRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/ApplyInstanceSnapshotResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/AssociateInstancesKeyPairsRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/AssociateInstancesKeyPairsResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/AttachCcnRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/AttachCcnResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/AttachDisksRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/AttachDisksResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/CreateBlueprintRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/CreateBlueprintResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/CreateDisksRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/CreateDisksResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/CreateFirewallRulesRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/CreateFirewallRulesResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/CreateInstanceSnapshotRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/CreateInstanceSnapshotResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/CreateInstancesRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/CreateInstancesResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/CreateKeyPairRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/CreateKeyPairResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/DeleteBlueprintsRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/DeleteBlueprintsResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/DeleteFirewallRulesRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/DeleteFirewallRulesResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/DeleteKeyPairsRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/DeleteKeyPairsResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/DeleteSnapshotsRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/DeleteSnapshotsResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/DescribeAllScenesRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/DescribeAllScenesResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/DescribeBlueprintInstancesRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/DescribeBlueprintInstancesResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/DescribeBlueprintsRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/DescribeBlueprintsResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/DescribeBundleDiscountRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/DescribeBundleDiscountResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/DescribeBundlesRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/DescribeBundlesResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/DescribeCcnAttachedInstancesRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/DescribeCcnAttachedInstancesResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/DescribeDiskConfigsRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/DescribeDiskConfigsResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/DescribeDiskDiscountRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/DescribeDiskDiscountResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/DescribeDisksRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/DescribeDisksResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/DescribeDisksDeniedActionsRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/DescribeDisksDeniedActionsResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/DescribeDisksReturnableRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/DescribeDisksReturnableResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/DescribeFirewallRulesRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/DescribeFirewallRulesResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/DescribeFirewallRulesTemplateRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/DescribeFirewallRulesTemplateResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/DescribeGeneralResourceQuotasRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/DescribeGeneralResourceQuotasResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/DescribeInstanceLoginKeyPairAttributeRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/DescribeInstanceLoginKeyPairAttributeResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/DescribeInstanceVncUrlRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/DescribeInstanceVncUrlResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/DescribeInstancesRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/DescribeInstancesResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/DescribeInstancesDeniedActionsRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/DescribeInstancesDeniedActionsResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/DescribeInstancesDiskNumRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/DescribeInstancesDiskNumResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/DescribeInstancesReturnableRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/DescribeInstancesReturnableResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/DescribeInstancesTrafficPackagesRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/DescribeInstancesTrafficPackagesResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/DescribeKeyPairsRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/DescribeKeyPairsResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/DescribeModifyInstanceBundlesRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/DescribeModifyInstanceBundlesResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/DescribeRegionsRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/DescribeRegionsResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/DescribeResetInstanceBlueprintsRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/DescribeResetInstanceBlueprintsResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/DescribeScenesRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/DescribeScenesResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/DescribeSnapshotsRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/DescribeSnapshotsResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/DescribeSnapshotsDeniedActionsRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/DescribeSnapshotsDeniedActionsResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/DescribeZonesRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/DescribeZonesResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/DetachCcnRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/DetachCcnResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/DetachDisksRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/DetachDisksResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/DisassociateInstancesKeyPairsRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/DisassociateInstancesKeyPairsResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/ImportKeyPairRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/ImportKeyPairResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/InquirePriceCreateBlueprintRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/InquirePriceCreateBlueprintResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/InquirePriceCreateDisksRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/InquirePriceCreateDisksResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/InquirePriceCreateInstancesRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/InquirePriceCreateInstancesResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/InquirePriceRenewDisksRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/InquirePriceRenewDisksResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/InquirePriceRenewInstancesRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/InquirePriceRenewInstancesResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/IsolateDisksRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/IsolateDisksResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/IsolateInstancesRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/IsolateInstancesResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/ModifyBlueprintAttributeRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/ModifyBlueprintAttributeResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/ModifyDisksAttributeRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/ModifyDisksAttributeResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/ModifyDisksRenewFlagRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/ModifyDisksRenewFlagResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/ModifyFirewallRuleDescriptionRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/ModifyFirewallRuleDescriptionResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/ModifyFirewallRulesRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/ModifyFirewallRulesResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/ModifyInstancesAttributeRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/ModifyInstancesAttributeResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/ModifyInstancesBundleRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/ModifyInstancesBundleResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/ModifyInstancesLoginKeyPairAttributeRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/ModifyInstancesLoginKeyPairAttributeResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/ModifyInstancesRenewFlagRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/ModifyInstancesRenewFlagResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/ModifySnapshotAttributeRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/ModifySnapshotAttributeResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/RebootInstancesRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/RebootInstancesResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/RenewDisksRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/RenewDisksResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/RenewInstancesRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/RenewInstancesResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/ResetAttachCcnRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/ResetAttachCcnResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/ResetInstanceRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/ResetInstanceResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/ResetInstancesPasswordRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/ResetInstancesPasswordResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/StartInstancesRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/StartInstancesResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/StopInstancesRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/StopInstancesResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/TerminateDisksRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/TerminateDisksResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/TerminateInstancesRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/TerminateInstancesResponse.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            class LighthouseClient : public AbstractClient
            {
            public:
                LighthouseClient(const Credential &credential, const std::string &region);
                LighthouseClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::ApplyInstanceSnapshotResponse> ApplyInstanceSnapshotOutcome;
                typedef std::future<ApplyInstanceSnapshotOutcome> ApplyInstanceSnapshotOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::ApplyInstanceSnapshotRequest&, ApplyInstanceSnapshotOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ApplyInstanceSnapshotAsyncHandler;
                typedef Outcome<Core::Error, Model::AssociateInstancesKeyPairsResponse> AssociateInstancesKeyPairsOutcome;
                typedef std::future<AssociateInstancesKeyPairsOutcome> AssociateInstancesKeyPairsOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::AssociateInstancesKeyPairsRequest&, AssociateInstancesKeyPairsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AssociateInstancesKeyPairsAsyncHandler;
                typedef Outcome<Core::Error, Model::AttachCcnResponse> AttachCcnOutcome;
                typedef std::future<AttachCcnOutcome> AttachCcnOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::AttachCcnRequest&, AttachCcnOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AttachCcnAsyncHandler;
                typedef Outcome<Core::Error, Model::AttachDisksResponse> AttachDisksOutcome;
                typedef std::future<AttachDisksOutcome> AttachDisksOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::AttachDisksRequest&, AttachDisksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AttachDisksAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateBlueprintResponse> CreateBlueprintOutcome;
                typedef std::future<CreateBlueprintOutcome> CreateBlueprintOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::CreateBlueprintRequest&, CreateBlueprintOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateBlueprintAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDisksResponse> CreateDisksOutcome;
                typedef std::future<CreateDisksOutcome> CreateDisksOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::CreateDisksRequest&, CreateDisksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDisksAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateFirewallRulesResponse> CreateFirewallRulesOutcome;
                typedef std::future<CreateFirewallRulesOutcome> CreateFirewallRulesOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::CreateFirewallRulesRequest&, CreateFirewallRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateFirewallRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateInstanceSnapshotResponse> CreateInstanceSnapshotOutcome;
                typedef std::future<CreateInstanceSnapshotOutcome> CreateInstanceSnapshotOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::CreateInstanceSnapshotRequest&, CreateInstanceSnapshotOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateInstanceSnapshotAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateInstancesResponse> CreateInstancesOutcome;
                typedef std::future<CreateInstancesOutcome> CreateInstancesOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::CreateInstancesRequest&, CreateInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateKeyPairResponse> CreateKeyPairOutcome;
                typedef std::future<CreateKeyPairOutcome> CreateKeyPairOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::CreateKeyPairRequest&, CreateKeyPairOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateKeyPairAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteBlueprintsResponse> DeleteBlueprintsOutcome;
                typedef std::future<DeleteBlueprintsOutcome> DeleteBlueprintsOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::DeleteBlueprintsRequest&, DeleteBlueprintsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteBlueprintsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteFirewallRulesResponse> DeleteFirewallRulesOutcome;
                typedef std::future<DeleteFirewallRulesOutcome> DeleteFirewallRulesOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::DeleteFirewallRulesRequest&, DeleteFirewallRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteFirewallRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteKeyPairsResponse> DeleteKeyPairsOutcome;
                typedef std::future<DeleteKeyPairsOutcome> DeleteKeyPairsOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::DeleteKeyPairsRequest&, DeleteKeyPairsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteKeyPairsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteSnapshotsResponse> DeleteSnapshotsOutcome;
                typedef std::future<DeleteSnapshotsOutcome> DeleteSnapshotsOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::DeleteSnapshotsRequest&, DeleteSnapshotsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSnapshotsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAllScenesResponse> DescribeAllScenesOutcome;
                typedef std::future<DescribeAllScenesOutcome> DescribeAllScenesOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::DescribeAllScenesRequest&, DescribeAllScenesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAllScenesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBlueprintInstancesResponse> DescribeBlueprintInstancesOutcome;
                typedef std::future<DescribeBlueprintInstancesOutcome> DescribeBlueprintInstancesOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::DescribeBlueprintInstancesRequest&, DescribeBlueprintInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBlueprintInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBlueprintsResponse> DescribeBlueprintsOutcome;
                typedef std::future<DescribeBlueprintsOutcome> DescribeBlueprintsOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::DescribeBlueprintsRequest&, DescribeBlueprintsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBlueprintsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBundleDiscountResponse> DescribeBundleDiscountOutcome;
                typedef std::future<DescribeBundleDiscountOutcome> DescribeBundleDiscountOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::DescribeBundleDiscountRequest&, DescribeBundleDiscountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBundleDiscountAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBundlesResponse> DescribeBundlesOutcome;
                typedef std::future<DescribeBundlesOutcome> DescribeBundlesOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::DescribeBundlesRequest&, DescribeBundlesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBundlesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCcnAttachedInstancesResponse> DescribeCcnAttachedInstancesOutcome;
                typedef std::future<DescribeCcnAttachedInstancesOutcome> DescribeCcnAttachedInstancesOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::DescribeCcnAttachedInstancesRequest&, DescribeCcnAttachedInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCcnAttachedInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDiskConfigsResponse> DescribeDiskConfigsOutcome;
                typedef std::future<DescribeDiskConfigsOutcome> DescribeDiskConfigsOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::DescribeDiskConfigsRequest&, DescribeDiskConfigsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDiskConfigsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDiskDiscountResponse> DescribeDiskDiscountOutcome;
                typedef std::future<DescribeDiskDiscountOutcome> DescribeDiskDiscountOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::DescribeDiskDiscountRequest&, DescribeDiskDiscountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDiskDiscountAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDisksResponse> DescribeDisksOutcome;
                typedef std::future<DescribeDisksOutcome> DescribeDisksOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::DescribeDisksRequest&, DescribeDisksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDisksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDisksDeniedActionsResponse> DescribeDisksDeniedActionsOutcome;
                typedef std::future<DescribeDisksDeniedActionsOutcome> DescribeDisksDeniedActionsOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::DescribeDisksDeniedActionsRequest&, DescribeDisksDeniedActionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDisksDeniedActionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDisksReturnableResponse> DescribeDisksReturnableOutcome;
                typedef std::future<DescribeDisksReturnableOutcome> DescribeDisksReturnableOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::DescribeDisksReturnableRequest&, DescribeDisksReturnableOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDisksReturnableAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFirewallRulesResponse> DescribeFirewallRulesOutcome;
                typedef std::future<DescribeFirewallRulesOutcome> DescribeFirewallRulesOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::DescribeFirewallRulesRequest&, DescribeFirewallRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFirewallRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFirewallRulesTemplateResponse> DescribeFirewallRulesTemplateOutcome;
                typedef std::future<DescribeFirewallRulesTemplateOutcome> DescribeFirewallRulesTemplateOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::DescribeFirewallRulesTemplateRequest&, DescribeFirewallRulesTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFirewallRulesTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeGeneralResourceQuotasResponse> DescribeGeneralResourceQuotasOutcome;
                typedef std::future<DescribeGeneralResourceQuotasOutcome> DescribeGeneralResourceQuotasOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::DescribeGeneralResourceQuotasRequest&, DescribeGeneralResourceQuotasOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGeneralResourceQuotasAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceLoginKeyPairAttributeResponse> DescribeInstanceLoginKeyPairAttributeOutcome;
                typedef std::future<DescribeInstanceLoginKeyPairAttributeOutcome> DescribeInstanceLoginKeyPairAttributeOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::DescribeInstanceLoginKeyPairAttributeRequest&, DescribeInstanceLoginKeyPairAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceLoginKeyPairAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceVncUrlResponse> DescribeInstanceVncUrlOutcome;
                typedef std::future<DescribeInstanceVncUrlOutcome> DescribeInstanceVncUrlOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::DescribeInstanceVncUrlRequest&, DescribeInstanceVncUrlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceVncUrlAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstancesResponse> DescribeInstancesOutcome;
                typedef std::future<DescribeInstancesOutcome> DescribeInstancesOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::DescribeInstancesRequest&, DescribeInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstancesDeniedActionsResponse> DescribeInstancesDeniedActionsOutcome;
                typedef std::future<DescribeInstancesDeniedActionsOutcome> DescribeInstancesDeniedActionsOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::DescribeInstancesDeniedActionsRequest&, DescribeInstancesDeniedActionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstancesDeniedActionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstancesDiskNumResponse> DescribeInstancesDiskNumOutcome;
                typedef std::future<DescribeInstancesDiskNumOutcome> DescribeInstancesDiskNumOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::DescribeInstancesDiskNumRequest&, DescribeInstancesDiskNumOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstancesDiskNumAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstancesReturnableResponse> DescribeInstancesReturnableOutcome;
                typedef std::future<DescribeInstancesReturnableOutcome> DescribeInstancesReturnableOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::DescribeInstancesReturnableRequest&, DescribeInstancesReturnableOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstancesReturnableAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstancesTrafficPackagesResponse> DescribeInstancesTrafficPackagesOutcome;
                typedef std::future<DescribeInstancesTrafficPackagesOutcome> DescribeInstancesTrafficPackagesOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::DescribeInstancesTrafficPackagesRequest&, DescribeInstancesTrafficPackagesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstancesTrafficPackagesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeKeyPairsResponse> DescribeKeyPairsOutcome;
                typedef std::future<DescribeKeyPairsOutcome> DescribeKeyPairsOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::DescribeKeyPairsRequest&, DescribeKeyPairsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeKeyPairsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeModifyInstanceBundlesResponse> DescribeModifyInstanceBundlesOutcome;
                typedef std::future<DescribeModifyInstanceBundlesOutcome> DescribeModifyInstanceBundlesOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::DescribeModifyInstanceBundlesRequest&, DescribeModifyInstanceBundlesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeModifyInstanceBundlesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRegionsResponse> DescribeRegionsOutcome;
                typedef std::future<DescribeRegionsOutcome> DescribeRegionsOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::DescribeRegionsRequest&, DescribeRegionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRegionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeResetInstanceBlueprintsResponse> DescribeResetInstanceBlueprintsOutcome;
                typedef std::future<DescribeResetInstanceBlueprintsOutcome> DescribeResetInstanceBlueprintsOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::DescribeResetInstanceBlueprintsRequest&, DescribeResetInstanceBlueprintsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeResetInstanceBlueprintsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeScenesResponse> DescribeScenesOutcome;
                typedef std::future<DescribeScenesOutcome> DescribeScenesOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::DescribeScenesRequest&, DescribeScenesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScenesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSnapshotsResponse> DescribeSnapshotsOutcome;
                typedef std::future<DescribeSnapshotsOutcome> DescribeSnapshotsOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::DescribeSnapshotsRequest&, DescribeSnapshotsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSnapshotsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSnapshotsDeniedActionsResponse> DescribeSnapshotsDeniedActionsOutcome;
                typedef std::future<DescribeSnapshotsDeniedActionsOutcome> DescribeSnapshotsDeniedActionsOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::DescribeSnapshotsDeniedActionsRequest&, DescribeSnapshotsDeniedActionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSnapshotsDeniedActionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeZonesResponse> DescribeZonesOutcome;
                typedef std::future<DescribeZonesOutcome> DescribeZonesOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::DescribeZonesRequest&, DescribeZonesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeZonesAsyncHandler;
                typedef Outcome<Core::Error, Model::DetachCcnResponse> DetachCcnOutcome;
                typedef std::future<DetachCcnOutcome> DetachCcnOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::DetachCcnRequest&, DetachCcnOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DetachCcnAsyncHandler;
                typedef Outcome<Core::Error, Model::DetachDisksResponse> DetachDisksOutcome;
                typedef std::future<DetachDisksOutcome> DetachDisksOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::DetachDisksRequest&, DetachDisksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DetachDisksAsyncHandler;
                typedef Outcome<Core::Error, Model::DisassociateInstancesKeyPairsResponse> DisassociateInstancesKeyPairsOutcome;
                typedef std::future<DisassociateInstancesKeyPairsOutcome> DisassociateInstancesKeyPairsOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::DisassociateInstancesKeyPairsRequest&, DisassociateInstancesKeyPairsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisassociateInstancesKeyPairsAsyncHandler;
                typedef Outcome<Core::Error, Model::ImportKeyPairResponse> ImportKeyPairOutcome;
                typedef std::future<ImportKeyPairOutcome> ImportKeyPairOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::ImportKeyPairRequest&, ImportKeyPairOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ImportKeyPairAsyncHandler;
                typedef Outcome<Core::Error, Model::InquirePriceCreateBlueprintResponse> InquirePriceCreateBlueprintOutcome;
                typedef std::future<InquirePriceCreateBlueprintOutcome> InquirePriceCreateBlueprintOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::InquirePriceCreateBlueprintRequest&, InquirePriceCreateBlueprintOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InquirePriceCreateBlueprintAsyncHandler;
                typedef Outcome<Core::Error, Model::InquirePriceCreateDisksResponse> InquirePriceCreateDisksOutcome;
                typedef std::future<InquirePriceCreateDisksOutcome> InquirePriceCreateDisksOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::InquirePriceCreateDisksRequest&, InquirePriceCreateDisksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InquirePriceCreateDisksAsyncHandler;
                typedef Outcome<Core::Error, Model::InquirePriceCreateInstancesResponse> InquirePriceCreateInstancesOutcome;
                typedef std::future<InquirePriceCreateInstancesOutcome> InquirePriceCreateInstancesOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::InquirePriceCreateInstancesRequest&, InquirePriceCreateInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InquirePriceCreateInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::InquirePriceRenewDisksResponse> InquirePriceRenewDisksOutcome;
                typedef std::future<InquirePriceRenewDisksOutcome> InquirePriceRenewDisksOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::InquirePriceRenewDisksRequest&, InquirePriceRenewDisksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InquirePriceRenewDisksAsyncHandler;
                typedef Outcome<Core::Error, Model::InquirePriceRenewInstancesResponse> InquirePriceRenewInstancesOutcome;
                typedef std::future<InquirePriceRenewInstancesOutcome> InquirePriceRenewInstancesOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::InquirePriceRenewInstancesRequest&, InquirePriceRenewInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InquirePriceRenewInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::IsolateDisksResponse> IsolateDisksOutcome;
                typedef std::future<IsolateDisksOutcome> IsolateDisksOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::IsolateDisksRequest&, IsolateDisksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> IsolateDisksAsyncHandler;
                typedef Outcome<Core::Error, Model::IsolateInstancesResponse> IsolateInstancesOutcome;
                typedef std::future<IsolateInstancesOutcome> IsolateInstancesOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::IsolateInstancesRequest&, IsolateInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> IsolateInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyBlueprintAttributeResponse> ModifyBlueprintAttributeOutcome;
                typedef std::future<ModifyBlueprintAttributeOutcome> ModifyBlueprintAttributeOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::ModifyBlueprintAttributeRequest&, ModifyBlueprintAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBlueprintAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDisksAttributeResponse> ModifyDisksAttributeOutcome;
                typedef std::future<ModifyDisksAttributeOutcome> ModifyDisksAttributeOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::ModifyDisksAttributeRequest&, ModifyDisksAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDisksAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDisksRenewFlagResponse> ModifyDisksRenewFlagOutcome;
                typedef std::future<ModifyDisksRenewFlagOutcome> ModifyDisksRenewFlagOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::ModifyDisksRenewFlagRequest&, ModifyDisksRenewFlagOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDisksRenewFlagAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyFirewallRuleDescriptionResponse> ModifyFirewallRuleDescriptionOutcome;
                typedef std::future<ModifyFirewallRuleDescriptionOutcome> ModifyFirewallRuleDescriptionOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::ModifyFirewallRuleDescriptionRequest&, ModifyFirewallRuleDescriptionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyFirewallRuleDescriptionAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyFirewallRulesResponse> ModifyFirewallRulesOutcome;
                typedef std::future<ModifyFirewallRulesOutcome> ModifyFirewallRulesOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::ModifyFirewallRulesRequest&, ModifyFirewallRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyFirewallRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyInstancesAttributeResponse> ModifyInstancesAttributeOutcome;
                typedef std::future<ModifyInstancesAttributeOutcome> ModifyInstancesAttributeOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::ModifyInstancesAttributeRequest&, ModifyInstancesAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstancesAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyInstancesBundleResponse> ModifyInstancesBundleOutcome;
                typedef std::future<ModifyInstancesBundleOutcome> ModifyInstancesBundleOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::ModifyInstancesBundleRequest&, ModifyInstancesBundleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstancesBundleAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyInstancesLoginKeyPairAttributeResponse> ModifyInstancesLoginKeyPairAttributeOutcome;
                typedef std::future<ModifyInstancesLoginKeyPairAttributeOutcome> ModifyInstancesLoginKeyPairAttributeOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::ModifyInstancesLoginKeyPairAttributeRequest&, ModifyInstancesLoginKeyPairAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstancesLoginKeyPairAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyInstancesRenewFlagResponse> ModifyInstancesRenewFlagOutcome;
                typedef std::future<ModifyInstancesRenewFlagOutcome> ModifyInstancesRenewFlagOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::ModifyInstancesRenewFlagRequest&, ModifyInstancesRenewFlagOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstancesRenewFlagAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySnapshotAttributeResponse> ModifySnapshotAttributeOutcome;
                typedef std::future<ModifySnapshotAttributeOutcome> ModifySnapshotAttributeOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::ModifySnapshotAttributeRequest&, ModifySnapshotAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySnapshotAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::RebootInstancesResponse> RebootInstancesOutcome;
                typedef std::future<RebootInstancesOutcome> RebootInstancesOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::RebootInstancesRequest&, RebootInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RebootInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::RenewDisksResponse> RenewDisksOutcome;
                typedef std::future<RenewDisksOutcome> RenewDisksOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::RenewDisksRequest&, RenewDisksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RenewDisksAsyncHandler;
                typedef Outcome<Core::Error, Model::RenewInstancesResponse> RenewInstancesOutcome;
                typedef std::future<RenewInstancesOutcome> RenewInstancesOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::RenewInstancesRequest&, RenewInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RenewInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::ResetAttachCcnResponse> ResetAttachCcnOutcome;
                typedef std::future<ResetAttachCcnOutcome> ResetAttachCcnOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::ResetAttachCcnRequest&, ResetAttachCcnOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResetAttachCcnAsyncHandler;
                typedef Outcome<Core::Error, Model::ResetInstanceResponse> ResetInstanceOutcome;
                typedef std::future<ResetInstanceOutcome> ResetInstanceOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::ResetInstanceRequest&, ResetInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResetInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::ResetInstancesPasswordResponse> ResetInstancesPasswordOutcome;
                typedef std::future<ResetInstancesPasswordOutcome> ResetInstancesPasswordOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::ResetInstancesPasswordRequest&, ResetInstancesPasswordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResetInstancesPasswordAsyncHandler;
                typedef Outcome<Core::Error, Model::StartInstancesResponse> StartInstancesOutcome;
                typedef std::future<StartInstancesOutcome> StartInstancesOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::StartInstancesRequest&, StartInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::StopInstancesResponse> StopInstancesOutcome;
                typedef std::future<StopInstancesOutcome> StopInstancesOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::StopInstancesRequest&, StopInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::TerminateDisksResponse> TerminateDisksOutcome;
                typedef std::future<TerminateDisksOutcome> TerminateDisksOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::TerminateDisksRequest&, TerminateDisksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TerminateDisksAsyncHandler;
                typedef Outcome<Core::Error, Model::TerminateInstancesResponse> TerminateInstancesOutcome;
                typedef std::future<TerminateInstancesOutcome> TerminateInstancesOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::TerminateInstancesRequest&, TerminateInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TerminateInstancesAsyncHandler;



                /**
                 *This API is used to roll back the system disk snapshot of the specified instance.
<li>Only rollback to the original system disk is supported.</li>
<li>Only snapshots in `NORMAL` status can be used for rollback. To query the status of a snapshot, you can call the `DescribeSnapshots` API and see the `SnapshotState` field in the response.</li>
<li>When a snapshot is rolled back, the status of the instance must be `STOPPED` or `RUNNING`. You can call the `DescribeInstances` API to query the instance status. Instances in `RUNNING` status will be forcibly shut down before snapshot rollback.</li>
                 * @param req ApplyInstanceSnapshotRequest
                 * @return ApplyInstanceSnapshotOutcome
                 */
                ApplyInstanceSnapshotOutcome ApplyInstanceSnapshot(const Model::ApplyInstanceSnapshotRequest &request);
                void ApplyInstanceSnapshotAsync(const Model::ApplyInstanceSnapshotRequest& request, const ApplyInstanceSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ApplyInstanceSnapshotOutcomeCallable ApplyInstanceSnapshotCallable(const Model::ApplyInstanceSnapshotRequest& request);

                /**
                 *This API is used to bind a user-specified key pair to an instance.
* Only instances on LINUX_UNIX in [RUNNING, STOPPED] status are supported. Instances in `RUNNING` status will be forcibly shut down before binding.
* If the public key of a key pair is written to the SSH configuration of the instance, you will be able to log in to the instance with the private key of the key pair.
* If the instance is already associated with a key, the old key will become invalid.
* If you currently use a password to log in, you will no longer be able to do so after you associate the instance with a key.
* Batch operations are supported. The maximum number of instances in each request is 100. If instances not available for the operation are selected, you will get an error code.
* This API is async. After the request is sent successfully, a `RequestId` will be returned. At this time, the operation is not completed immediately. The result of the instance operation can be queried by calling the `DescribeInstances` API. If the latest operation status (LatestOperationState) of the instance is `SUCCESS`, the operation is successful.
                 * @param req AssociateInstancesKeyPairsRequest
                 * @return AssociateInstancesKeyPairsOutcome
                 */
                AssociateInstancesKeyPairsOutcome AssociateInstancesKeyPairs(const Model::AssociateInstancesKeyPairsRequest &request);
                void AssociateInstancesKeyPairsAsync(const Model::AssociateInstancesKeyPairsRequest& request, const AssociateInstancesKeyPairsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AssociateInstancesKeyPairsOutcomeCallable AssociateInstancesKeyPairsCallable(const Model::AssociateInstancesKeyPairsRequest& request);

                /**
                 *This API is used to associate a CCN instance.
                 * @param req AttachCcnRequest
                 * @return AttachCcnOutcome
                 */
                AttachCcnOutcome AttachCcn(const Model::AttachCcnRequest &request);
                void AttachCcnAsync(const Model::AttachCcnRequest& request, const AttachCcnAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AttachCcnOutcomeCallable AttachCcnCallable(const Model::AttachCcnRequest& request);

                /**
                 *This API is used to attach one or more cloud disks.
                 * @param req AttachDisksRequest
                 * @return AttachDisksOutcome
                 */
                AttachDisksOutcome AttachDisks(const Model::AttachDisksRequest &request);
                void AttachDisksAsync(const Model::AttachDisksRequest& request, const AttachDisksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AttachDisksOutcomeCallable AttachDisksCallable(const Model::AttachDisksRequest& request);

                /**
                 *This API is used to create an image.
                 * @param req CreateBlueprintRequest
                 * @return CreateBlueprintOutcome
                 */
                CreateBlueprintOutcome CreateBlueprint(const Model::CreateBlueprintRequest &request);
                void CreateBlueprintAsync(const Model::CreateBlueprintRequest& request, const CreateBlueprintAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateBlueprintOutcomeCallable CreateBlueprintCallable(const Model::CreateBlueprintRequest& request);

                /**
                 *This API is used to create one or more cloud disks.
                 * @param req CreateDisksRequest
                 * @return CreateDisksOutcome
                 */
                CreateDisksOutcome CreateDisks(const Model::CreateDisksRequest &request);
                void CreateDisksAsync(const Model::CreateDisksRequest& request, const CreateDisksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDisksOutcomeCallable CreateDisksCallable(const Model::CreateDisksRequest& request);

                /**
                 *This API is used to add a firewall rule on an instance.


* `FirewallVersion` is the firewall version number. Every time you update the firewall rule version, it will be automatically increased by 1 to prevent the updated rule from expiring. If it is left empty, conflicts will not be considered.

In the `FirewallRules` parameter:
* Valid values of the `Protocol` field include `TCP`, `UDP`, `ICMP`, and `ALL`.
* For the `Port` field, you can enter only `ALL`, a single port number, several port numbers separated by commas, or a port range indicated by two port numbers separated by a minus sign. If `Port` is a range, the port number on the left of the minus sign must be smaller than the one on the right. If `Protocol` is not `TCP` or `UDP`, `Port` can only be empty or `ALL`. The length of the `Port` field cannot exceed 64 characters.
* For the `CidrBlock` field, you can enter any string that conforms to the CIDR format standard. Multi-Tenant network isolation rules take precedence over private network rules in the firewall.
* For the `Action` field, you can enter only `ACCEPT` or `DROP`.
* The length of the `FirewallRuleDescription` field cannot exceed 64 characters.
                 * @param req CreateFirewallRulesRequest
                 * @return CreateFirewallRulesOutcome
                 */
                CreateFirewallRulesOutcome CreateFirewallRules(const Model::CreateFirewallRulesRequest &request);
                void CreateFirewallRulesAsync(const Model::CreateFirewallRulesRequest& request, const CreateFirewallRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateFirewallRulesOutcomeCallable CreateFirewallRulesCallable(const Model::CreateFirewallRulesRequest& request);

                /**
                 *This API is used to create a system disk snapshot of the specified instance.
                 * @param req CreateInstanceSnapshotRequest
                 * @return CreateInstanceSnapshotOutcome
                 */
                CreateInstanceSnapshotOutcome CreateInstanceSnapshot(const Model::CreateInstanceSnapshotRequest &request);
                void CreateInstanceSnapshotAsync(const Model::CreateInstanceSnapshotRequest& request, const CreateInstanceSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateInstanceSnapshotOutcomeCallable CreateInstanceSnapshotCallable(const Model::CreateInstanceSnapshotRequest& request);

                /**
                 *This API is used to create one or more Lighthouse instances.
                 * @param req CreateInstancesRequest
                 * @return CreateInstancesOutcome
                 */
                CreateInstancesOutcome CreateInstances(const Model::CreateInstancesRequest &request);
                void CreateInstancesAsync(const Model::CreateInstancesRequest& request, const CreateInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateInstancesOutcomeCallable CreateInstancesCallable(const Model::CreateInstancesRequest& request);

                /**
                 *This API is used to create a key pair.
                 * @param req CreateKeyPairRequest
                 * @return CreateKeyPairOutcome
                 */
                CreateKeyPairOutcome CreateKeyPair(const Model::CreateKeyPairRequest &request);
                void CreateKeyPairAsync(const Model::CreateKeyPairRequest& request, const CreateKeyPairAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateKeyPairOutcomeCallable CreateKeyPairCallable(const Model::CreateKeyPairRequest& request);

                /**
                 *This API is used to delete an image.
                 * @param req DeleteBlueprintsRequest
                 * @return DeleteBlueprintsOutcome
                 */
                DeleteBlueprintsOutcome DeleteBlueprints(const Model::DeleteBlueprintsRequest &request);
                void DeleteBlueprintsAsync(const Model::DeleteBlueprintsRequest& request, const DeleteBlueprintsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteBlueprintsOutcomeCallable DeleteBlueprintsCallable(const Model::DeleteBlueprintsRequest& request);

                /**
                 *This API is used to delete a firewall rule of an instance.

* `FirewallVersion` is used to specify the version of the firewall to be manipulated. If the `FirewallVersion` value passed in is not equal to the current latest version of the firewall, a failure will be returned. If `FirewallVersion` is not passed in, the specified rule will be deleted directly.

In the `FirewallRules` parameter:
* Valid values of the `Protocol` field include `TCP`, `UDP`, `ICMP`, and `ALL`.
* For the `Port` field, you can enter only `ALL`, a single port number, several port numbers separated by commas, or a port range indicated by two port numbers separated by a minus sign. If `Port` is a range, the port number on the left of the minus sign must be smaller than the one on the right. If `Protocol` is not `TCP` or `UDP`, `Port` can only be empty or `ALL`. The length of the `Port` field cannot exceed 64 characters.
* For the `CidrBlock` field, you can enter any string that conforms to the CIDR format standard. Multi-Tenant network isolation rules take precedence over private network rules in the firewall.
* For the `Action` field, you can enter only `ACCEPT` or `DROP`.
* The length of the `FirewallRuleDescription` field cannot exceed 64 characters.
                 * @param req DeleteFirewallRulesRequest
                 * @return DeleteFirewallRulesOutcome
                 */
                DeleteFirewallRulesOutcome DeleteFirewallRules(const Model::DeleteFirewallRulesRequest &request);
                void DeleteFirewallRulesAsync(const Model::DeleteFirewallRulesRequest& request, const DeleteFirewallRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteFirewallRulesOutcomeCallable DeleteFirewallRulesCallable(const Model::DeleteFirewallRulesRequest& request);

                /**
                 *This API is used to delete a key pair.
                 * @param req DeleteKeyPairsRequest
                 * @return DeleteKeyPairsOutcome
                 */
                DeleteKeyPairsOutcome DeleteKeyPairs(const Model::DeleteKeyPairsRequest &request);
                void DeleteKeyPairsAsync(const Model::DeleteKeyPairsRequest& request, const DeleteKeyPairsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteKeyPairsOutcomeCallable DeleteKeyPairsCallable(const Model::DeleteKeyPairsRequest& request);

                /**
                 *This API is used to delete a snapshot.
The snapshot must be in `NORMAL` status. To query the status of a snapshot, you can call the `DescribeSnapshots` API and see the `SnapshotState` field in the response.
                 * @param req DeleteSnapshotsRequest
                 * @return DeleteSnapshotsOutcome
                 */
                DeleteSnapshotsOutcome DeleteSnapshots(const Model::DeleteSnapshotsRequest &request);
                void DeleteSnapshotsAsync(const Model::DeleteSnapshotsRequest& request, const DeleteSnapshotsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSnapshotsOutcomeCallable DeleteSnapshotsCallable(const Model::DeleteSnapshotsRequest& request);

                /**
                 *This API is used to query the list of scenes in all regions.
                 * @param req DescribeAllScenesRequest
                 * @return DescribeAllScenesOutcome
                 */
                DescribeAllScenesOutcome DescribeAllScenes(const Model::DescribeAllScenesRequest &request);
                void DescribeAllScenesAsync(const Model::DescribeAllScenesRequest& request, const DescribeAllScenesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAllScenesOutcomeCallable DescribeAllScenesCallable(const Model::DescribeAllScenesRequest& request);

                /**
                 *This API is used to query the information of an image instance.
                 * @param req DescribeBlueprintInstancesRequest
                 * @return DescribeBlueprintInstancesOutcome
                 */
                DescribeBlueprintInstancesOutcome DescribeBlueprintInstances(const Model::DescribeBlueprintInstancesRequest &request);
                void DescribeBlueprintInstancesAsync(const Model::DescribeBlueprintInstancesRequest& request, const DescribeBlueprintInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBlueprintInstancesOutcomeCallable DescribeBlueprintInstancesCallable(const Model::DescribeBlueprintInstancesRequest& request);

                /**
                 *This API is used to query the information of an image.
                 * @param req DescribeBlueprintsRequest
                 * @return DescribeBlueprintsOutcome
                 */
                DescribeBlueprintsOutcome DescribeBlueprints(const Model::DescribeBlueprintsRequest &request);
                void DescribeBlueprintsAsync(const Model::DescribeBlueprintsRequest& request, const DescribeBlueprintsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBlueprintsOutcomeCallable DescribeBlueprintsCallable(const Model::DescribeBlueprintsRequest& request);

                /**
                 *This API is used to query the discount information of a package.
                 * @param req DescribeBundleDiscountRequest
                 * @return DescribeBundleDiscountOutcome
                 */
                DescribeBundleDiscountOutcome DescribeBundleDiscount(const Model::DescribeBundleDiscountRequest &request);
                void DescribeBundleDiscountAsync(const Model::DescribeBundleDiscountRequest& request, const DescribeBundleDiscountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBundleDiscountOutcomeCallable DescribeBundleDiscountCallable(const Model::DescribeBundleDiscountRequest& request);

                /**
                 *This API is used to query the information of a package.
                 * @param req DescribeBundlesRequest
                 * @return DescribeBundlesOutcome
                 */
                DescribeBundlesOutcome DescribeBundles(const Model::DescribeBundlesRequest &request);
                void DescribeBundlesAsync(const Model::DescribeBundlesRequest& request, const DescribeBundlesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBundlesOutcomeCallable DescribeBundlesCallable(const Model::DescribeBundlesRequest& request);

                /**
                 *This API is used to query the information of instances associated with CCN.
                 * @param req DescribeCcnAttachedInstancesRequest
                 * @return DescribeCcnAttachedInstancesOutcome
                 */
                DescribeCcnAttachedInstancesOutcome DescribeCcnAttachedInstances(const Model::DescribeCcnAttachedInstancesRequest &request);
                void DescribeCcnAttachedInstancesAsync(const Model::DescribeCcnAttachedInstancesRequest& request, const DescribeCcnAttachedInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCcnAttachedInstancesOutcomeCallable DescribeCcnAttachedInstancesCallable(const Model::DescribeCcnAttachedInstancesRequest& request);

                /**
                 *This API is used to query the cloud disk configuration.
                 * @param req DescribeDiskConfigsRequest
                 * @return DescribeDiskConfigsOutcome
                 */
                DescribeDiskConfigsOutcome DescribeDiskConfigs(const Model::DescribeDiskConfigsRequest &request);
                void DescribeDiskConfigsAsync(const Model::DescribeDiskConfigsRequest& request, const DescribeDiskConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDiskConfigsOutcomeCallable DescribeDiskConfigsCallable(const Model::DescribeDiskConfigsRequest& request);

                /**
                 *This API is used to query the discount information of a cloud disk.
                 * @param req DescribeDiskDiscountRequest
                 * @return DescribeDiskDiscountOutcome
                 */
                DescribeDiskDiscountOutcome DescribeDiskDiscount(const Model::DescribeDiskDiscountRequest &request);
                void DescribeDiskDiscountAsync(const Model::DescribeDiskDiscountRequest& request, const DescribeDiskDiscountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDiskDiscountOutcomeCallable DescribeDiskDiscountCallable(const Model::DescribeDiskDiscountRequest& request);

                /**
                 *This API is used to query the information of one or more cloud disks.
                 * @param req DescribeDisksRequest
                 * @return DescribeDisksOutcome
                 */
                DescribeDisksOutcome DescribeDisks(const Model::DescribeDisksRequest &request);
                void DescribeDisksAsync(const Model::DescribeDisksRequest& request, const DescribeDisksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDisksOutcomeCallable DescribeDisksCallable(const Model::DescribeDisksRequest& request);

                /**
                 *This API is used to query the list of operation limits of one or more cloud disks.
                 * @param req DescribeDisksDeniedActionsRequest
                 * @return DescribeDisksDeniedActionsOutcome
                 */
                DescribeDisksDeniedActionsOutcome DescribeDisksDeniedActions(const Model::DescribeDisksDeniedActionsRequest &request);
                void DescribeDisksDeniedActionsAsync(const Model::DescribeDisksDeniedActionsRequest& request, const DescribeDisksDeniedActionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDisksDeniedActionsOutcomeCallable DescribeDisksDeniedActionsCallable(const Model::DescribeDisksDeniedActionsRequest& request);

                /**
                 *This API is used to query whether the specified cloud disk can be returned.
                 * @param req DescribeDisksReturnableRequest
                 * @return DescribeDisksReturnableOutcome
                 */
                DescribeDisksReturnableOutcome DescribeDisksReturnable(const Model::DescribeDisksReturnableRequest &request);
                void DescribeDisksReturnableAsync(const Model::DescribeDisksReturnableRequest& request, const DescribeDisksReturnableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDisksReturnableOutcomeCallable DescribeDisksReturnableCallable(const Model::DescribeDisksReturnableRequest& request);

                /**
                 *This API is used to query the firewall rules of an instance.
                 * @param req DescribeFirewallRulesRequest
                 * @return DescribeFirewallRulesOutcome
                 */
                DescribeFirewallRulesOutcome DescribeFirewallRules(const Model::DescribeFirewallRulesRequest &request);
                void DescribeFirewallRulesAsync(const Model::DescribeFirewallRulesRequest& request, const DescribeFirewallRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFirewallRulesOutcomeCallable DescribeFirewallRulesCallable(const Model::DescribeFirewallRulesRequest& request);

                /**
                 *This API is used to query a firewall rule template.
                 * @param req DescribeFirewallRulesTemplateRequest
                 * @return DescribeFirewallRulesTemplateOutcome
                 */
                DescribeFirewallRulesTemplateOutcome DescribeFirewallRulesTemplate(const Model::DescribeFirewallRulesTemplateRequest &request);
                void DescribeFirewallRulesTemplateAsync(const Model::DescribeFirewallRulesTemplateRequest& request, const DescribeFirewallRulesTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFirewallRulesTemplateOutcomeCallable DescribeFirewallRulesTemplateCallable(const Model::DescribeFirewallRulesTemplateRequest& request);

                /**
                 *This API is used to query the quota information of general resources.
                 * @param req DescribeGeneralResourceQuotasRequest
                 * @return DescribeGeneralResourceQuotasOutcome
                 */
                DescribeGeneralResourceQuotasOutcome DescribeGeneralResourceQuotas(const Model::DescribeGeneralResourceQuotasRequest &request);
                void DescribeGeneralResourceQuotasAsync(const Model::DescribeGeneralResourceQuotasRequest& request, const DescribeGeneralResourceQuotasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGeneralResourceQuotasOutcomeCallable DescribeGeneralResourceQuotasCallable(const Model::DescribeGeneralResourceQuotasRequest& request);

                /**
                 *This API is used to query the attributes of the default login key of an instance.
                 * @param req DescribeInstanceLoginKeyPairAttributeRequest
                 * @return DescribeInstanceLoginKeyPairAttributeOutcome
                 */
                DescribeInstanceLoginKeyPairAttributeOutcome DescribeInstanceLoginKeyPairAttribute(const Model::DescribeInstanceLoginKeyPairAttributeRequest &request);
                void DescribeInstanceLoginKeyPairAttributeAsync(const Model::DescribeInstanceLoginKeyPairAttributeRequest& request, const DescribeInstanceLoginKeyPairAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceLoginKeyPairAttributeOutcomeCallable DescribeInstanceLoginKeyPairAttributeCallable(const Model::DescribeInstanceLoginKeyPairAttributeRequest& request);

                /**
                 *This API is used to query the URL for VNC login.

* It does not support `STOPPED` CVMs.
* A VNC URL is only valid for 15 seconds. If you do not access the URL within 15 seconds, you will need to query another one.
* The VNC URL can be used once only. You need to query a new one if you want to log in again.
* Up to 30 re-connection attempts allowed in one minute.
* `InstanceVncUrl`: Its value will be returned after the API is successfully called.
After you get the value of `InstanceVncUrl`, you need to append `InstanceVncUrl=xxxx` to the end of the link `https://img.qcloud.com/qcloud/app/active_vnc/index.html?`.
 The final URL can be in the following formats:

```
https://img.qcloud.com/qcloud/app/active_vnc/index.html?InstanceVncUrl=wss%3A%2F%2Fbjvnc.qcloud.com%3A26789%2Fvnc%3Fs%3DaHpjWnRVMFNhYmxKdDM5MjRHNlVTSVQwajNUSW0wb2tBbmFtREFCTmFrcy8vUUNPMG0wSHZNOUUxRm5PMmUzWmFDcWlOdDJIbUJxSTZDL0RXcHZxYnZZMmRkWWZWcEZia2lyb09XMzdKNmM9
```

                 * @param req DescribeInstanceVncUrlRequest
                 * @return DescribeInstanceVncUrlOutcome
                 */
                DescribeInstanceVncUrlOutcome DescribeInstanceVncUrl(const Model::DescribeInstanceVncUrlRequest &request);
                void DescribeInstanceVncUrlAsync(const Model::DescribeInstanceVncUrlRequest& request, const DescribeInstanceVncUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceVncUrlOutcomeCallable DescribeInstanceVncUrlCallable(const Model::DescribeInstanceVncUrlRequest& request);

                /**
                 *This API is used to query the details of one or multiple instances.

* You can query the details of an instance according to its ID, name, or private IP.
* For more information on filters, please see [Filters](https://intl.cloud.tencent.com/document/product/1207/47576?from_cn_redirect=1#Filter).
* If no parameter is defined, the status of a certain number of instances under the current account will be returned. The number is specified by `Limit` and is 20 by default.
* The latest operation (LatestOperation) and the latest operation status (LatestOperationState) of the instance can be queried.
                 * @param req DescribeInstancesRequest
                 * @return DescribeInstancesOutcome
                 */
                DescribeInstancesOutcome DescribeInstances(const Model::DescribeInstancesRequest &request);
                void DescribeInstancesAsync(const Model::DescribeInstancesRequest& request, const DescribeInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstancesOutcomeCallable DescribeInstancesCallable(const Model::DescribeInstancesRequest& request);

                /**
                 *This API is used to query the list of operation limits of one or more instances.
                 * @param req DescribeInstancesDeniedActionsRequest
                 * @return DescribeInstancesDeniedActionsOutcome
                 */
                DescribeInstancesDeniedActionsOutcome DescribeInstancesDeniedActions(const Model::DescribeInstancesDeniedActionsRequest &request);
                void DescribeInstancesDeniedActionsAsync(const Model::DescribeInstancesDeniedActionsRequest& request, const DescribeInstancesDeniedActionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstancesDeniedActionsOutcomeCallable DescribeInstancesDeniedActionsCallable(const Model::DescribeInstancesDeniedActionsRequest& request);

                /**
                 *This API is used to query the number of cloud disks attached to instances.
                 * @param req DescribeInstancesDiskNumRequest
                 * @return DescribeInstancesDiskNumOutcome
                 */
                DescribeInstancesDiskNumOutcome DescribeInstancesDiskNum(const Model::DescribeInstancesDiskNumRequest &request);
                void DescribeInstancesDiskNumAsync(const Model::DescribeInstancesDiskNumRequest& request, const DescribeInstancesDiskNumAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstancesDiskNumOutcomeCallable DescribeInstancesDiskNumCallable(const Model::DescribeInstancesDiskNumRequest& request);

                /**
                 *This API is used to query whether the specified instance can be returned.
                 * @param req DescribeInstancesReturnableRequest
                 * @return DescribeInstancesReturnableOutcome
                 */
                DescribeInstancesReturnableOutcome DescribeInstancesReturnable(const Model::DescribeInstancesReturnableRequest &request);
                void DescribeInstancesReturnableAsync(const Model::DescribeInstancesReturnableRequest& request, const DescribeInstancesReturnableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstancesReturnableOutcomeCallable DescribeInstancesReturnableCallable(const Model::DescribeInstancesReturnableRequest& request);

                /**
                 *This API is used to query the traffic package details of one or more instances.
                 * @param req DescribeInstancesTrafficPackagesRequest
                 * @return DescribeInstancesTrafficPackagesOutcome
                 */
                DescribeInstancesTrafficPackagesOutcome DescribeInstancesTrafficPackages(const Model::DescribeInstancesTrafficPackagesRequest &request);
                void DescribeInstancesTrafficPackagesAsync(const Model::DescribeInstancesTrafficPackagesRequest& request, const DescribeInstancesTrafficPackagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstancesTrafficPackagesOutcomeCallable DescribeInstancesTrafficPackagesCallable(const Model::DescribeInstancesTrafficPackagesRequest& request);

                /**
                 *This API is used to query key pairs.
                 * @param req DescribeKeyPairsRequest
                 * @return DescribeKeyPairsOutcome
                 */
                DescribeKeyPairsOutcome DescribeKeyPairs(const Model::DescribeKeyPairsRequest &request);
                void DescribeKeyPairsAsync(const Model::DescribeKeyPairsRequest& request, const DescribeKeyPairsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeKeyPairsOutcomeCallable DescribeKeyPairsCallable(const Model::DescribeKeyPairsRequest& request);

                /**
                 *This API is used to query the list of package options of an instance.
                 * @param req DescribeModifyInstanceBundlesRequest
                 * @return DescribeModifyInstanceBundlesOutcome
                 */
                DescribeModifyInstanceBundlesOutcome DescribeModifyInstanceBundles(const Model::DescribeModifyInstanceBundlesRequest &request);
                void DescribeModifyInstanceBundlesAsync(const Model::DescribeModifyInstanceBundlesRequest& request, const DescribeModifyInstanceBundlesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeModifyInstanceBundlesOutcomeCallable DescribeModifyInstanceBundlesCallable(const Model::DescribeModifyInstanceBundlesRequest& request);

                /**
                 *This API is used to query the information of regions.
                 * @param req DescribeRegionsRequest
                 * @return DescribeRegionsOutcome
                 */
                DescribeRegionsOutcome DescribeRegions(const Model::DescribeRegionsRequest &request);
                void DescribeRegionsAsync(const Model::DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRegionsOutcomeCallable DescribeRegionsCallable(const Model::DescribeRegionsRequest& request);

                /**
                 *This API is used to query the image information of a reset instance.
                 * @param req DescribeResetInstanceBlueprintsRequest
                 * @return DescribeResetInstanceBlueprintsOutcome
                 */
                DescribeResetInstanceBlueprintsOutcome DescribeResetInstanceBlueprints(const Model::DescribeResetInstanceBlueprintsRequest &request);
                void DescribeResetInstanceBlueprintsAsync(const Model::DescribeResetInstanceBlueprintsRequest& request, const DescribeResetInstanceBlueprintsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeResetInstanceBlueprintsOutcomeCallable DescribeResetInstanceBlueprintsCallable(const Model::DescribeResetInstanceBlueprintsRequest& request);

                /**
                 *This API is used to query the list of scenes.
                 * @param req DescribeScenesRequest
                 * @return DescribeScenesOutcome
                 */
                DescribeScenesOutcome DescribeScenes(const Model::DescribeScenesRequest &request);
                void DescribeScenesAsync(const Model::DescribeScenesRequest& request, const DescribeScenesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeScenesOutcomeCallable DescribeScenesCallable(const Model::DescribeScenesRequest& request);

                /**
                 *This API is used to query the list of snapshots.
                 * @param req DescribeSnapshotsRequest
                 * @return DescribeSnapshotsOutcome
                 */
                DescribeSnapshotsOutcome DescribeSnapshots(const Model::DescribeSnapshotsRequest &request);
                void DescribeSnapshotsAsync(const Model::DescribeSnapshotsRequest& request, const DescribeSnapshotsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSnapshotsOutcomeCallable DescribeSnapshotsCallable(const Model::DescribeSnapshotsRequest& request);

                /**
                 *This API is used to query the list of operation limits of one or more snapshots.
                 * @param req DescribeSnapshotsDeniedActionsRequest
                 * @return DescribeSnapshotsDeniedActionsOutcome
                 */
                DescribeSnapshotsDeniedActionsOutcome DescribeSnapshotsDeniedActions(const Model::DescribeSnapshotsDeniedActionsRequest &request);
                void DescribeSnapshotsDeniedActionsAsync(const Model::DescribeSnapshotsDeniedActionsRequest& request, const DescribeSnapshotsDeniedActionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSnapshotsDeniedActionsOutcomeCallable DescribeSnapshotsDeniedActionsCallable(const Model::DescribeSnapshotsDeniedActionsRequest& request);

                /**
                 *This API is used to query the list of AZs in a region.
                 * @param req DescribeZonesRequest
                 * @return DescribeZonesOutcome
                 */
                DescribeZonesOutcome DescribeZones(const Model::DescribeZonesRequest &request);
                void DescribeZonesAsync(const Model::DescribeZonesRequest& request, const DescribeZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeZonesOutcomeCallable DescribeZonesCallable(const Model::DescribeZonesRequest& request);

                /**
                 *This API is used to disassociate with a CCN instance.
                 * @param req DetachCcnRequest
                 * @return DetachCcnOutcome
                 */
                DetachCcnOutcome DetachCcn(const Model::DetachCcnRequest &request);
                void DetachCcnAsync(const Model::DetachCcnRequest& request, const DetachCcnAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DetachCcnOutcomeCallable DetachCcnCallable(const Model::DetachCcnRequest& request);

                /**
                 *This API is used to detach one or more cloud disks.
                 * @param req DetachDisksRequest
                 * @return DetachDisksOutcome
                 */
                DetachDisksOutcome DetachDisks(const Model::DetachDisksRequest &request);
                void DetachDisksAsync(const Model::DetachDisksRequest& request, const DetachDisksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DetachDisksOutcomeCallable DetachDisksCallable(const Model::DetachDisksRequest& request);

                /**
                 *This API is used to unbind an instance from the specified key pair.

* Only instances on LINUX_UNIX in [RUNNING, STOPPED] status are supported. Instances in `RUNNING` status will be forcibly shut down before unbinding.
* After a key pair is unassociated from an instance, you can log in to the instance with password.
* If no password was set, you cannot log in to the instance with SSH after unbinding. You can call the ResetInstancesPassword API to set a login password.
* Batch operations are supported. The maximum number of instances in each request is 100.
* This API is async. After the request is sent successfully, a `RequestId` will be returned. At this time, the operation is not completed immediately. The result of the instance operation can be queried by calling the `DescribeInstances` API. If the latest operation status (LatestOperationState) of the instance is `SUCCESS`, the operation is successful.
                 * @param req DisassociateInstancesKeyPairsRequest
                 * @return DisassociateInstancesKeyPairsOutcome
                 */
                DisassociateInstancesKeyPairsOutcome DisassociateInstancesKeyPairs(const Model::DisassociateInstancesKeyPairsRequest &request);
                void DisassociateInstancesKeyPairsAsync(const Model::DisassociateInstancesKeyPairsRequest& request, const DisassociateInstancesKeyPairsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisassociateInstancesKeyPairsOutcomeCallable DisassociateInstancesKeyPairsCallable(const Model::DisassociateInstancesKeyPairsRequest& request);

                /**
                 *This API is used to import the specified key pair.
                 * @param req ImportKeyPairRequest
                 * @return ImportKeyPairOutcome
                 */
                ImportKeyPairOutcome ImportKeyPair(const Model::ImportKeyPairRequest &request);
                void ImportKeyPairAsync(const Model::ImportKeyPairRequest& request, const ImportKeyPairAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ImportKeyPairOutcomeCallable ImportKeyPairCallable(const Model::ImportKeyPairRequest& request);

                /**
                 *This API is used to query the price of a created image.
                 * @param req InquirePriceCreateBlueprintRequest
                 * @return InquirePriceCreateBlueprintOutcome
                 */
                InquirePriceCreateBlueprintOutcome InquirePriceCreateBlueprint(const Model::InquirePriceCreateBlueprintRequest &request);
                void InquirePriceCreateBlueprintAsync(const Model::InquirePriceCreateBlueprintRequest& request, const InquirePriceCreateBlueprintAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InquirePriceCreateBlueprintOutcomeCallable InquirePriceCreateBlueprintCallable(const Model::InquirePriceCreateBlueprintRequest& request);

                /**
                 *This API is used to query the price of purchasing cloud disks.
                 * @param req InquirePriceCreateDisksRequest
                 * @return InquirePriceCreateDisksOutcome
                 */
                InquirePriceCreateDisksOutcome InquirePriceCreateDisks(const Model::InquirePriceCreateDisksRequest &request);
                void InquirePriceCreateDisksAsync(const Model::InquirePriceCreateDisksRequest& request, const InquirePriceCreateDisksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InquirePriceCreateDisksOutcomeCallable InquirePriceCreateDisksCallable(const Model::InquirePriceCreateDisksRequest& request);

                /**
                 *This API is used to query the price of a created instance.
                 * @param req InquirePriceCreateInstancesRequest
                 * @return InquirePriceCreateInstancesOutcome
                 */
                InquirePriceCreateInstancesOutcome InquirePriceCreateInstances(const Model::InquirePriceCreateInstancesRequest &request);
                void InquirePriceCreateInstancesAsync(const Model::InquirePriceCreateInstancesRequest& request, const InquirePriceCreateInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InquirePriceCreateInstancesOutcomeCallable InquirePriceCreateInstancesCallable(const Model::InquirePriceCreateInstancesRequest& request);

                /**
                 *This API is used to query the price of renewing cloud disks.
                 * @param req InquirePriceRenewDisksRequest
                 * @return InquirePriceRenewDisksOutcome
                 */
                InquirePriceRenewDisksOutcome InquirePriceRenewDisks(const Model::InquirePriceRenewDisksRequest &request);
                void InquirePriceRenewDisksAsync(const Model::InquirePriceRenewDisksRequest& request, const InquirePriceRenewDisksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InquirePriceRenewDisksOutcomeCallable InquirePriceRenewDisksCallable(const Model::InquirePriceRenewDisksRequest& request);

                /**
                 *This API is used to query the price of renewing one or more instances.
                 * @param req InquirePriceRenewInstancesRequest
                 * @return InquirePriceRenewInstancesOutcome
                 */
                InquirePriceRenewInstancesOutcome InquirePriceRenewInstances(const Model::InquirePriceRenewInstancesRequest &request);
                void InquirePriceRenewInstancesAsync(const Model::InquirePriceRenewInstancesRequest& request, const InquirePriceRenewInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InquirePriceRenewInstancesOutcomeCallable InquirePriceRenewInstancesCallable(const Model::InquirePriceRenewInstancesRequest& request);

                /**
                 *This API is used to return one or more Lighthouse cloud disks.

You can only perform this operation on `UNATTACHED` disks.
After the successful call of the API, the cloud disk goes to the SHUTDOWN state.
Up to 20 instances are supported at one time. 
This API is async. After the request is sent, a `RequestId` is returned. At this time, the operation is not completed yet. To check the result, you need to call  [DescribeDisks](https://intl.cloud.tencent.com/document/product/1207/66093?from_cn_redirect=1). If the latest operation status (LatestOperationState) of the disk is `SUCCESS`, the operation is successful.
                 * @param req IsolateDisksRequest
                 * @return IsolateDisksOutcome
                 */
                IsolateDisksOutcome IsolateDisks(const Model::IsolateDisksRequest &request);
                void IsolateDisksAsync(const Model::IsolateDisksRequest& request, const IsolateDisksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                IsolateDisksOutcomeCallable IsolateDisksCallable(const Model::IsolateDisksRequest& request);

                /**
                 *This API is used to return one or more Lighthouse instances. 
* Only `RUNNING` and `STOPPED` instances can be returned. 
* The instance status goes to `SHUTDOWN` after the API is called successfully. 
* Batch operations are supported. Up to 20 resources (including instances and data disks) can be returned in each request. 
* This API is async. After the request is sent successfully, a `RequestId` will be returned. At this time, the operation is not completed immediately. The result of the instance operation can be queried by calling the `DescribeInstances` API. If the latest operation status (LatestOperationState) of the instance is `SUCCESS`, the operation is successful.
                 * @param req IsolateInstancesRequest
                 * @return IsolateInstancesOutcome
                 */
                IsolateInstancesOutcome IsolateInstances(const Model::IsolateInstancesRequest &request);
                void IsolateInstancesAsync(const Model::IsolateInstancesRequest& request, const IsolateInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                IsolateInstancesOutcomeCallable IsolateInstancesCallable(const Model::IsolateInstancesRequest& request);

                /**
                 *This API is used to modify an image attribute.
                 * @param req ModifyBlueprintAttributeRequest
                 * @return ModifyBlueprintAttributeOutcome
                 */
                ModifyBlueprintAttributeOutcome ModifyBlueprintAttribute(const Model::ModifyBlueprintAttributeRequest &request);
                void ModifyBlueprintAttributeAsync(const Model::ModifyBlueprintAttributeRequest& request, const ModifyBlueprintAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyBlueprintAttributeOutcomeCallable ModifyBlueprintAttributeCallable(const Model::ModifyBlueprintAttributeRequest& request);

                /**
                 *This API is used to modify cloud disk attributes.
                 * @param req ModifyDisksAttributeRequest
                 * @return ModifyDisksAttributeOutcome
                 */
                ModifyDisksAttributeOutcome ModifyDisksAttribute(const Model::ModifyDisksAttributeRequest &request);
                void ModifyDisksAttributeAsync(const Model::ModifyDisksAttributeRequest& request, const ModifyDisksAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDisksAttributeOutcomeCallable ModifyDisksAttributeCallable(const Model::ModifyDisksAttributeRequest& request);

                /**
                 *This API is used to modify the configuration of auto-renewal of cloud disks.
                 * @param req ModifyDisksRenewFlagRequest
                 * @return ModifyDisksRenewFlagOutcome
                 */
                ModifyDisksRenewFlagOutcome ModifyDisksRenewFlag(const Model::ModifyDisksRenewFlagRequest &request);
                void ModifyDisksRenewFlagAsync(const Model::ModifyDisksRenewFlagRequest& request, const ModifyDisksRenewFlagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDisksRenewFlagOutcomeCallable ModifyDisksRenewFlagCallable(const Model::ModifyDisksRenewFlagRequest& request);

                /**
                 *This API is used to modify the description of a single firewall rule.

* `FirewallVersion` is used to specify the version of the firewall to be manipulated. If the `FirewallVersion` value passed in is not equal to the current latest version of the firewall, a failure will be returned. If `FirewallVersion` is not passed in, the description of the specified rule will be modified directly.

In the `FirewallRule` parameter:
* Valid values of the `Protocol` field include `TCP`, `UDP`, `ICMP`, and `ALL`.
* For the `Port` field, you can enter only `ALL`, a single port number, several port numbers separated by commas, or a port range indicated by two port numbers separated by a minus sign. If `Port` is a range, the port number on the left of the minus sign must be smaller than the one on the right. If `Protocol` is not `TCP` or `UDP`, `Port` can only be empty or `ALL`. The length of the `Port` field cannot exceed 64 characters.
* For the `CidrBlock` field, you can enter any string that conforms to the CIDR format standard. Multi-Tenant network isolation rules take precedence over private network rules in the firewall.
* For the `Action` field, you can enter only `ACCEPT` or `DROP`.
* The length of the `FirewallRuleDescription` field cannot exceed 64 characters.
                 * @param req ModifyFirewallRuleDescriptionRequest
                 * @return ModifyFirewallRuleDescriptionOutcome
                 */
                ModifyFirewallRuleDescriptionOutcome ModifyFirewallRuleDescription(const Model::ModifyFirewallRuleDescriptionRequest &request);
                void ModifyFirewallRuleDescriptionAsync(const Model::ModifyFirewallRuleDescriptionRequest& request, const ModifyFirewallRuleDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyFirewallRuleDescriptionOutcomeCallable ModifyFirewallRuleDescriptionCallable(const Model::ModifyFirewallRuleDescriptionRequest& request);

                /**
                 *This API is used to reset the firewall rules of an instance.

This API deletes all firewall rules of the current instance first and then adds new rules.

* `FirewallVersion` is used to specify the version of the firewall to be manipulated. If the `FirewallVersion` value passed in is not equal to the current latest version of the firewall, a failure will be returned. If `FirewallVersion` is not passed in, the specified rule will be reset directly.

In the `FirewallRules` parameter:
* Valid values of the `Protocol` field include `TCP`, `UDP`, `ICMP`, and `ALL`.
* For the `Port` field, you can enter only `ALL`, a single port number, several port numbers separated by commas, or a port range indicated by two port numbers separated by a minus sign. If `Port` is a range, the port number on the left of the minus sign must be smaller than the one on the right. If `Protocol` is not `TCP` or `UDP`, `Port` can only be empty or `ALL`. The length of the `Port` field cannot exceed 64 characters.
* For the `CidrBlock` field, you can enter any string that conforms to the CIDR format standard. Multi-Tenant network isolation rules take precedence over private network rules in the firewall.
* For the `Action` field, you can enter only `ACCEPT` or `DROP`.
* The length of the `FirewallRuleDescription` field cannot exceed 64 characters.
                 * @param req ModifyFirewallRulesRequest
                 * @return ModifyFirewallRulesOutcome
                 */
                ModifyFirewallRulesOutcome ModifyFirewallRules(const Model::ModifyFirewallRulesRequest &request);
                void ModifyFirewallRulesAsync(const Model::ModifyFirewallRulesRequest& request, const ModifyFirewallRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyFirewallRulesOutcomeCallable ModifyFirewallRulesCallable(const Model::ModifyFirewallRulesRequest& request);

                /**
                 *This API is used to modify an instance attribute. 
* The instance name is used only for users’ convenience. 
* Batch operations are supported. The maximum number of instances in each request is 100.
                 * @param req ModifyInstancesAttributeRequest
                 * @return ModifyInstancesAttributeOutcome
                 */
                ModifyInstancesAttributeOutcome ModifyInstancesAttribute(const Model::ModifyInstancesAttributeRequest &request);
                void ModifyInstancesAttributeAsync(const Model::ModifyInstancesAttributeRequest& request, const ModifyInstancesAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyInstancesAttributeOutcomeCallable ModifyInstancesAttributeCallable(const Model::ModifyInstancesAttributeRequest& request);

                /**
                 *This API is used change one or more Lighthouse instance bundles. 
* Only `RUNNING` and `STOPPED` instances can be changed. 
* Batch operations are supported. The maximum number of instances in each request is 30. 
* This API is async. After the request is sent successfully, a `RequestId` will be returned. At this time, the operation is not completed immediately. The result of the instance operation can be queried by calling the `DescribeInstances` API. If the latest operation status (LatestOperationState) of the instance is `SUCCESS`, the operation is successful.
                 * @param req ModifyInstancesBundleRequest
                 * @return ModifyInstancesBundleOutcome
                 */
                ModifyInstancesBundleOutcome ModifyInstancesBundle(const Model::ModifyInstancesBundleRequest &request);
                void ModifyInstancesBundleAsync(const Model::ModifyInstancesBundleRequest& request, const ModifyInstancesBundleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyInstancesBundleOutcomeCallable ModifyInstancesBundleCallable(const Model::ModifyInstancesBundleRequest& request);

                /**
                 *This API is used to set the attributes of the default login key pair of an instance.


                 * @param req ModifyInstancesLoginKeyPairAttributeRequest
                 * @return ModifyInstancesLoginKeyPairAttributeOutcome
                 */
                ModifyInstancesLoginKeyPairAttributeOutcome ModifyInstancesLoginKeyPairAttribute(const Model::ModifyInstancesLoginKeyPairAttributeRequest &request);
                void ModifyInstancesLoginKeyPairAttributeAsync(const Model::ModifyInstancesLoginKeyPairAttributeRequest& request, const ModifyInstancesLoginKeyPairAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyInstancesLoginKeyPairAttributeOutcomeCallable ModifyInstancesLoginKeyPairAttributeCallable(const Model::ModifyInstancesLoginKeyPairAttributeRequest& request);

                /**
                 *This API is used to change the auto-renewal setting of monthly-subscribed instances. 

* Instances with auto-renewal enabled are automatically renewed on a monthly basis upon the expiration. 
* Batch operations are supported. Up to 100 instances per request is allowed.
                 * @param req ModifyInstancesRenewFlagRequest
                 * @return ModifyInstancesRenewFlagOutcome
                 */
                ModifyInstancesRenewFlagOutcome ModifyInstancesRenewFlag(const Model::ModifyInstancesRenewFlagRequest &request);
                void ModifyInstancesRenewFlagAsync(const Model::ModifyInstancesRenewFlagRequest& request, const ModifyInstancesRenewFlagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyInstancesRenewFlagOutcomeCallable ModifyInstancesRenewFlagCallable(const Model::ModifyInstancesRenewFlagRequest& request);

                /**
                 *This API is used to modify the attributes of a snapshot.
<li>The snapshot name is used only for users’ convenience.</li>
                 * @param req ModifySnapshotAttributeRequest
                 * @return ModifySnapshotAttributeOutcome
                 */
                ModifySnapshotAttributeOutcome ModifySnapshotAttribute(const Model::ModifySnapshotAttributeRequest &request);
                void ModifySnapshotAttributeAsync(const Model::ModifySnapshotAttributeRequest& request, const ModifySnapshotAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySnapshotAttributeOutcomeCallable ModifySnapshotAttributeCallable(const Model::ModifySnapshotAttributeRequest& request);

                /**
                 *This API is used to restart instances.

* You can only perform this operation on instances whose status is `RUNNING`.
* The instance status will become `REBOOTING` when the API is called successfully and will become `RUNNING` when the instance is successfully restarted.
* Batch operations are supported. The maximum number of instances in each request is 100.
* This API is async. After the request is sent successfully, a `RequestId` will be returned. At this time, the operation is not completed immediately. The result of the instance operation can be queried by calling the `DescribeInstances` API. If the latest operation status (LatestOperationState) of the instance is `SUCCESS`, the operation is successful.
                 * @param req RebootInstancesRequest
                 * @return RebootInstancesOutcome
                 */
                RebootInstancesOutcome RebootInstances(const Model::RebootInstancesRequest &request);
                void RebootInstancesAsync(const Model::RebootInstancesRequest& request, const RebootInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RebootInstancesOutcomeCallable RebootInstancesCallable(const Model::RebootInstancesRequest& request);

                /**
                 *This API is used to renew one or more Lighthouse cloud disks.

This operation can only be performed on data disks with the status of `ATTACHED`, `UNATTACHED` or `SHUTDOWN`.
Up to 50 cloud disks are supported at one time.
This API is async. After the request is sent, a `RequestId` is returned. At this time, the operation is not completed yet. To check the result, you need to call  [DescribeDisks](https://intl.cloud.tencent.com/document/product/1207/66093?from_cn_redirect=1). If the latest operation status (LatestOperationState) of the disk is `SUCCESS`, the operation is successful.
                 * @param req RenewDisksRequest
                 * @return RenewDisksOutcome
                 */
                RenewDisksOutcome RenewDisks(const Model::RenewDisksRequest &request);
                void RenewDisksAsync(const Model::RenewDisksRequest& request, const RenewDisksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RenewDisksOutcomeCallable RenewDisksCallable(const Model::RenewDisksRequest& request);

                /**
                 *This API is used to renew one or more Lighthouse instances.
* You can only perform this operation on instances whose status is `RUNNING`, `STOPPED` and `SHUTDOWN`.
* Batch operations are supported. Up to 100 instances are supported in each request.
* This API is async. After the request is sent successfully, a `RequestId` will be returned. At this time, the operation is not completed immediately. The result of the instance operation can be queried by calling the `DescribeInstances` API. If the latest operation status (LatestOperationState) of the instance is `SUCCESS`, the operation is successful.
                 * @param req RenewInstancesRequest
                 * @return RenewInstancesOutcome
                 */
                RenewInstancesOutcome RenewInstances(const Model::RenewInstancesRequest &request);
                void RenewInstancesAsync(const Model::RenewInstancesRequest& request, const RenewInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RenewInstancesOutcomeCallable RenewInstancesCallable(const Model::RenewInstancesRequest& request);

                /**
                 *This API is used to apply for association again after a CCN instance association application expires.
                 * @param req ResetAttachCcnRequest
                 * @return ResetAttachCcnOutcome
                 */
                ResetAttachCcnOutcome ResetAttachCcn(const Model::ResetAttachCcnRequest &request);
                void ResetAttachCcnAsync(const Model::ResetAttachCcnRequest& request, const ResetAttachCcnAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResetAttachCcnOutcomeCallable ResetAttachCcnCallable(const Model::ResetAttachCcnRequest& request);

                /**
                 *This API is used to reinstall the image on the specified instance.

* If you specify a `BlueprintId`, the specified image is used; otherwise, the image used by the current instance is used.
* The system disk will be formatted and reset. Therefore, make sure that no important files are stored on the system disk.
* Currently, this API does not support switching the operating system between `LINUX_UNIX` and `WINDOWS` for instances.
* This API is async. After the request is sent successfully, a `RequestId` will be returned. At this time, the operation is not completed immediately. The result of the instance operation can be queried by calling the `DescribeInstances` API. If the latest operation status (LatestOperationState) of the instance is `SUCCESS`, the operation is successful.
                 * @param req ResetInstanceRequest
                 * @return ResetInstanceOutcome
                 */
                ResetInstanceOutcome ResetInstance(const Model::ResetInstanceRequest &request);
                void ResetInstanceAsync(const Model::ResetInstanceRequest& request, const ResetInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResetInstanceOutcomeCallable ResetInstanceCallable(const Model::ResetInstanceRequest& request);

                /**
                 *This API is used to reset the password of the instance OS to a user-specified password.
* You can only use this API to modify the password of the admin account. The name of the admin account varies by OS (on Windows, it is `Administrator`; on Ubuntu, it is `ubuntu`; on other systems, it is `root`).
* Batch operations are supported. You can reset the passwords of multiple instances to the same one. The maximum number of instances in each request is 100.
* It’s recommended to shut down the instance first and then reset the password. If the instance is running, this API will try to shut it down normally. If the attempt fails, it will force to instance to shut down.
* This API is async. After the request is sent successfully, a `RequestId` will be returned. At this time, the operation is not completed immediately. The result of the instance operation can be queried by calling the `DescribeInstances` API. If the latest operation status (LatestOperationState) of the instance is `SUCCESS`, the operation is successful.
Note: Just like powering off a physical PC, a forced shutdown may cause data loss or the corruption of file system.
                 * @param req ResetInstancesPasswordRequest
                 * @return ResetInstancesPasswordOutcome
                 */
                ResetInstancesPasswordOutcome ResetInstancesPassword(const Model::ResetInstancesPasswordRequest &request);
                void ResetInstancesPasswordAsync(const Model::ResetInstancesPasswordRequest& request, const ResetInstancesPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResetInstancesPasswordOutcomeCallable ResetInstancesPasswordCallable(const Model::ResetInstancesPasswordRequest& request);

                /**
                 *This API is used to start one or more instances.

* You can only perform this operation on instances whose status is `STOPPED`.
* The instance status will become `STARTING` when the API is called successfully and will become `RUNNING` when the instance is successfully started.
* Batch operations are supported. The maximum number of instances in each request is 100.
* This API is async. After the request is sent successfully, a `RequestId` will be returned. At this time, the operation is not completed immediately. The result of the instance operation can be queried by calling the `DescribeInstances` API. If the latest operation status (LatestOperationState) of the instance is `SUCCESS`, the operation is successful.
                 * @param req StartInstancesRequest
                 * @return StartInstancesOutcome
                 */
                StartInstancesOutcome StartInstances(const Model::StartInstancesRequest &request);
                void StartInstancesAsync(const Model::StartInstancesRequest& request, const StartInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartInstancesOutcomeCallable StartInstancesCallable(const Model::StartInstancesRequest& request);

                /**
                 *This API is used to shut down one or more instances.
* You can only perform this operation on instances whose status is `RUNNING`.
* The instance status will become `STOPPING` when the API is called successfully and will become `STOPPED` when the instance is successfully shut down.
* Batch operations are supported. The maximum number of instances in each request is 100.
* This API is async. After the request is sent successfully, a `RequestId` will be returned. At this time, the operation is not completed immediately. The result of the instance operation can be queried by calling the `DescribeInstances` API. If the latest operation status (LatestOperationState) of the instance is `SUCCESS`, the operation is successful.
                 * @param req StopInstancesRequest
                 * @return StopInstancesOutcome
                 */
                StopInstancesOutcome StopInstances(const Model::StopInstancesRequest &request);
                void StopInstancesAsync(const Model::StopInstancesRequest& request, const StopInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopInstancesOutcomeCallable StopInstancesCallable(const Model::StopInstancesRequest& request);

                /**
                 *This API is used to terminate one or more cloud disk.
                 * @param req TerminateDisksRequest
                 * @return TerminateDisksOutcome
                 */
                TerminateDisksOutcome TerminateDisks(const Model::TerminateDisksRequest &request);
                void TerminateDisksAsync(const Model::TerminateDisksRequest& request, const TerminateDisksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TerminateDisksOutcomeCallable TerminateDisksCallable(const Model::TerminateDisksRequest& request);

                /**
                 *This API is used to terminate one or more instances.

* Instances in `SHUTDOWN` status can be terminated through this API and cannot be recovered.
* Batch operations are supported. The allowed maximum number of instances in each request is 100.
* This API is async. After the request is sent successfully, a `RequestId` will be returned. At this time, the operation is not completed immediately. The result of the instance operation can be queried by calling the `DescribeInstances` API. If the latest operation status (LatestOperationState) of the instance is `SUCCESS`, the operation is successful.
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

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_LIGHTHOUSECLIENT_H_
