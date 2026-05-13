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

#ifndef TENCENTCLOUD_CBS_V20170312_CBSCLIENT_H_
#define TENCENTCLOUD_CBS_V20170312_CBSCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/cbs/v20170312/model/ApplyDiskBackupRequest.h>
#include <tencentcloud/cbs/v20170312/model/ApplyDiskBackupResponse.h>
#include <tencentcloud/cbs/v20170312/model/ApplySnapshotRequest.h>
#include <tencentcloud/cbs/v20170312/model/ApplySnapshotResponse.h>
#include <tencentcloud/cbs/v20170312/model/ApplySnapshotGroupRequest.h>
#include <tencentcloud/cbs/v20170312/model/ApplySnapshotGroupResponse.h>
#include <tencentcloud/cbs/v20170312/model/AttachDisksRequest.h>
#include <tencentcloud/cbs/v20170312/model/AttachDisksResponse.h>
#include <tencentcloud/cbs/v20170312/model/BindAutoSnapshotPolicyRequest.h>
#include <tencentcloud/cbs/v20170312/model/BindAutoSnapshotPolicyResponse.h>
#include <tencentcloud/cbs/v20170312/model/CopySnapshotCrossRegionsRequest.h>
#include <tencentcloud/cbs/v20170312/model/CopySnapshotCrossRegionsResponse.h>
#include <tencentcloud/cbs/v20170312/model/CreateAutoSnapshotPolicyRequest.h>
#include <tencentcloud/cbs/v20170312/model/CreateAutoSnapshotPolicyResponse.h>
#include <tencentcloud/cbs/v20170312/model/CreateDiskBackupRequest.h>
#include <tencentcloud/cbs/v20170312/model/CreateDiskBackupResponse.h>
#include <tencentcloud/cbs/v20170312/model/CreateDisksRequest.h>
#include <tencentcloud/cbs/v20170312/model/CreateDisksResponse.h>
#include <tencentcloud/cbs/v20170312/model/CreateSnapshotRequest.h>
#include <tencentcloud/cbs/v20170312/model/CreateSnapshotResponse.h>
#include <tencentcloud/cbs/v20170312/model/CreateSnapshotGroupRequest.h>
#include <tencentcloud/cbs/v20170312/model/CreateSnapshotGroupResponse.h>
#include <tencentcloud/cbs/v20170312/model/DeleteAutoSnapshotPoliciesRequest.h>
#include <tencentcloud/cbs/v20170312/model/DeleteAutoSnapshotPoliciesResponse.h>
#include <tencentcloud/cbs/v20170312/model/DeleteDiskBackupsRequest.h>
#include <tencentcloud/cbs/v20170312/model/DeleteDiskBackupsResponse.h>
#include <tencentcloud/cbs/v20170312/model/DeleteSnapshotGroupRequest.h>
#include <tencentcloud/cbs/v20170312/model/DeleteSnapshotGroupResponse.h>
#include <tencentcloud/cbs/v20170312/model/DeleteSnapshotsRequest.h>
#include <tencentcloud/cbs/v20170312/model/DeleteSnapshotsResponse.h>
#include <tencentcloud/cbs/v20170312/model/DescribeAutoSnapshotPoliciesRequest.h>
#include <tencentcloud/cbs/v20170312/model/DescribeAutoSnapshotPoliciesResponse.h>
#include <tencentcloud/cbs/v20170312/model/DescribeDiskAssociatedAutoSnapshotPolicyRequest.h>
#include <tencentcloud/cbs/v20170312/model/DescribeDiskAssociatedAutoSnapshotPolicyResponse.h>
#include <tencentcloud/cbs/v20170312/model/DescribeDiskBackupsRequest.h>
#include <tencentcloud/cbs/v20170312/model/DescribeDiskBackupsResponse.h>
#include <tencentcloud/cbs/v20170312/model/DescribeDiskConfigQuotaRequest.h>
#include <tencentcloud/cbs/v20170312/model/DescribeDiskConfigQuotaResponse.h>
#include <tencentcloud/cbs/v20170312/model/DescribeDisksRequest.h>
#include <tencentcloud/cbs/v20170312/model/DescribeDisksResponse.h>
#include <tencentcloud/cbs/v20170312/model/DescribeInstancesDiskNumRequest.h>
#include <tencentcloud/cbs/v20170312/model/DescribeInstancesDiskNumResponse.h>
#include <tencentcloud/cbs/v20170312/model/DescribeSnapshotGroupsRequest.h>
#include <tencentcloud/cbs/v20170312/model/DescribeSnapshotGroupsResponse.h>
#include <tencentcloud/cbs/v20170312/model/DescribeSnapshotOverviewRequest.h>
#include <tencentcloud/cbs/v20170312/model/DescribeSnapshotOverviewResponse.h>
#include <tencentcloud/cbs/v20170312/model/DescribeSnapshotSharePermissionRequest.h>
#include <tencentcloud/cbs/v20170312/model/DescribeSnapshotSharePermissionResponse.h>
#include <tencentcloud/cbs/v20170312/model/DescribeSnapshotsRequest.h>
#include <tencentcloud/cbs/v20170312/model/DescribeSnapshotsResponse.h>
#include <tencentcloud/cbs/v20170312/model/DetachDisksRequest.h>
#include <tencentcloud/cbs/v20170312/model/DetachDisksResponse.h>
#include <tencentcloud/cbs/v20170312/model/GetSnapOverviewRequest.h>
#include <tencentcloud/cbs/v20170312/model/GetSnapOverviewResponse.h>
#include <tencentcloud/cbs/v20170312/model/InitializeDisksRequest.h>
#include <tencentcloud/cbs/v20170312/model/InitializeDisksResponse.h>
#include <tencentcloud/cbs/v20170312/model/InquirePriceModifyDiskBackupQuotaRequest.h>
#include <tencentcloud/cbs/v20170312/model/InquirePriceModifyDiskBackupQuotaResponse.h>
#include <tencentcloud/cbs/v20170312/model/InquirePriceModifyDiskExtraPerformanceRequest.h>
#include <tencentcloud/cbs/v20170312/model/InquirePriceModifyDiskExtraPerformanceResponse.h>
#include <tencentcloud/cbs/v20170312/model/InquiryPriceCreateDisksRequest.h>
#include <tencentcloud/cbs/v20170312/model/InquiryPriceCreateDisksResponse.h>
#include <tencentcloud/cbs/v20170312/model/InquiryPriceRenewDisksRequest.h>
#include <tencentcloud/cbs/v20170312/model/InquiryPriceRenewDisksResponse.h>
#include <tencentcloud/cbs/v20170312/model/InquiryPriceResizeDiskRequest.h>
#include <tencentcloud/cbs/v20170312/model/InquiryPriceResizeDiskResponse.h>
#include <tencentcloud/cbs/v20170312/model/ModifyAutoSnapshotPolicyAttributeRequest.h>
#include <tencentcloud/cbs/v20170312/model/ModifyAutoSnapshotPolicyAttributeResponse.h>
#include <tencentcloud/cbs/v20170312/model/ModifyDiskAttributesRequest.h>
#include <tencentcloud/cbs/v20170312/model/ModifyDiskAttributesResponse.h>
#include <tencentcloud/cbs/v20170312/model/ModifyDiskBackupQuotaRequest.h>
#include <tencentcloud/cbs/v20170312/model/ModifyDiskBackupQuotaResponse.h>
#include <tencentcloud/cbs/v20170312/model/ModifyDiskExtraPerformanceRequest.h>
#include <tencentcloud/cbs/v20170312/model/ModifyDiskExtraPerformanceResponse.h>
#include <tencentcloud/cbs/v20170312/model/ModifySnapshotAttributeRequest.h>
#include <tencentcloud/cbs/v20170312/model/ModifySnapshotAttributeResponse.h>
#include <tencentcloud/cbs/v20170312/model/ModifySnapshotsSharePermissionRequest.h>
#include <tencentcloud/cbs/v20170312/model/ModifySnapshotsSharePermissionResponse.h>
#include <tencentcloud/cbs/v20170312/model/RenewDiskRequest.h>
#include <tencentcloud/cbs/v20170312/model/RenewDiskResponse.h>
#include <tencentcloud/cbs/v20170312/model/ResizeDiskRequest.h>
#include <tencentcloud/cbs/v20170312/model/ResizeDiskResponse.h>
#include <tencentcloud/cbs/v20170312/model/TerminateDisksRequest.h>
#include <tencentcloud/cbs/v20170312/model/TerminateDisksResponse.h>
#include <tencentcloud/cbs/v20170312/model/UnbindAutoSnapshotPolicyRequest.h>
#include <tencentcloud/cbs/v20170312/model/UnbindAutoSnapshotPolicyResponse.h>


