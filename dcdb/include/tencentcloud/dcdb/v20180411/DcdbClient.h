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

#ifndef TENCENTCLOUD_DCDB_V20180411_DCDBCLIENT_H_
#define TENCENTCLOUD_DCDB_V20180411_DCDBCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/dcdb/v20180411/model/AssociateSecurityGroupsRequest.h>
#include <tencentcloud/dcdb/v20180411/model/AssociateSecurityGroupsResponse.h>
#include <tencentcloud/dcdb/v20180411/model/CancelDcnJobRequest.h>
#include <tencentcloud/dcdb/v20180411/model/CancelDcnJobResponse.h>
#include <tencentcloud/dcdb/v20180411/model/CloseDBExtranetAccessRequest.h>
#include <tencentcloud/dcdb/v20180411/model/CloseDBExtranetAccessResponse.h>
#include <tencentcloud/dcdb/v20180411/model/CopyAccountPrivilegesRequest.h>
#include <tencentcloud/dcdb/v20180411/model/CopyAccountPrivilegesResponse.h>
#include <tencentcloud/dcdb/v20180411/model/CreateAccountRequest.h>
#include <tencentcloud/dcdb/v20180411/model/CreateAccountResponse.h>
#include <tencentcloud/dcdb/v20180411/model/CreateHourDCDBInstanceRequest.h>
#include <tencentcloud/dcdb/v20180411/model/CreateHourDCDBInstanceResponse.h>
#include <tencentcloud/dcdb/v20180411/model/DeleteAccountRequest.h>
#include <tencentcloud/dcdb/v20180411/model/DeleteAccountResponse.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeDBLogFilesRequest.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeDBLogFilesResponse.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeDBSecurityGroupsRequest.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeDBSecurityGroupsResponse.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeDBSyncModeRequest.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeDBSyncModeResponse.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeDCDBInstanceNodeInfoRequest.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeDCDBInstanceNodeInfoResponse.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeDCDBInstancesRequest.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeDCDBInstancesResponse.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeDcnDetailRequest.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeDcnDetailResponse.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeFileDownloadUrlRequest.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeFileDownloadUrlResponse.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeFlowRequest.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeFlowResponse.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeProjectSecurityGroupsRequest.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeProjectSecurityGroupsResponse.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeProjectsRequest.h>
#include <tencentcloud/dcdb/v20180411/model/DescribeProjectsResponse.h>
#include <tencentcloud/dcdb/v20180411/model/DestroyDCDBInstanceRequest.h>
#include <tencentcloud/dcdb/v20180411/model/DestroyDCDBInstanceResponse.h>
#include <tencentcloud/dcdb/v20180411/model/DestroyHourDCDBInstanceRequest.h>
#include <tencentcloud/dcdb/v20180411/model/DestroyHourDCDBInstanceResponse.h>
#include <tencentcloud/dcdb/v20180411/model/DisassociateSecurityGroupsRequest.h>
#include <tencentcloud/dcdb/v20180411/model/DisassociateSecurityGroupsResponse.h>
#include <tencentcloud/dcdb/v20180411/model/GrantAccountPrivilegesRequest.h>
#include <tencentcloud/dcdb/v20180411/model/GrantAccountPrivilegesResponse.h>
#include <tencentcloud/dcdb/v20180411/model/ModifyAccountDescriptionRequest.h>
#include <tencentcloud/dcdb/v20180411/model/ModifyAccountDescriptionResponse.h>
#include <tencentcloud/dcdb/v20180411/model/ModifyDBInstanceSecurityGroupsRequest.h>
#include <tencentcloud/dcdb/v20180411/model/ModifyDBInstanceSecurityGroupsResponse.h>
#include <tencentcloud/dcdb/v20180411/model/ModifyDBInstancesProjectRequest.h>
#include <tencentcloud/dcdb/v20180411/model/ModifyDBInstancesProjectResponse.h>
#include <tencentcloud/dcdb/v20180411/model/ResetAccountPasswordRequest.h>
#include <tencentcloud/dcdb/v20180411/model/ResetAccountPasswordResponse.h>
#include <tencentcloud/dcdb/v20180411/model/SwitchDBInstanceHARequest.h>
#include <tencentcloud/dcdb/v20180411/model/SwitchDBInstanceHAResponse.h>


namespace TencentCloud
{
    namespace Dcdb
    {
        namespace V20180411
        {
            class DcdbClient : public AbstractClient
            {
            public:
                DcdbClient(const Credential &credential, const std::string &region);
                DcdbClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::AssociateSecurityGroupsResponse> AssociateSecurityGroupsOutcome;
                typedef std::future<AssociateSecurityGroupsOutcome> AssociateSecurityGroupsOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::AssociateSecurityGroupsRequest&, AssociateSecurityGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AssociateSecurityGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::CancelDcnJobResponse> CancelDcnJobOutcome;
                typedef std::future<CancelDcnJobOutcome> CancelDcnJobOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::CancelDcnJobRequest&, CancelDcnJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CancelDcnJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CloseDBExtranetAccessResponse> CloseDBExtranetAccessOutcome;
                typedef std::future<CloseDBExtranetAccessOutcome> CloseDBExtranetAccessOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::CloseDBExtranetAccessRequest&, CloseDBExtranetAccessOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CloseDBExtranetAccessAsyncHandler;
                typedef Outcome<Core::Error, Model::CopyAccountPrivilegesResponse> CopyAccountPrivilegesOutcome;
                typedef std::future<CopyAccountPrivilegesOutcome> CopyAccountPrivilegesOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::CopyAccountPrivilegesRequest&, CopyAccountPrivilegesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CopyAccountPrivilegesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAccountResponse> CreateAccountOutcome;
                typedef std::future<CreateAccountOutcome> CreateAccountOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::CreateAccountRequest&, CreateAccountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAccountAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateHourDCDBInstanceResponse> CreateHourDCDBInstanceOutcome;
                typedef std::future<CreateHourDCDBInstanceOutcome> CreateHourDCDBInstanceOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::CreateHourDCDBInstanceRequest&, CreateHourDCDBInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateHourDCDBInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAccountResponse> DeleteAccountOutcome;
                typedef std::future<DeleteAccountOutcome> DeleteAccountOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::DeleteAccountRequest&, DeleteAccountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAccountAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBLogFilesResponse> DescribeDBLogFilesOutcome;
                typedef std::future<DescribeDBLogFilesOutcome> DescribeDBLogFilesOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::DescribeDBLogFilesRequest&, DescribeDBLogFilesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBLogFilesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBSecurityGroupsResponse> DescribeDBSecurityGroupsOutcome;
                typedef std::future<DescribeDBSecurityGroupsOutcome> DescribeDBSecurityGroupsOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::DescribeDBSecurityGroupsRequest&, DescribeDBSecurityGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBSecurityGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBSyncModeResponse> DescribeDBSyncModeOutcome;
                typedef std::future<DescribeDBSyncModeOutcome> DescribeDBSyncModeOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::DescribeDBSyncModeRequest&, DescribeDBSyncModeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBSyncModeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDCDBInstanceNodeInfoResponse> DescribeDCDBInstanceNodeInfoOutcome;
                typedef std::future<DescribeDCDBInstanceNodeInfoOutcome> DescribeDCDBInstanceNodeInfoOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::DescribeDCDBInstanceNodeInfoRequest&, DescribeDCDBInstanceNodeInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDCDBInstanceNodeInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDCDBInstancesResponse> DescribeDCDBInstancesOutcome;
                typedef std::future<DescribeDCDBInstancesOutcome> DescribeDCDBInstancesOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::DescribeDCDBInstancesRequest&, DescribeDCDBInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDCDBInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDcnDetailResponse> DescribeDcnDetailOutcome;
                typedef std::future<DescribeDcnDetailOutcome> DescribeDcnDetailOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::DescribeDcnDetailRequest&, DescribeDcnDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDcnDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFileDownloadUrlResponse> DescribeFileDownloadUrlOutcome;
                typedef std::future<DescribeFileDownloadUrlOutcome> DescribeFileDownloadUrlOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::DescribeFileDownloadUrlRequest&, DescribeFileDownloadUrlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFileDownloadUrlAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFlowResponse> DescribeFlowOutcome;
                typedef std::future<DescribeFlowOutcome> DescribeFlowOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::DescribeFlowRequest&, DescribeFlowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFlowAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProjectSecurityGroupsResponse> DescribeProjectSecurityGroupsOutcome;
                typedef std::future<DescribeProjectSecurityGroupsOutcome> DescribeProjectSecurityGroupsOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::DescribeProjectSecurityGroupsRequest&, DescribeProjectSecurityGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProjectSecurityGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProjectsResponse> DescribeProjectsOutcome;
                typedef std::future<DescribeProjectsOutcome> DescribeProjectsOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::DescribeProjectsRequest&, DescribeProjectsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProjectsAsyncHandler;
                typedef Outcome<Core::Error, Model::DestroyDCDBInstanceResponse> DestroyDCDBInstanceOutcome;
                typedef std::future<DestroyDCDBInstanceOutcome> DestroyDCDBInstanceOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::DestroyDCDBInstanceRequest&, DestroyDCDBInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DestroyDCDBInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::DestroyHourDCDBInstanceResponse> DestroyHourDCDBInstanceOutcome;
                typedef std::future<DestroyHourDCDBInstanceOutcome> DestroyHourDCDBInstanceOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::DestroyHourDCDBInstanceRequest&, DestroyHourDCDBInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DestroyHourDCDBInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::DisassociateSecurityGroupsResponse> DisassociateSecurityGroupsOutcome;
                typedef std::future<DisassociateSecurityGroupsOutcome> DisassociateSecurityGroupsOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::DisassociateSecurityGroupsRequest&, DisassociateSecurityGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisassociateSecurityGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::GrantAccountPrivilegesResponse> GrantAccountPrivilegesOutcome;
                typedef std::future<GrantAccountPrivilegesOutcome> GrantAccountPrivilegesOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::GrantAccountPrivilegesRequest&, GrantAccountPrivilegesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GrantAccountPrivilegesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAccountDescriptionResponse> ModifyAccountDescriptionOutcome;
                typedef std::future<ModifyAccountDescriptionOutcome> ModifyAccountDescriptionOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::ModifyAccountDescriptionRequest&, ModifyAccountDescriptionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAccountDescriptionAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDBInstanceSecurityGroupsResponse> ModifyDBInstanceSecurityGroupsOutcome;
                typedef std::future<ModifyDBInstanceSecurityGroupsOutcome> ModifyDBInstanceSecurityGroupsOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::ModifyDBInstanceSecurityGroupsRequest&, ModifyDBInstanceSecurityGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceSecurityGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDBInstancesProjectResponse> ModifyDBInstancesProjectOutcome;
                typedef std::future<ModifyDBInstancesProjectOutcome> ModifyDBInstancesProjectOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::ModifyDBInstancesProjectRequest&, ModifyDBInstancesProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstancesProjectAsyncHandler;
                typedef Outcome<Core::Error, Model::ResetAccountPasswordResponse> ResetAccountPasswordOutcome;
                typedef std::future<ResetAccountPasswordOutcome> ResetAccountPasswordOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::ResetAccountPasswordRequest&, ResetAccountPasswordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResetAccountPasswordAsyncHandler;
                typedef Outcome<Core::Error, Model::SwitchDBInstanceHAResponse> SwitchDBInstanceHAOutcome;
                typedef std::future<SwitchDBInstanceHAOutcome> SwitchDBInstanceHAOutcomeCallable;
                typedef std::function<void(const DcdbClient*, const Model::SwitchDBInstanceHARequest&, SwitchDBInstanceHAOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SwitchDBInstanceHAAsyncHandler;



                /**
                 *This API is used to associate security groups with Tencent Cloud resources in batches.
                 * @param req AssociateSecurityGroupsRequest
                 * @return AssociateSecurityGroupsOutcome
                 */
                AssociateSecurityGroupsOutcome AssociateSecurityGroups(const Model::AssociateSecurityGroupsRequest &request);
                void AssociateSecurityGroupsAsync(const Model::AssociateSecurityGroupsRequest& request, const AssociateSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AssociateSecurityGroupsOutcomeCallable AssociateSecurityGroupsCallable(const Model::AssociateSecurityGroupsRequest& request);

                /**
                 *This API is used to cancel DCN synchronization.
                 * @param req CancelDcnJobRequest
                 * @return CancelDcnJobOutcome
                 */
                CancelDcnJobOutcome CancelDcnJob(const Model::CancelDcnJobRequest &request);
                void CancelDcnJobAsync(const Model::CancelDcnJobRequest& request, const CancelDcnJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CancelDcnJobOutcomeCallable CancelDcnJobCallable(const Model::CancelDcnJobRequest& request);

                /**
                 *This API is used to disable public network access for a TencentDB instance, which will make the public IP address inaccessible. The `DescribeDCDBInstances` API will not return the public domain name and port information of the corresponding instance.
                 * @param req CloseDBExtranetAccessRequest
                 * @return CloseDBExtranetAccessOutcome
                 */
                CloseDBExtranetAccessOutcome CloseDBExtranetAccess(const Model::CloseDBExtranetAccessRequest &request);
                void CloseDBExtranetAccessAsync(const Model::CloseDBExtranetAccessRequest& request, const CloseDBExtranetAccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CloseDBExtranetAccessOutcomeCallable CloseDBExtranetAccessCallable(const Model::CloseDBExtranetAccessRequest& request);

                /**
                 *This API is used to copy the permissions of a TencentDB account.
Note: Accounts with the same username but different hosts are different accounts. Permissions can only be copied between accounts with the same `Readonly` attribute.
                 * @param req CopyAccountPrivilegesRequest
                 * @return CopyAccountPrivilegesOutcome
                 */
                CopyAccountPrivilegesOutcome CopyAccountPrivileges(const Model::CopyAccountPrivilegesRequest &request);
                void CopyAccountPrivilegesAsync(const Model::CopyAccountPrivilegesRequest& request, const CopyAccountPrivilegesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CopyAccountPrivilegesOutcomeCallable CopyAccountPrivilegesCallable(const Model::CopyAccountPrivilegesRequest& request);

                /**
                 *This API is used to create a TencentDB account. Multiple accounts can be created for one instance. Accounts with the same username but different hosts are different accounts.
                 * @param req CreateAccountRequest
                 * @return CreateAccountOutcome
                 */
                CreateAccountOutcome CreateAccount(const Model::CreateAccountRequest &request);
                void CreateAccountAsync(const Model::CreateAccountRequest& request, const CreateAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAccountOutcomeCallable CreateAccountCallable(const Model::CreateAccountRequest& request);

                /**
                 *This API is used to create pay-as-you-go TDSQL for MySQL instances.
                 * @param req CreateHourDCDBInstanceRequest
                 * @return CreateHourDCDBInstanceOutcome
                 */
                CreateHourDCDBInstanceOutcome CreateHourDCDBInstance(const Model::CreateHourDCDBInstanceRequest &request);
                void CreateHourDCDBInstanceAsync(const Model::CreateHourDCDBInstanceRequest& request, const CreateHourDCDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateHourDCDBInstanceOutcomeCallable CreateHourDCDBInstanceCallable(const Model::CreateHourDCDBInstanceRequest& request);

                /**
                 *This API is used to delete a TencentDB account, which is uniquely identified by username and host.
                 * @param req DeleteAccountRequest
                 * @return DeleteAccountOutcome
                 */
                DeleteAccountOutcome DeleteAccount(const Model::DeleteAccountRequest &request);
                void DeleteAccountAsync(const Model::DeleteAccountRequest& request, const DeleteAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAccountOutcomeCallable DeleteAccountCallable(const Model::DeleteAccountRequest& request);

                /**
                 *This API is used to get the list of various logs of a database, including cold backups, binlogs, errlogs, and slowlogs.
                 * @param req DescribeDBLogFilesRequest
                 * @return DescribeDBLogFilesOutcome
                 */
                DescribeDBLogFilesOutcome DescribeDBLogFiles(const Model::DescribeDBLogFilesRequest &request);
                void DescribeDBLogFilesAsync(const Model::DescribeDBLogFilesRequest& request, const DescribeDBLogFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBLogFilesOutcomeCallable DescribeDBLogFilesCallable(const Model::DescribeDBLogFilesRequest& request);

                /**
                 *This API is used to query the security group details of an instance.
                 * @param req DescribeDBSecurityGroupsRequest
                 * @return DescribeDBSecurityGroupsOutcome
                 */
                DescribeDBSecurityGroupsOutcome DescribeDBSecurityGroups(const Model::DescribeDBSecurityGroupsRequest &request);
                void DescribeDBSecurityGroupsAsync(const Model::DescribeDBSecurityGroupsRequest& request, const DescribeDBSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBSecurityGroupsOutcomeCallable DescribeDBSecurityGroupsCallable(const Model::DescribeDBSecurityGroupsRequest& request);

                /**
                 *This API is used to query the sync mode of a TencentDB instance.
                 * @param req DescribeDBSyncModeRequest
                 * @return DescribeDBSyncModeOutcome
                 */
                DescribeDBSyncModeOutcome DescribeDBSyncMode(const Model::DescribeDBSyncModeRequest &request);
                void DescribeDBSyncModeAsync(const Model::DescribeDBSyncModeRequest& request, const DescribeDBSyncModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBSyncModeOutcomeCallable DescribeDBSyncModeCallable(const Model::DescribeDBSyncModeRequest& request);

                /**
                 *This API is used to query the information of instance nodes.
                 * @param req DescribeDCDBInstanceNodeInfoRequest
                 * @return DescribeDCDBInstanceNodeInfoOutcome
                 */
                DescribeDCDBInstanceNodeInfoOutcome DescribeDCDBInstanceNodeInfo(const Model::DescribeDCDBInstanceNodeInfoRequest &request);
                void DescribeDCDBInstanceNodeInfoAsync(const Model::DescribeDCDBInstanceNodeInfoRequest& request, const DescribeDCDBInstanceNodeInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDCDBInstanceNodeInfoOutcomeCallable DescribeDCDBInstanceNodeInfoCallable(const Model::DescribeDCDBInstanceNodeInfoRequest& request);

                /**
                 *This API is used to query the list of TencentDB instances. It supports filtering instances by project ID, instance ID, private network address, and instance name.
If no filter is specified, 10 instances will be returned by default. Up to 100 instances can be returned for a single request.
                 * @param req DescribeDCDBInstancesRequest
                 * @return DescribeDCDBInstancesOutcome
                 */
                DescribeDCDBInstancesOutcome DescribeDCDBInstances(const Model::DescribeDCDBInstancesRequest &request);
                void DescribeDCDBInstancesAsync(const Model::DescribeDCDBInstancesRequest& request, const DescribeDCDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDCDBInstancesOutcomeCallable DescribeDCDBInstancesCallable(const Model::DescribeDCDBInstancesRequest& request);

                /**
                 *This API is used to query the disaster recovery details of an instance.
                 * @param req DescribeDcnDetailRequest
                 * @return DescribeDcnDetailOutcome
                 */
                DescribeDcnDetailOutcome DescribeDcnDetail(const Model::DescribeDcnDetailRequest &request);
                void DescribeDcnDetailAsync(const Model::DescribeDcnDetailRequest& request, const DescribeDcnDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDcnDetailOutcomeCallable DescribeDcnDetailCallable(const Model::DescribeDcnDetailRequest& request);

                /**
                 *This API is used to get the download URL of a specific backup or log file of a database.
                 * @param req DescribeFileDownloadUrlRequest
                 * @return DescribeFileDownloadUrlOutcome
                 */
                DescribeFileDownloadUrlOutcome DescribeFileDownloadUrl(const Model::DescribeFileDownloadUrlRequest &request);
                void DescribeFileDownloadUrlAsync(const Model::DescribeFileDownloadUrlRequest& request, const DescribeFileDownloadUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFileDownloadUrlOutcomeCallable DescribeFileDownloadUrlCallable(const Model::DescribeFileDownloadUrlRequest& request);

                /**
                 *This API is used to query task status.
                 * @param req DescribeFlowRequest
                 * @return DescribeFlowOutcome
                 */
                DescribeFlowOutcome DescribeFlow(const Model::DescribeFlowRequest &request);
                void DescribeFlowAsync(const Model::DescribeFlowRequest& request, const DescribeFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFlowOutcomeCallable DescribeFlowCallable(const Model::DescribeFlowRequest& request);

                /**
                 *This API is used to query the security group details of a project.
                 * @param req DescribeProjectSecurityGroupsRequest
                 * @return DescribeProjectSecurityGroupsOutcome
                 */
                DescribeProjectSecurityGroupsOutcome DescribeProjectSecurityGroups(const Model::DescribeProjectSecurityGroupsRequest &request);
                void DescribeProjectSecurityGroupsAsync(const Model::DescribeProjectSecurityGroupsRequest& request, const DescribeProjectSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProjectSecurityGroupsOutcomeCallable DescribeProjectSecurityGroupsCallable(const Model::DescribeProjectSecurityGroupsRequest& request);

                /**
                 *This API is used to query the project list.
                 * @param req DescribeProjectsRequest
                 * @return DescribeProjectsOutcome
                 */
                DescribeProjectsOutcome DescribeProjects(const Model::DescribeProjectsRequest &request);
                void DescribeProjectsAsync(const Model::DescribeProjectsRequest& request, const DescribeProjectsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProjectsOutcomeCallable DescribeProjectsCallable(const Model::DescribeProjectsRequest& request);

                /**
                 *This API is used to terminate an isolated monthly-subscribed instance.
                 * @param req DestroyDCDBInstanceRequest
                 * @return DestroyDCDBInstanceOutcome
                 */
                DestroyDCDBInstanceOutcome DestroyDCDBInstance(const Model::DestroyDCDBInstanceRequest &request);
                void DestroyDCDBInstanceAsync(const Model::DestroyDCDBInstanceRequest& request, const DestroyDCDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DestroyDCDBInstanceOutcomeCallable DestroyDCDBInstanceCallable(const Model::DestroyDCDBInstanceRequest& request);

                /**
                 *This API is used to terminate a pay-as-you-go instance.
                 * @param req DestroyHourDCDBInstanceRequest
                 * @return DestroyHourDCDBInstanceOutcome
                 */
                DestroyHourDCDBInstanceOutcome DestroyHourDCDBInstance(const Model::DestroyHourDCDBInstanceRequest &request);
                void DestroyHourDCDBInstanceAsync(const Model::DestroyHourDCDBInstanceRequest& request, const DestroyHourDCDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DestroyHourDCDBInstanceOutcomeCallable DestroyHourDCDBInstanceCallable(const Model::DestroyHourDCDBInstanceRequest& request);

                /**
                 *This API is used to unassociate security groups from instances in batches.
                 * @param req DisassociateSecurityGroupsRequest
                 * @return DisassociateSecurityGroupsOutcome
                 */
                DisassociateSecurityGroupsOutcome DisassociateSecurityGroups(const Model::DisassociateSecurityGroupsRequest &request);
                void DisassociateSecurityGroupsAsync(const Model::DisassociateSecurityGroupsRequest& request, const DisassociateSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisassociateSecurityGroupsOutcomeCallable DisassociateSecurityGroupsCallable(const Model::DisassociateSecurityGroupsRequest& request);

                /**
                 *This API is used to grant permissions to a TencentDB account.
Note: accounts with the same username but different hosts are different accounts.
                 * @param req GrantAccountPrivilegesRequest
                 * @return GrantAccountPrivilegesOutcome
                 */
                GrantAccountPrivilegesOutcome GrantAccountPrivileges(const Model::GrantAccountPrivilegesRequest &request);
                void GrantAccountPrivilegesAsync(const Model::GrantAccountPrivilegesRequest& request, const GrantAccountPrivilegesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GrantAccountPrivilegesOutcomeCallable GrantAccountPrivilegesCallable(const Model::GrantAccountPrivilegesRequest& request);

                /**
                 *This API is used to modify the remarks of a TencentDB account.
Note: accounts with the same username but different hosts are different accounts.
                 * @param req ModifyAccountDescriptionRequest
                 * @return ModifyAccountDescriptionOutcome
                 */
                ModifyAccountDescriptionOutcome ModifyAccountDescription(const Model::ModifyAccountDescriptionRequest &request);
                void ModifyAccountDescriptionAsync(const Model::ModifyAccountDescriptionRequest& request, const ModifyAccountDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAccountDescriptionOutcomeCallable ModifyAccountDescriptionCallable(const Model::ModifyAccountDescriptionRequest& request);

                /**
                 *This API is used to modify the security groups associated with TencentDB.
                 * @param req ModifyDBInstanceSecurityGroupsRequest
                 * @return ModifyDBInstanceSecurityGroupsOutcome
                 */
                ModifyDBInstanceSecurityGroupsOutcome ModifyDBInstanceSecurityGroups(const Model::ModifyDBInstanceSecurityGroupsRequest &request);
                void ModifyDBInstanceSecurityGroupsAsync(const Model::ModifyDBInstanceSecurityGroupsRequest& request, const ModifyDBInstanceSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDBInstanceSecurityGroupsOutcomeCallable ModifyDBInstanceSecurityGroupsCallable(const Model::ModifyDBInstanceSecurityGroupsRequest& request);

                /**
                 *This API is used to modify the project to which TencentDB instances belong.
                 * @param req ModifyDBInstancesProjectRequest
                 * @return ModifyDBInstancesProjectOutcome
                 */
                ModifyDBInstancesProjectOutcome ModifyDBInstancesProject(const Model::ModifyDBInstancesProjectRequest &request);
                void ModifyDBInstancesProjectAsync(const Model::ModifyDBInstancesProjectRequest& request, const ModifyDBInstancesProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDBInstancesProjectOutcomeCallable ModifyDBInstancesProjectCallable(const Model::ModifyDBInstancesProjectRequest& request);

                /**
                 *This API is used to reset the password of a TencentDB account.
Note: accounts with the same username but different hosts are different accounts.
                 * @param req ResetAccountPasswordRequest
                 * @return ResetAccountPasswordOutcome
                 */
                ResetAccountPasswordOutcome ResetAccountPassword(const Model::ResetAccountPasswordRequest &request);
                void ResetAccountPasswordAsync(const Model::ResetAccountPasswordRequest& request, const ResetAccountPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResetAccountPasswordOutcomeCallable ResetAccountPasswordCallable(const Model::ResetAccountPasswordRequest& request);

                /**
                 *This API is used to start a source-replica switch of instances.
                 * @param req SwitchDBInstanceHARequest
                 * @return SwitchDBInstanceHAOutcome
                 */
                SwitchDBInstanceHAOutcome SwitchDBInstanceHA(const Model::SwitchDBInstanceHARequest &request);
                void SwitchDBInstanceHAAsync(const Model::SwitchDBInstanceHARequest& request, const SwitchDBInstanceHAAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SwitchDBInstanceHAOutcomeCallable SwitchDBInstanceHACallable(const Model::SwitchDBInstanceHARequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_DCDB_V20180411_DCDBCLIENT_H_