namespace TencentCloud
{
    namespace Cbs
    {
        namespace V20170312
        {
            class CbsClient : public AbstractClient
            {
            public:
                CbsClient(const Credential &credential, const std::string &region);
                CbsClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::ApplyDiskBackupResponse> ApplyDiskBackupOutcome;
                typedef std::future<ApplyDiskBackupOutcome> ApplyDiskBackupOutcomeCallable;
                typedef std::function<void(const CbsClient*, const Model::ApplyDiskBackupRequest&, ApplyDiskBackupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ApplyDiskBackupAsyncHandler;
                typedef Outcome<Core::Error, Model::ApplySnapshotResponse> ApplySnapshotOutcome;
                typedef std::future<ApplySnapshotOutcome> ApplySnapshotOutcomeCallable;
                typedef std::function<void(const CbsClient*, const Model::ApplySnapshotRequest&, ApplySnapshotOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ApplySnapshotAsyncHandler;
                typedef Outcome<Core::Error, Model::ApplySnapshotGroupResponse> ApplySnapshotGroupOutcome;
                typedef std::future<ApplySnapshotGroupOutcome> ApplySnapshotGroupOutcomeCallable;
                typedef std::function<void(const CbsClient*, const Model::ApplySnapshotGroupRequest&, ApplySnapshotGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ApplySnapshotGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::AttachDisksResponse> AttachDisksOutcome;
                typedef std::future<AttachDisksOutcome> AttachDisksOutcomeCallable;
                typedef std::function<void(const CbsClient*, const Model::AttachDisksRequest&, AttachDisksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AttachDisksAsyncHandler;
                typedef Outcome<Core::Error, Model::BindAutoSnapshotPolicyResponse> BindAutoSnapshotPolicyOutcome;
                typedef std::future<BindAutoSnapshotPolicyOutcome> BindAutoSnapshotPolicyOutcomeCallable;
                typedef std::function<void(const CbsClient*, const Model::BindAutoSnapshotPolicyRequest&, BindAutoSnapshotPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BindAutoSnapshotPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::CopySnapshotCrossRegionsResponse> CopySnapshotCrossRegionsOutcome;
                typedef std::future<CopySnapshotCrossRegionsOutcome> CopySnapshotCrossRegionsOutcomeCallable;
                typedef std::function<void(const CbsClient*, const Model::CopySnapshotCrossRegionsRequest&, CopySnapshotCrossRegionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CopySnapshotCrossRegionsAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAutoSnapshotPolicyResponse> CreateAutoSnapshotPolicyOutcome;
                typedef std::future<CreateAutoSnapshotPolicyOutcome> CreateAutoSnapshotPolicyOutcomeCallable;
                typedef std::function<void(const CbsClient*, const Model::CreateAutoSnapshotPolicyRequest&, CreateAutoSnapshotPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAutoSnapshotPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDiskBackupResponse> CreateDiskBackupOutcome;
                typedef std::future<CreateDiskBackupOutcome> CreateDiskBackupOutcomeCallable;
                typedef std::function<void(const CbsClient*, const Model::CreateDiskBackupRequest&, CreateDiskBackupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDiskBackupAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDisksResponse> CreateDisksOutcome;
                typedef std::future<CreateDisksOutcome> CreateDisksOutcomeCallable;
                typedef std::function<void(const CbsClient*, const Model::CreateDisksRequest&, CreateDisksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDisksAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSnapshotResponse> CreateSnapshotOutcome;
                typedef std::future<CreateSnapshotOutcome> CreateSnapshotOutcomeCallable;
                typedef std::function<void(const CbsClient*, const Model::CreateSnapshotRequest&, CreateSnapshotOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSnapshotAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSnapshotGroupResponse> CreateSnapshotGroupOutcome;
                typedef std::future<CreateSnapshotGroupOutcome> CreateSnapshotGroupOutcomeCallable;
                typedef std::function<void(const CbsClient*, const Model::CreateSnapshotGroupRequest&, CreateSnapshotGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSnapshotGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAutoSnapshotPoliciesResponse> DeleteAutoSnapshotPoliciesOutcome;
                typedef std::future<DeleteAutoSnapshotPoliciesOutcome> DeleteAutoSnapshotPoliciesOutcomeCallable;
                typedef std::function<void(const CbsClient*, const Model::DeleteAutoSnapshotPoliciesRequest&, DeleteAutoSnapshotPoliciesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAutoSnapshotPoliciesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDiskBackupsResponse> DeleteDiskBackupsOutcome;
                typedef std::future<DeleteDiskBackupsOutcome> DeleteDiskBackupsOutcomeCallable;
                typedef std::function<void(const CbsClient*, const Model::DeleteDiskBackupsRequest&, DeleteDiskBackupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDiskBackupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteSnapshotGroupResponse> DeleteSnapshotGroupOutcome;
                typedef std::future<DeleteSnapshotGroupOutcome> DeleteSnapshotGroupOutcomeCallable;
                typedef std::function<void(const CbsClient*, const Model::DeleteSnapshotGroupRequest&, DeleteSnapshotGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSnapshotGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteSnapshotsResponse> DeleteSnapshotsOutcome;
                typedef std::future<DeleteSnapshotsOutcome> DeleteSnapshotsOutcomeCallable;
                typedef std::function<void(const CbsClient*, const Model::DeleteSnapshotsRequest&, DeleteSnapshotsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSnapshotsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAutoSnapshotPoliciesResponse> DescribeAutoSnapshotPoliciesOutcome;
                typedef std::future<DescribeAutoSnapshotPoliciesOutcome> DescribeAutoSnapshotPoliciesOutcomeCallable;
                typedef std::function<void(const CbsClient*, const Model::DescribeAutoSnapshotPoliciesRequest&, DescribeAutoSnapshotPoliciesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAutoSnapshotPoliciesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDiskAssociatedAutoSnapshotPolicyResponse> DescribeDiskAssociatedAutoSnapshotPolicyOutcome;
                typedef std::future<DescribeDiskAssociatedAutoSnapshotPolicyOutcome> DescribeDiskAssociatedAutoSnapshotPolicyOutcomeCallable;
                typedef std::function<void(const CbsClient*, const Model::DescribeDiskAssociatedAutoSnapshotPolicyRequest&, DescribeDiskAssociatedAutoSnapshotPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDiskAssociatedAutoSnapshotPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDiskBackupsResponse> DescribeDiskBackupsOutcome;
                typedef std::future<DescribeDiskBackupsOutcome> DescribeDiskBackupsOutcomeCallable;
                typedef std::function<void(const CbsClient*, const Model::DescribeDiskBackupsRequest&, DescribeDiskBackupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDiskBackupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDiskConfigQuotaResponse> DescribeDiskConfigQuotaOutcome;
                typedef std::future<DescribeDiskConfigQuotaOutcome> DescribeDiskConfigQuotaOutcomeCallable;
                typedef std::function<void(const CbsClient*, const Model::DescribeDiskConfigQuotaRequest&, DescribeDiskConfigQuotaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDiskConfigQuotaAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDisksResponse> DescribeDisksOutcome;
                typedef std::future<DescribeDisksOutcome> DescribeDisksOutcomeCallable;
                typedef std::function<void(const CbsClient*, const Model::DescribeDisksRequest&, DescribeDisksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDisksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstancesDiskNumResponse> DescribeInstancesDiskNumOutcome;
                typedef std::future<DescribeInstancesDiskNumOutcome> DescribeInstancesDiskNumOutcomeCallable;
                typedef std::function<void(const CbsClient*, const Model::DescribeInstancesDiskNumRequest&, DescribeInstancesDiskNumOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstancesDiskNumAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSnapshotGroupsResponse> DescribeSnapshotGroupsOutcome;
                typedef std::future<DescribeSnapshotGroupsOutcome> DescribeSnapshotGroupsOutcomeCallable;
                typedef std::function<void(const CbsClient*, const Model::DescribeSnapshotGroupsRequest&, DescribeSnapshotGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSnapshotGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSnapshotOverviewResponse> DescribeSnapshotOverviewOutcome;
                typedef std::future<DescribeSnapshotOverviewOutcome> DescribeSnapshotOverviewOutcomeCallable;
                typedef std::function<void(const CbsClient*, const Model::DescribeSnapshotOverviewRequest&, DescribeSnapshotOverviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSnapshotOverviewAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSnapshotSharePermissionResponse> DescribeSnapshotSharePermissionOutcome;
                typedef std::future<DescribeSnapshotSharePermissionOutcome> DescribeSnapshotSharePermissionOutcomeCallable;
                typedef std::function<void(const CbsClient*, const Model::DescribeSnapshotSharePermissionRequest&, DescribeSnapshotSharePermissionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSnapshotSharePermissionAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSnapshotsResponse> DescribeSnapshotsOutcome;
                typedef std::future<DescribeSnapshotsOutcome> DescribeSnapshotsOutcomeCallable;
                typedef std::function<void(const CbsClient*, const Model::DescribeSnapshotsRequest&, DescribeSnapshotsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSnapshotsAsyncHandler;
                typedef Outcome<Core::Error, Model::DetachDisksResponse> DetachDisksOutcome;
                typedef std::future<DetachDisksOutcome> DetachDisksOutcomeCallable;
                typedef std::function<void(const CbsClient*, const Model::DetachDisksRequest&, DetachDisksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DetachDisksAsyncHandler;
                typedef Outcome<Core::Error, Model::GetSnapOverviewResponse> GetSnapOverviewOutcome;
                typedef std::future<GetSnapOverviewOutcome> GetSnapOverviewOutcomeCallable;
                typedef std::function<void(const CbsClient*, const Model::GetSnapOverviewRequest&, GetSnapOverviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetSnapOverviewAsyncHandler;
                typedef Outcome<Core::Error, Model::InitializeDisksResponse> InitializeDisksOutcome;
                typedef std::future<InitializeDisksOutcome> InitializeDisksOutcomeCallable;
                typedef std::function<void(const CbsClient*, const Model::InitializeDisksRequest&, InitializeDisksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InitializeDisksAsyncHandler;
                typedef Outcome<Core::Error, Model::InquirePriceModifyDiskBackupQuotaResponse> InquirePriceModifyDiskBackupQuotaOutcome;
                typedef std::future<InquirePriceModifyDiskBackupQuotaOutcome> InquirePriceModifyDiskBackupQuotaOutcomeCallable;
                typedef std::function<void(const CbsClient*, const Model::InquirePriceModifyDiskBackupQuotaRequest&, InquirePriceModifyDiskBackupQuotaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InquirePriceModifyDiskBackupQuotaAsyncHandler;
                typedef Outcome<Core::Error, Model::InquirePriceModifyDiskExtraPerformanceResponse> InquirePriceModifyDiskExtraPerformanceOutcome;
                typedef std::future<InquirePriceModifyDiskExtraPerformanceOutcome> InquirePriceModifyDiskExtraPerformanceOutcomeCallable;
                typedef std::function<void(const CbsClient*, const Model::InquirePriceModifyDiskExtraPerformanceRequest&, InquirePriceModifyDiskExtraPerformanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InquirePriceModifyDiskExtraPerformanceAsyncHandler;
                typedef Outcome<Core::Error, Model::InquiryPriceCreateDisksResponse> InquiryPriceCreateDisksOutcome;
                typedef std::future<InquiryPriceCreateDisksOutcome> InquiryPriceCreateDisksOutcomeCallable;
                typedef std::function<void(const CbsClient*, const Model::InquiryPriceCreateDisksRequest&, InquiryPriceCreateDisksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InquiryPriceCreateDisksAsyncHandler;
                typedef Outcome<Core::Error, Model::InquiryPriceRenewDisksResponse> InquiryPriceRenewDisksOutcome;
                typedef std::future<InquiryPriceRenewDisksOutcome> InquiryPriceRenewDisksOutcomeCallable;
                typedef std::function<void(const CbsClient*, const Model::InquiryPriceRenewDisksRequest&, InquiryPriceRenewDisksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InquiryPriceRenewDisksAsyncHandler;
                typedef Outcome<Core::Error, Model::InquiryPriceResizeDiskResponse> InquiryPriceResizeDiskOutcome;
                typedef std::future<InquiryPriceResizeDiskOutcome> InquiryPriceResizeDiskOutcomeCallable;
                typedef std::function<void(const CbsClient*, const Model::InquiryPriceResizeDiskRequest&, InquiryPriceResizeDiskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InquiryPriceResizeDiskAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAutoSnapshotPolicyAttributeResponse> ModifyAutoSnapshotPolicyAttributeOutcome;
                typedef std::future<ModifyAutoSnapshotPolicyAttributeOutcome> ModifyAutoSnapshotPolicyAttributeOutcomeCallable;
                typedef std::function<void(const CbsClient*, const Model::ModifyAutoSnapshotPolicyAttributeRequest&, ModifyAutoSnapshotPolicyAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAutoSnapshotPolicyAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDiskAttributesResponse> ModifyDiskAttributesOutcome;
                typedef std::future<ModifyDiskAttributesOutcome> ModifyDiskAttributesOutcomeCallable;
                typedef std::function<void(const CbsClient*, const Model::ModifyDiskAttributesRequest&, ModifyDiskAttributesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDiskAttributesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDiskBackupQuotaResponse> ModifyDiskBackupQuotaOutcome;
                typedef std::future<ModifyDiskBackupQuotaOutcome> ModifyDiskBackupQuotaOutcomeCallable;
                typedef std::function<void(const CbsClient*, const Model::ModifyDiskBackupQuotaRequest&, ModifyDiskBackupQuotaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDiskBackupQuotaAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDiskExtraPerformanceResponse> ModifyDiskExtraPerformanceOutcome;
                typedef std::future<ModifyDiskExtraPerformanceOutcome> ModifyDiskExtraPerformanceOutcomeCallable;
                typedef std::function<void(const CbsClient*, const Model::ModifyDiskExtraPerformanceRequest&, ModifyDiskExtraPerformanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDiskExtraPerformanceAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySnapshotAttributeResponse> ModifySnapshotAttributeOutcome;
                typedef std::future<ModifySnapshotAttributeOutcome> ModifySnapshotAttributeOutcomeCallable;
                typedef std::function<void(const CbsClient*, const Model::ModifySnapshotAttributeRequest&, ModifySnapshotAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySnapshotAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySnapshotsSharePermissionResponse> ModifySnapshotsSharePermissionOutcome;
                typedef std::future<ModifySnapshotsSharePermissionOutcome> ModifySnapshotsSharePermissionOutcomeCallable;
                typedef std::function<void(const CbsClient*, const Model::ModifySnapshotsSharePermissionRequest&, ModifySnapshotsSharePermissionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySnapshotsSharePermissionAsyncHandler;
                typedef Outcome<Core::Error, Model::RenewDiskResponse> RenewDiskOutcome;
                typedef std::future<RenewDiskOutcome> RenewDiskOutcomeCallable;
                typedef std::function<void(const CbsClient*, const Model::RenewDiskRequest&, RenewDiskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RenewDiskAsyncHandler;
                typedef Outcome<Core::Error, Model::ResizeDiskResponse> ResizeDiskOutcome;
                typedef std::future<ResizeDiskOutcome> ResizeDiskOutcomeCallable;
                typedef std::function<void(const CbsClient*, const Model::ResizeDiskRequest&, ResizeDiskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResizeDiskAsyncHandler;
                typedef Outcome<Core::Error, Model::TerminateDisksResponse> TerminateDisksOutcome;
                typedef std::future<TerminateDisksOutcome> TerminateDisksOutcomeCallable;
                typedef std::function<void(const CbsClient*, const Model::TerminateDisksRequest&, TerminateDisksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TerminateDisksAsyncHandler;
                typedef Outcome<Core::Error, Model::UnbindAutoSnapshotPolicyResponse> UnbindAutoSnapshotPolicyOutcome;
                typedef std::future<UnbindAutoSnapshotPolicyOutcome> UnbindAutoSnapshotPolicyOutcomeCallable;
                typedef std::function<void(const CbsClient*, const Model::UnbindAutoSnapshotPolicyRequest&, UnbindAutoSnapshotPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UnbindAutoSnapshotPolicyAsyncHandler;



                /**
                 *This API is used to roll back a backup to the original cloud disk.

This API only supports rolling back to the original cloud disk. For data disk backup points, if you need to copy backup point data to other CBS, use first [CreateSnapshot](https://www.tencentcloud.com/document/product/362/15648?from_cn_redirect=1) to convert the backup point to a snapshot, and use [CreateDisks](https://www.tencentcloud.com/document/product/362/16312?from_cn_redirect=1) to create a new elastic cloud disk, then copy snapshot data to the newly purchased cloud disk.
The backup point used for rollback must be in NORMAL status. The backup point status can be checked through the [DescribeDiskBackups](https://www.tencentcloud.com/document/product/362/80278?from_cn_redirect=1) API, see BackupState field explanation in the output parameter.
If it is an elastic cloud disk, the CBS must be in an unmounted state. The CBS mount status can be queried through the [DescribeDisks](https://www.tencentcloud.com/document/product/362/16315?from_cn_redirect=1) API. See Attached field explanation. If it is a non-elastic cloud hard disk purchased together with the instance, the instance must be in a powered off state. The instance status can be queried through the [DescribeInstancesStatus](https://www.tencentcloud.com/document/product/213/15738?from_cn_redirect=1) API.
                 * @param req ApplyDiskBackupRequest
                 * @return ApplyDiskBackupOutcome
                 */
                ApplyDiskBackupOutcome ApplyDiskBackup(const Model::ApplyDiskBackupRequest &request);
                void ApplyDiskBackupAsync(const Model::ApplyDiskBackupRequest& request, const ApplyDiskBackupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ApplyDiskBackupOutcomeCallable ApplyDiskBackupCallable(const Model::ApplyDiskBackupRequest& request);

                /**
                 *This API (ApplySnapshot) is used to roll back a snapshot to the original cloud disk.

* The snapshot can only be rolled back to the original cloud disk. For data disk snapshots, if you need to copy the snapshot data to other cloud disks, use the API [CreateDisks](https://intl.cloud.tencent.com/document/product/362/16312?from_cn_redirect=1) to create an elastic cloud disk and then copy the snapshot data to the created cloud disk. 
* The snapshot for rollback must be in NORMAL status. The snapshot status can be queried in the SnapshotState field in the output parameters through the API [DescribeSnapshots](https://intl.cloud.tencent.com/document/product/362/15647?from_cn_redirect=1).
* For elastic cloud disks, the cloud disk must be in UNMOUNTED status. The cloud disk status can be queried in the Attached field returned by the API [DescribeDisks](https://intl.cloud.tencent.com/document/product/362/16315?from_cn_redirect=1). For non-elastic cloud disks purchased together with instances, the instance must be in SHUTDOWN status. The instance status can be queried through the API [DescribeInstancesStatus](https://intl.cloud.tencent.com/document/product/213/15738?from_cn_redirect=1).
                 * @param req ApplySnapshotRequest
                 * @return ApplySnapshotOutcome
                 */
                ApplySnapshotOutcome ApplySnapshot(const Model::ApplySnapshotRequest &request);
                void ApplySnapshotAsync(const Model::ApplySnapshotRequest& request, const ApplySnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ApplySnapshotOutcomeCallable ApplySnapshotCallable(const Model::ApplySnapshotRequest& request);

                /**
                 *This API is used to rollback a snapshot group and restore the instance to the state at the moment the snapshot group was created.
This API is used to roll back all or part of the disks in the snapshot group.
This API is used to roll back disks. If the disks to be rolled back contain mounted disks, they must be mounted to the same instance, and the instance must be shut down before rollback.
Rollback is an asynchronous operation. A successful API return does not indicate a successful rollback. You can call DescribeSnapshotGroups to check the snapshot group status.
                 * @param req ApplySnapshotGroupRequest
                 * @return ApplySnapshotGroupOutcome
                 */
                ApplySnapshotGroupOutcome ApplySnapshotGroup(const Model::ApplySnapshotGroupRequest &request);
                void ApplySnapshotGroupAsync(const Model::ApplySnapshotGroupRequest& request, const ApplySnapshotGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ApplySnapshotGroupOutcomeCallable ApplySnapshotGroupCallable(const Model::ApplySnapshotGroupRequest& request);

                /**
                 *This API is used to mount one or more cloud disks.
 
* Batch operation is supported. You can mount multiple cloud disks to one CVM in a single request. If any of these cloud disks cannot be mounted, the operation fails and a specific error code returns.
* This is an async API. A successful request indicates that the mounting is initiated. You can call the [DescribeDisks](https://intl.cloud.tencent.com/document/product/362/16315?from_cn_redirect=1) API to query the status of cloud disks. If the status changes from `ATTACHING` to `ATTACHED`, the mounting is successful.
                 * @param req AttachDisksRequest
                 * @return AttachDisksOutcome
                 */
                AttachDisksOutcome AttachDisks(const Model::AttachDisksRequest &request);
                void AttachDisksAsync(const Model::AttachDisksRequest& request, const AttachDisksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AttachDisksOutcomeCallable AttachDisksCallable(const Model::AttachDisksRequest& request);

                /**
                 *This API (BindAutoSnapshotPolicy) is used to bind the cloud disk to the specified scheduled snapshot policy.

* For the scheduled snapshot policy limit of each region, see [Scheduled Snapshots](https://intl.cloud.tencent.com/document/product/362/8191?from_cn_redirect=1).
* When a cloud disk that is bound to a scheduled snapshot policy is in the unused state (that is, an elastic cloud disk has not been mounted or the server of an inelastic disk is powered off) scheduled snapshots are not created.
                 * @param req BindAutoSnapshotPolicyRequest
                 * @return BindAutoSnapshotPolicyOutcome
                 */
                BindAutoSnapshotPolicyOutcome BindAutoSnapshotPolicy(const Model::BindAutoSnapshotPolicyRequest &request);
                void BindAutoSnapshotPolicyAsync(const Model::BindAutoSnapshotPolicyRequest& request, const BindAutoSnapshotPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BindAutoSnapshotPolicyOutcomeCallable BindAutoSnapshotPolicyCallable(const Model::BindAutoSnapshotPolicyRequest& request);

                /**
                 *This API is used to replicate snapshots across regions.

This API is asynchronous. When the cross-region replication request is issued successfully, it returns a new snapshot ID. At this point, the snapshot is not immediately replicated to the target region. You can use the [DescribeSnapshots](https://www.tencentcloud.com/document/product/362/15647?from_cn_redirect=1) API for the query in the target region to check the snapshot status and determine whether the replication is complete. If the snapshot status is "NORMAL", it indicates snapshot replication is complete.
This API is used to perform snapshot cross-region replication, which will generate cross-region traffic. Commercial billing for this feature is expected in Q3 2025. Please check subsequent Message Center notices to avoid unexpected charges.
                 * @param req CopySnapshotCrossRegionsRequest
                 * @return CopySnapshotCrossRegionsOutcome
                 */
                CopySnapshotCrossRegionsOutcome CopySnapshotCrossRegions(const Model::CopySnapshotCrossRegionsRequest &request);
                void CopySnapshotCrossRegionsAsync(const Model::CopySnapshotCrossRegionsRequest& request, const CopySnapshotCrossRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CopySnapshotCrossRegionsOutcomeCallable CopySnapshotCrossRegionsCallable(const Model::CopySnapshotCrossRegionsRequest& request);

                /**
                 *This API (CreateAutoSnapshotPolicy) is used to create a scheduled snapshot policy.

* For the limits on the number of scheduled snapshot policies that can be created in each region, see [Scheduled Snapshots](https://intl.cloud.tencent.com/document/product/362/8191?from_cn_redirect=1).
* The quantity and capacity of the snapshots that can be created in each region are limited. For more information, see the **Snapshots** page on the Tencent Cloud Console. If the number of snapshots exceeds the quota, the creation of the scheduled snapshots will fail.
                 * @param req CreateAutoSnapshotPolicyRequest
                 * @return CreateAutoSnapshotPolicyOutcome
                 */
                CreateAutoSnapshotPolicyOutcome CreateAutoSnapshotPolicy(const Model::CreateAutoSnapshotPolicyRequest &request);
                void CreateAutoSnapshotPolicyAsync(const Model::CreateAutoSnapshotPolicyRequest& request, const CreateAutoSnapshotPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAutoSnapshotPolicyOutcomeCallable CreateAutoSnapshotPolicyCallable(const Model::CreateAutoSnapshotPolicyRequest& request);

                /**
                 *This API is used to create a backup point for a cloud disk.
                 * @param req CreateDiskBackupRequest
                 * @return CreateDiskBackupOutcome
                 */
                CreateDiskBackupOutcome CreateDiskBackup(const Model::CreateDiskBackupRequest &request);
                void CreateDiskBackupAsync(const Model::CreateDiskBackupRequest& request, const CreateDiskBackupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDiskBackupOutcomeCallable CreateDiskBackupCallable(const Model::CreateDiskBackupRequest& request);

                /**
                 *This API is used to create cloud disks.

* This API supports creating a cloud disk with a data disk snapshot so that the snapshot data can be copied to the purchased cloud disk.
* This API is async. A cloud disk ID list will be returned when a request is made successfully, but it does not mean that the creation has been completed. You can call the [DescribeDisks](https://intl.cloud.tencent.com/document/product/362/16315?from_cn_redirect=1) API to query cloud disks by `DiskId`. If a new cloud disk can be found and its status is `UNATTACHED` or `ATTACHED`, the cloud disk has been created successfully.
                 * @param req CreateDisksRequest
                 * @return CreateDisksOutcome
                 */
                CreateDisksOutcome CreateDisks(const Model::CreateDisksRequest &request);
                void CreateDisksAsync(const Model::CreateDisksRequest& request, const CreateDisksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDisksOutcomeCallable CreateDisksCallable(const Model::CreateDisksRequest& request);

                /**
                 *This API is used to create a snapshot for the specified cloud disk.

* You can only create snapshots for cloud disks with the snapshot capability. To check whether a cloud disk is snapshot-enabled, call the [DescribeDisks](https://intl.cloud.tencent.com/document/product/362/16315?from_cn_redirect=1) API and see the `SnapshotAbility` field in the response.
* For the maximum number of snapshots that can be created, see [Use Limits](https://intl.cloud.tencent.com/doc/product/362/5145?from_cn_redirect=1).
* Currently, you can convert backup points into general snapshots. After the conversion, snapshot usage fees may be charged, backup points will not be retained, and the occupied backup point quota will be released.
                 * @param req CreateSnapshotRequest
                 * @return CreateSnapshotOutcome
                 */
                CreateSnapshotOutcome CreateSnapshot(const Model::CreateSnapshotRequest &request);
                void CreateSnapshotAsync(const Model::CreateSnapshotRequest& request, const CreateSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSnapshotOutcomeCallable CreateSnapshotCallable(const Model::CreateSnapshotRequest& request);

                /**
                 *This API is used to create a snapshot group.
This API is used to create snapshot groups. The CBS list must be mounted on the same instance.
This API is used to create snapshot groups for all or some of the disks mounted to instance.
                 * @param req CreateSnapshotGroupRequest
                 * @return CreateSnapshotGroupOutcome
                 */
                CreateSnapshotGroupOutcome CreateSnapshotGroup(const Model::CreateSnapshotGroupRequest &request);
                void CreateSnapshotGroupAsync(const Model::CreateSnapshotGroupRequest& request, const CreateSnapshotGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSnapshotGroupOutcomeCallable CreateSnapshotGroupCallable(const Model::CreateSnapshotGroupRequest& request);

                /**
                 *This API (DeleteAutoSnapshotPolicies) is used to delete scheduled snapshot policies.

* Batch operations are supported. If one of the scheduled snapshot policies in a batch cannot be deleted, the operation is not performed and a specific error code is returned.
                 * @param req DeleteAutoSnapshotPoliciesRequest
                 * @return DeleteAutoSnapshotPoliciesOutcome
                 */
                DeleteAutoSnapshotPoliciesOutcome DeleteAutoSnapshotPolicies(const Model::DeleteAutoSnapshotPoliciesRequest &request);
                void DeleteAutoSnapshotPoliciesAsync(const Model::DeleteAutoSnapshotPoliciesRequest& request, const DeleteAutoSnapshotPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAutoSnapshotPoliciesOutcomeCallable DeleteAutoSnapshotPoliciesCallable(const Model::DeleteAutoSnapshotPoliciesRequest& request);

                /**
                 *This API is used to delete the backup points of the specified cloud disk in batches.
                 * @param req DeleteDiskBackupsRequest
                 * @return DeleteDiskBackupsOutcome
                 */
                DeleteDiskBackupsOutcome DeleteDiskBackups(const Model::DeleteDiskBackupsRequest &request);
                void DeleteDiskBackupsAsync(const Model::DeleteDiskBackupsRequest& request, const DeleteDiskBackupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDiskBackupsOutcomeCallable DeleteDiskBackupsCallable(const Model::DeleteDiskBackupsRequest& request);

                /**
                 *This API is used to delete snapshot groups. One snapshot group can be deleted per call.
This API is used to delete all snapshots in the snapshot group by default.
This API is used to delete a snapshot group. If a snapshot in the snapshot group has an associated image, deletion will fail and no snapshot will be deleted. Parameters can be input to enable simultaneous deletion of images bound to the snapshot by setting DeleteBindImages equal to true.
                 * @param req DeleteSnapshotGroupRequest
                 * @return DeleteSnapshotGroupOutcome
                 */
                DeleteSnapshotGroupOutcome DeleteSnapshotGroup(const Model::DeleteSnapshotGroupRequest &request);
                void DeleteSnapshotGroupAsync(const Model::DeleteSnapshotGroupRequest& request, const DeleteSnapshotGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSnapshotGroupOutcomeCallable DeleteSnapshotGroupCallable(const Model::DeleteSnapshotGroupRequest& request);

                /**
                 *This API is used to delete snapshots.

* Only snapshots in the `NORMAL` state can be deleted. To query the state of a snapshot, you can call the [DescribeSnapshots](https://intl.cloud.tencent.com/document/product/362/15647?from_cn_redirect=1) API and check the `SnapshotState` field in the response.
* Batch operations are supported. If there is any snapshot that cannot be deleted, the operation will not be performed and a specific error code will be returned.
                 * @param req DeleteSnapshotsRequest
                 * @return DeleteSnapshotsOutcome
                 */
                DeleteSnapshotsOutcome DeleteSnapshots(const Model::DeleteSnapshotsRequest &request);
                void DeleteSnapshotsAsync(const Model::DeleteSnapshotsRequest& request, const DeleteSnapshotsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSnapshotsOutcomeCallable DeleteSnapshotsCallable(const Model::DeleteSnapshotsRequest& request);

                /**
                 *This API is used to query scheduled snapshot policies.

* You can filter scheduled snapshot policies by ID, name, state, etc. The relationship between different filters is logical `AND`. For details on filters, see `Filter`.
* If no parameter is specified, a certain number of scheduled snapshot policies under the current account will be returned. The number is specified by `Limit` and is 20 by default.
                 * @param req DescribeAutoSnapshotPoliciesRequest
                 * @return DescribeAutoSnapshotPoliciesOutcome
                 */
                DescribeAutoSnapshotPoliciesOutcome DescribeAutoSnapshotPolicies(const Model::DescribeAutoSnapshotPoliciesRequest &request);
                void DescribeAutoSnapshotPoliciesAsync(const Model::DescribeAutoSnapshotPoliciesRequest& request, const DescribeAutoSnapshotPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAutoSnapshotPoliciesOutcomeCallable DescribeAutoSnapshotPoliciesCallable(const Model::DescribeAutoSnapshotPoliciesRequest& request);

                /**
                 *This API (DescribeDiskAssociatedAutoSnapshotPolicy) is used to query the scheduled snapshot policy bound to a cloud disk.
                 * @param req DescribeDiskAssociatedAutoSnapshotPolicyRequest
                 * @return DescribeDiskAssociatedAutoSnapshotPolicyOutcome
                 */
                DescribeDiskAssociatedAutoSnapshotPolicyOutcome DescribeDiskAssociatedAutoSnapshotPolicy(const Model::DescribeDiskAssociatedAutoSnapshotPolicyRequest &request);
                void DescribeDiskAssociatedAutoSnapshotPolicyAsync(const Model::DescribeDiskAssociatedAutoSnapshotPolicyRequest& request, const DescribeDiskAssociatedAutoSnapshotPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDiskAssociatedAutoSnapshotPolicyOutcomeCallable DescribeDiskAssociatedAutoSnapshotPolicyCallable(const Model::DescribeDiskAssociatedAutoSnapshotPolicyRequest& request);

                /**
                 *This API is used to query the details of backup points.

You can filter results by backup point ID. You can also look for certain backup points by specifying the ID or type of the cloud disk for which the backup points are created. The relationship between different filters is logical `AND`. For more information on filters, see `Filter`.
If the parameter is empty, a certain number (as specified by `Limit` and 20 by default) of backup points will be returned.
                 * @param req DescribeDiskBackupsRequest
                 * @return DescribeDiskBackupsOutcome
                 */
                DescribeDiskBackupsOutcome DescribeDiskBackups(const Model::DescribeDiskBackupsRequest &request);
                void DescribeDiskBackupsAsync(const Model::DescribeDiskBackupsRequest& request, const DescribeDiskBackupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDiskBackupsOutcomeCallable DescribeDiskBackupsCallable(const Model::DescribeDiskBackupsRequest& request);

                /**
                 *This API (DescribeDiskConfigQuota) is used to query the cloud disk quota.
                 * @param req DescribeDiskConfigQuotaRequest
                 * @return DescribeDiskConfigQuotaOutcome
                 */
                DescribeDiskConfigQuotaOutcome DescribeDiskConfigQuota(const Model::DescribeDiskConfigQuotaRequest &request);
                void DescribeDiskConfigQuotaAsync(const Model::DescribeDiskConfigQuotaRequest& request, const DescribeDiskConfigQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDiskConfigQuotaOutcomeCallable DescribeDiskConfigQuotaCallable(const Model::DescribeDiskConfigQuotaRequest& request);

                /**
                 *This API (DescribeDisks) is used to query the list of cloud disks.

* The details of the cloud disk can be queried based on the ID, type or status of the cloud disk. The relationship between different conditions is AND. For more information about filtering, please see the `Filter`.
* If the parameter is empty, a certain number (specified by `Limit`; the default is 20) of cloud disk lists are returned to the current user.
                 * @param req DescribeDisksRequest
                 * @return DescribeDisksOutcome
                 */
                DescribeDisksOutcome DescribeDisks(const Model::DescribeDisksRequest &request);
                void DescribeDisksAsync(const Model::DescribeDisksRequest& request, const DescribeDisksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDisksOutcomeCallable DescribeDisksCallable(const Model::DescribeDisksRequest& request);

                /**
                 *This API (DescribeInstancesDiskNum) is used to query the number of cloud disks mounted in the instance.

* Batch operations are supported. If multiple CVM instance IDs are specified, the returned results will list the number of cloud disks mounted on each CVM.
                 * @param req DescribeInstancesDiskNumRequest
                 * @return DescribeInstancesDiskNumOutcome
                 */
                DescribeInstancesDiskNumOutcome DescribeInstancesDiskNum(const Model::DescribeInstancesDiskNumRequest &request);
                void DescribeInstancesDiskNumAsync(const Model::DescribeInstancesDiskNumRequest& request, const DescribeInstancesDiskNumAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstancesDiskNumOutcomeCallable DescribeInstancesDiskNumCallable(const Model::DescribeInstancesDiskNumRequest& request);

                /**
                 *This API is used to query the snapshot group list.
This API is used to query the snapshot group list based on snapshot group ID, snapshot group status or snapshot ID associated with the snapshot group. The relationship among different criteria is AND. For detailed filtering information, see `Filter`.
If the parameter is empty, a certain number of the cloud disk list for the current user is returned (specified by `Limit`, defaults to 20).
                 * @param req DescribeSnapshotGroupsRequest
                 * @return DescribeSnapshotGroupsOutcome
                 */
                DescribeSnapshotGroupsOutcome DescribeSnapshotGroups(const Model::DescribeSnapshotGroupsRequest &request);
                void DescribeSnapshotGroupsAsync(const Model::DescribeSnapshotGroupsRequest& request, const DescribeSnapshotGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSnapshotGroupsOutcomeCallable DescribeSnapshotGroupsCallable(const Model::DescribeSnapshotGroupsRequest& request);

                /**
                 *This API is used to query the usage overview of user snapshots, including total snapshot capacity, cost capacity, etc.
                 * @param req DescribeSnapshotOverviewRequest
                 * @return DescribeSnapshotOverviewOutcome
                 */
                DescribeSnapshotOverviewOutcome DescribeSnapshotOverview(const Model::DescribeSnapshotOverviewRequest &request);
                void DescribeSnapshotOverviewAsync(const Model::DescribeSnapshotOverviewRequest& request, const DescribeSnapshotOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSnapshotOverviewOutcomeCallable DescribeSnapshotOverviewCallable(const Model::DescribeSnapshotOverviewRequest& request);

                /**
                 *This API is used to query the sharing information of snapshots.
                 * @param req DescribeSnapshotSharePermissionRequest
                 * @return DescribeSnapshotSharePermissionOutcome
                 */
                DescribeSnapshotSharePermissionOutcome DescribeSnapshotSharePermission(const Model::DescribeSnapshotSharePermissionRequest &request);
                void DescribeSnapshotSharePermissionAsync(const Model::DescribeSnapshotSharePermissionRequest& request, const DescribeSnapshotSharePermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSnapshotSharePermissionOutcomeCallable DescribeSnapshotSharePermissionCallable(const Model::DescribeSnapshotSharePermissionRequest& request);

                /**
                 *This API (DescribeSnapshots) is used to query the details of snapshots.

* Filter the results by the snapshot ID, the ID of cloud disk, for which the snapshot is created, and the type of cloud disk, for which the snapshot is created. The relationship between different conditions is AND. For more information about filtering, please see `Filter`.
* If the parameter is empty, a certain number (specified by `Limit`; the default is 20) of snapshot lists are returned to the current user.
                 * @param req DescribeSnapshotsRequest
                 * @return DescribeSnapshotsOutcome
                 */
                DescribeSnapshotsOutcome DescribeSnapshots(const Model::DescribeSnapshotsRequest &request);
                void DescribeSnapshotsAsync(const Model::DescribeSnapshotsRequest& request, const DescribeSnapshotsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSnapshotsOutcomeCallable DescribeSnapshotsCallable(const Model::DescribeSnapshotsRequest& request);

                /**
                 *This API is used to unmount one or more cloud disks.

* Batch operation is supported. You can unmount multiple cloud disks from the same CVM in a single request. If any of these cloud disks cannot be unmounted, the operation fails and a specific error code returns.
* This is an async API. A successful request does not mean that the cloud disks have been unmounted successfully. You can call the [DescribeDisks](https://intl.cloud.tencent.com/document/product/362/16315?from_cn_redirect=1) API to query the status of cloud disks. When the status changes from `ATTACHED` to `UNATTACHED`, the unmounting is successful.
                 * @param req DetachDisksRequest
                 * @return DetachDisksOutcome
                 */
                DetachDisksOutcome DetachDisks(const Model::DetachDisksRequest &request);
                void DetachDisksAsync(const Model::DetachDisksRequest& request, const DetachDisksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DetachDisksOutcomeCallable DetachDisksCallable(const Model::DetachDisksRequest& request);

                /**
                 *This API is used to standardize API naming. This API will be decommissioned and replaced by the new API named DescribeSnapshotOverview.

This API is used to obtain snapshot overview information.
                 * @param req GetSnapOverviewRequest
                 * @return GetSnapOverviewOutcome
                 */
                GetSnapOverviewOutcome GetSnapOverview(const Model::GetSnapOverviewRequest &request);
                void GetSnapOverviewAsync(const Model::GetSnapOverviewRequest& request, const GetSnapOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetSnapOverviewOutcomeCallable GetSnapOverviewCallable(const Model::GetSnapOverviewRequest& request);

                /**
                 *This API is used to reinitialize the cloud disks. Note the following when reinitializing the cloud disks:
1. For a cloud disk created from a snapshot, it is rolled back to the state of the snapshot;
2. For a cloud disk created from the scratch, all data are cleared. Please check and back up the necessary data before the reinitialization;
3. Currently, you can only re-initialize a cloud disk when it’s not attached to a resource and not shared by others;
4. For a cloud disk created from a snapshot, if the snapshot has been deleted, it cannot be reinitialized.
                 * @param req InitializeDisksRequest
                 * @return InitializeDisksOutcome
                 */
                InitializeDisksOutcome InitializeDisks(const Model::InitializeDisksRequest &request);
                void InitializeDisksAsync(const Model::InitializeDisksRequest& request, const InitializeDisksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InitializeDisksOutcomeCallable InitializeDisksCallable(const Model::InitializeDisksRequest& request);

                /**
                 *This API is used to query the price of a cloud disk after its backup point quota is modified.
                 * @param req InquirePriceModifyDiskBackupQuotaRequest
                 * @return InquirePriceModifyDiskBackupQuotaOutcome
                 */
                InquirePriceModifyDiskBackupQuotaOutcome InquirePriceModifyDiskBackupQuota(const Model::InquirePriceModifyDiskBackupQuotaRequest &request);
                void InquirePriceModifyDiskBackupQuotaAsync(const Model::InquirePriceModifyDiskBackupQuotaRequest& request, const InquirePriceModifyDiskBackupQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InquirePriceModifyDiskBackupQuotaOutcomeCallable InquirePriceModifyDiskBackupQuotaCallable(const Model::InquirePriceModifyDiskBackupQuotaRequest& request);

                /**
                 *This API is used to query the price for adjusting the cloud disk’s extra performance.
                 * @param req InquirePriceModifyDiskExtraPerformanceRequest
                 * @return InquirePriceModifyDiskExtraPerformanceOutcome
                 */
                InquirePriceModifyDiskExtraPerformanceOutcome InquirePriceModifyDiskExtraPerformance(const Model::InquirePriceModifyDiskExtraPerformanceRequest &request);
                void InquirePriceModifyDiskExtraPerformanceAsync(const Model::InquirePriceModifyDiskExtraPerformanceRequest& request, const InquirePriceModifyDiskExtraPerformanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InquirePriceModifyDiskExtraPerformanceOutcomeCallable InquirePriceModifyDiskExtraPerformanceCallable(const Model::InquirePriceModifyDiskExtraPerformanceRequest& request);

                /**
                 *This API is used to query the price of creating cloud disks.

* You can query the price of creating multiple cloud disks in a single request. In this case, the price returned will be the total price.
                 * @param req InquiryPriceCreateDisksRequest
                 * @return InquiryPriceCreateDisksOutcome
                 */
                InquiryPriceCreateDisksOutcome InquiryPriceCreateDisks(const Model::InquiryPriceCreateDisksRequest &request);
                void InquiryPriceCreateDisksAsync(const Model::InquiryPriceCreateDisksRequest& request, const InquiryPriceCreateDisksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InquiryPriceCreateDisksOutcomeCallable InquiryPriceCreateDisksCallable(const Model::InquiryPriceCreateDisksRequest& request);

                /**
                 *This API is used to query the renewal price of CBS.

This API is used to support renewal along with mounted instances. The parameter specifies CurInstanceDeadline in [DiskChargePrepaid](https://www.tencentcloud.com/document/product/362/15669?from_cn_redirect=1#DiskChargePrepaid), and renewal will be performed at the expiry date after the instance is renewed.
This API is used to support specifying different renewal durations for multiple cloud disks. The total price for renewing multiple cloud disks is returned.
                 * @param req InquiryPriceRenewDisksRequest
                 * @return InquiryPriceRenewDisksOutcome
                 */
                InquiryPriceRenewDisksOutcome InquiryPriceRenewDisks(const Model::InquiryPriceRenewDisksRequest &request);
                void InquiryPriceRenewDisksAsync(const Model::InquiryPriceRenewDisksRequest& request, const InquiryPriceRenewDisksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InquiryPriceRenewDisksOutcomeCallable InquiryPriceRenewDisksCallable(const Model::InquiryPriceRenewDisksRequest& request);

                /**
                 *This API is used to query the price for expanding cloud disks.
                 * @param req InquiryPriceResizeDiskRequest
                 * @return InquiryPriceResizeDiskOutcome
                 */
                InquiryPriceResizeDiskOutcome InquiryPriceResizeDisk(const Model::InquiryPriceResizeDiskRequest &request);
                void InquiryPriceResizeDiskAsync(const Model::InquiryPriceResizeDiskRequest& request, const InquiryPriceResizeDiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InquiryPriceResizeDiskOutcomeCallable InquiryPriceResizeDiskCallable(const Model::InquiryPriceResizeDiskRequest& request);

                /**
                 *This API (ModifyAutoSnapshotPolicyAttribute) is used to modify the attributes of an automatic snapshot policy.

* You can use this API to modify the attributes of a scheduled snapshot policy, including the execution policy, name, and activation.
* When modifying the number of days for retention, you must ensure that there is no clash with the permanent retention attribute. Otherwise, the entire operation will fail and a specific error code will be returned.
                 * @param req ModifyAutoSnapshotPolicyAttributeRequest
                 * @return ModifyAutoSnapshotPolicyAttributeOutcome
                 */
                ModifyAutoSnapshotPolicyAttributeOutcome ModifyAutoSnapshotPolicyAttribute(const Model::ModifyAutoSnapshotPolicyAttributeRequest &request);
                void ModifyAutoSnapshotPolicyAttributeAsync(const Model::ModifyAutoSnapshotPolicyAttributeRequest& request, const ModifyAutoSnapshotPolicyAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAutoSnapshotPolicyAttributeOutcomeCallable ModifyAutoSnapshotPolicyAttributeCallable(const Model::ModifyAutoSnapshotPolicyAttributeRequest& request);

                /**
                 *This API is used to modify only the Project ID of elastic cloud disks. The Project ID of a cloud disk created with a host is linked to the host. Whether a cloud disk is elastic can be checked through the [DescribeDisks](https://www.tencentcloud.com/document/product/362/16315?from_cn_redirect=1) API. See the Portable field explanation in the output parameters.
The "cloud disk name" is only for ease of management for users. Tencent Cloud does not use this name as a basis for submitting tickets or performing cloud disk management operations.
This API is used to support batch operations. If multiple cloud disk IDs are passed in, modify cloud disks to the same attribute. If there is a cloud disk that does not allow operation, the operation will not be executed and return a specific error code.
                 * @param req ModifyDiskAttributesRequest
                 * @return ModifyDiskAttributesOutcome
                 */
                ModifyDiskAttributesOutcome ModifyDiskAttributes(const Model::ModifyDiskAttributesRequest &request);
                void ModifyDiskAttributesAsync(const Model::ModifyDiskAttributesRequest& request, const ModifyDiskAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDiskAttributesOutcomeCallable ModifyDiskAttributesCallable(const Model::ModifyDiskAttributesRequest& request);

                /**
                 *This API is used to modify the cloud disk backup point quota.
                 * @param req ModifyDiskBackupQuotaRequest
                 * @return ModifyDiskBackupQuotaOutcome
                 */
                ModifyDiskBackupQuotaOutcome ModifyDiskBackupQuota(const Model::ModifyDiskBackupQuotaRequest &request);
                void ModifyDiskBackupQuotaAsync(const Model::ModifyDiskBackupQuotaRequest& request, const ModifyDiskBackupQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDiskBackupQuotaOutcomeCallable ModifyDiskBackupQuotaCallable(const Model::ModifyDiskBackupQuotaRequest& request);

                /**
                 *This API is used to adjust extra performance for Enhanced SSD (CLOUD_HSSD) and ulTra SSD. 

*This API only supports adjust extra performance for Enhanced SSD and ulTra SSD. 
                 * @param req ModifyDiskExtraPerformanceRequest
                 * @return ModifyDiskExtraPerformanceOutcome
                 */
                ModifyDiskExtraPerformanceOutcome ModifyDiskExtraPerformance(const Model::ModifyDiskExtraPerformanceRequest &request);
                void ModifyDiskExtraPerformanceAsync(const Model::ModifyDiskExtraPerformanceRequest& request, const ModifyDiskExtraPerformanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDiskExtraPerformanceOutcomeCallable ModifyDiskExtraPerformanceCallable(const Model::ModifyDiskExtraPerformanceRequest& request);

                /**
                 *This API is used to modify the attributes of a specified snapshot.

This API supports modifying snapshot name and expiration time, as well as changing a non-permanent snapshot to a permanent one.
The "snapshot name" is only for making user management convenient. Tencent Cloud does not use this name as a basis for submitting tickets or managing snapshot operations.
                 * @param req ModifySnapshotAttributeRequest
                 * @return ModifySnapshotAttributeOutcome
                 */
                ModifySnapshotAttributeOutcome ModifySnapshotAttribute(const Model::ModifySnapshotAttributeRequest &request);
                void ModifySnapshotAttributeAsync(const Model::ModifySnapshotAttributeRequest& request, const ModifySnapshotAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySnapshotAttributeOutcomeCallable ModifySnapshotAttributeCallable(const Model::ModifySnapshotAttributeRequest& request);

                /**
                 *This API is used to modify snapshot sharing information.

After snapshots are shared, the accounts they are shared to can use the snapshot to create cloud disks.
* Each snapshot can be shared to at most 50 accounts.
* You can use a shared snapshot to create cloud disks, but you cannot change its name or description.
* Snapshots can only be shared with accounts in the same region.
* Only data disk snapshots can be shared.
                 * @param req ModifySnapshotsSharePermissionRequest
                 * @return ModifySnapshotsSharePermissionOutcome
                 */
                ModifySnapshotsSharePermissionOutcome ModifySnapshotsSharePermission(const Model::ModifySnapshotsSharePermissionRequest &request);
                void ModifySnapshotsSharePermissionAsync(const Model::ModifySnapshotsSharePermissionRequest& request, const ModifySnapshotsSharePermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySnapshotsSharePermissionOutcomeCallable ModifySnapshotsSharePermissionCallable(const Model::ModifySnapshotsSharePermissionRequest& request);

                /**
                 *This API is used to renew cloud disks.

This API is used to support renewal along with mounted instances. The parameter specifies CurInstanceDeadline in [DiskChargePrepaid](https://www.tencentcloud.com/document/product/362/15669?from_cn_redirect=1#DiskChargePrepaid), and renewal will be at the expiry date after the instance is renewed.
                 * @param req RenewDiskRequest
                 * @return RenewDiskOutcome
                 */
                RenewDiskOutcome RenewDisk(const Model::RenewDiskRequest &request);
                void RenewDiskAsync(const Model::RenewDiskRequest& request, const RenewDiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RenewDiskOutcomeCallable RenewDiskCallable(const Model::RenewDiskRequest& request);

                /**
                 *This API is used to expand cloud disks. 

*This API supports only the expansion of elastic cloud disks. To query the type of a cloud disk, you can call the [DescribeDisks](https://intl.cloud.tencent.comhttps://intl.cloud.tencent.com/document/product/362/16315?from_cn_redirect=1?from_cn_redirect=1) API and check the `Portable` field in the response. To expand non-elastic cloud disks, you can call the [ResizeInstanceDisks](https://intl.cloud.tencent.com/document/product/213/15731?from_cn_redirect=1) API. *This is an async API. A successful return of this API does not mean that the cloud disk has been expanded successfully. You can call the [DescribeDisks](https://intl.cloud.tencent.comhttps://intl.cloud.tencent.com/document/product/362/16315?from_cn_redirect=1?from_cn_redirect=1) API to query the status of a cloud disk. `EXPANDING` indicates that the expansion is in process.
                 * @param req ResizeDiskRequest
                 * @return ResizeDiskOutcome
                 */
                ResizeDiskOutcome ResizeDisk(const Model::ResizeDiskRequest &request);
                void ResizeDiskAsync(const Model::ResizeDiskRequest& request, const ResizeDiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResizeDiskOutcomeCallable ResizeDiskCallable(const Model::ResizeDiskRequest& request);

                /**
                 *This API is used to return cloud disks.

* You can use this API to return cloud disks you no longer need.
* This API can be used to return pay-as-you-go cloud disks billed on hourly basis. 
* Batch operations are supported. The maximum number of cloud disks in each request is 50. If there is any specified cloud disk that cannot be returned, an error code will be returned.
                 * @param req TerminateDisksRequest
                 * @return TerminateDisksOutcome
                 */
                TerminateDisksOutcome TerminateDisks(const Model::TerminateDisksRequest &request);
                void TerminateDisksAsync(const Model::TerminateDisksRequest& request, const TerminateDisksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TerminateDisksOutcomeCallable TerminateDisksCallable(const Model::TerminateDisksRequest& request);

                /**
                 *This API (UnbindAutoSnapshotPolicy) is used to unbind the cloud disk from the specified scheduled snapshot policy.

* Batch operations are supported. Multiple cloud disks can be unbound from a snapshot policy at one time. 
* If the passed-in cloud disks are not bound to the current scheduled snapshot policy, they will be skipped. Only cloud disks that are bound to the current scheduled snapshot policy are processed.
                 * @param req UnbindAutoSnapshotPolicyRequest
                 * @return UnbindAutoSnapshotPolicyOutcome
                 */
                UnbindAutoSnapshotPolicyOutcome UnbindAutoSnapshotPolicy(const Model::UnbindAutoSnapshotPolicyRequest &request);
                void UnbindAutoSnapshotPolicyAsync(const Model::UnbindAutoSnapshotPolicyRequest& request, const UnbindAutoSnapshotPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UnbindAutoSnapshotPolicyOutcomeCallable UnbindAutoSnapshotPolicyCallable(const Model::UnbindAutoSnapshotPolicyRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_CBSCLIENT_H_
