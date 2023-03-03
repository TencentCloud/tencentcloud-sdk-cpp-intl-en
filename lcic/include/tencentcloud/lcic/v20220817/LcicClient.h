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

#ifndef TENCENTCLOUD_LCIC_V20220817_LCICCLIENT_H_
#define TENCENTCLOUD_LCIC_V20220817_LCICCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/lcic/v20220817/model/AddGroupMemberRequest.h>
#include <tencentcloud/lcic/v20220817/model/AddGroupMemberResponse.h>
#include <tencentcloud/lcic/v20220817/model/BatchAddGroupMemberRequest.h>
#include <tencentcloud/lcic/v20220817/model/BatchAddGroupMemberResponse.h>
#include <tencentcloud/lcic/v20220817/model/BatchCreateGroupWithMembersRequest.h>
#include <tencentcloud/lcic/v20220817/model/BatchCreateGroupWithMembersResponse.h>
#include <tencentcloud/lcic/v20220817/model/BatchCreateRoomRequest.h>
#include <tencentcloud/lcic/v20220817/model/BatchCreateRoomResponse.h>
#include <tencentcloud/lcic/v20220817/model/BatchDeleteGroupMemberRequest.h>
#include <tencentcloud/lcic/v20220817/model/BatchDeleteGroupMemberResponse.h>
#include <tencentcloud/lcic/v20220817/model/BatchDeleteRecordRequest.h>
#include <tencentcloud/lcic/v20220817/model/BatchDeleteRecordResponse.h>
#include <tencentcloud/lcic/v20220817/model/BatchRegisterRequest.h>
#include <tencentcloud/lcic/v20220817/model/BatchRegisterResponse.h>
#include <tencentcloud/lcic/v20220817/model/BindDocumentToRoomRequest.h>
#include <tencentcloud/lcic/v20220817/model/BindDocumentToRoomResponse.h>
#include <tencentcloud/lcic/v20220817/model/CreateDocumentRequest.h>
#include <tencentcloud/lcic/v20220817/model/CreateDocumentResponse.h>
#include <tencentcloud/lcic/v20220817/model/CreateGroupWithMembersRequest.h>
#include <tencentcloud/lcic/v20220817/model/CreateGroupWithMembersResponse.h>
#include <tencentcloud/lcic/v20220817/model/CreateGroupWithSubGroupRequest.h>
#include <tencentcloud/lcic/v20220817/model/CreateGroupWithSubGroupResponse.h>
#include <tencentcloud/lcic/v20220817/model/CreateRoomRequest.h>
#include <tencentcloud/lcic/v20220817/model/CreateRoomResponse.h>
#include <tencentcloud/lcic/v20220817/model/CreateSupervisorRequest.h>
#include <tencentcloud/lcic/v20220817/model/CreateSupervisorResponse.h>
#include <tencentcloud/lcic/v20220817/model/DeleteDocumentRequest.h>
#include <tencentcloud/lcic/v20220817/model/DeleteDocumentResponse.h>
#include <tencentcloud/lcic/v20220817/model/DeleteGroupRequest.h>
#include <tencentcloud/lcic/v20220817/model/DeleteGroupResponse.h>
#include <tencentcloud/lcic/v20220817/model/DeleteGroupMemberRequest.h>
#include <tencentcloud/lcic/v20220817/model/DeleteGroupMemberResponse.h>
#include <tencentcloud/lcic/v20220817/model/DeleteRecordRequest.h>
#include <tencentcloud/lcic/v20220817/model/DeleteRecordResponse.h>
#include <tencentcloud/lcic/v20220817/model/DeleteRoomRequest.h>
#include <tencentcloud/lcic/v20220817/model/DeleteRoomResponse.h>
#include <tencentcloud/lcic/v20220817/model/DescribeCurrentMemberListRequest.h>
#include <tencentcloud/lcic/v20220817/model/DescribeCurrentMemberListResponse.h>
#include <tencentcloud/lcic/v20220817/model/DescribeDocumentRequest.h>
#include <tencentcloud/lcic/v20220817/model/DescribeDocumentResponse.h>
#include <tencentcloud/lcic/v20220817/model/DescribeDocumentsByRoomRequest.h>
#include <tencentcloud/lcic/v20220817/model/DescribeDocumentsByRoomResponse.h>
#include <tencentcloud/lcic/v20220817/model/DescribeGroupRequest.h>
#include <tencentcloud/lcic/v20220817/model/DescribeGroupResponse.h>
#include <tencentcloud/lcic/v20220817/model/DescribeGroupListRequest.h>
#include <tencentcloud/lcic/v20220817/model/DescribeGroupListResponse.h>
#include <tencentcloud/lcic/v20220817/model/DescribeGroupMemberListRequest.h>
#include <tencentcloud/lcic/v20220817/model/DescribeGroupMemberListResponse.h>
#include <tencentcloud/lcic/v20220817/model/DescribeRoomRequest.h>
#include <tencentcloud/lcic/v20220817/model/DescribeRoomResponse.h>
#include <tencentcloud/lcic/v20220817/model/DescribeRoomStatisticsRequest.h>
#include <tencentcloud/lcic/v20220817/model/DescribeRoomStatisticsResponse.h>
#include <tencentcloud/lcic/v20220817/model/DescribeSdkAppIdUsersRequest.h>
#include <tencentcloud/lcic/v20220817/model/DescribeSdkAppIdUsersResponse.h>
#include <tencentcloud/lcic/v20220817/model/DescribeUserRequest.h>
#include <tencentcloud/lcic/v20220817/model/DescribeUserResponse.h>
#include <tencentcloud/lcic/v20220817/model/GetWatermarkRequest.h>
#include <tencentcloud/lcic/v20220817/model/GetWatermarkResponse.h>
#include <tencentcloud/lcic/v20220817/model/LoginOriginIdRequest.h>
#include <tencentcloud/lcic/v20220817/model/LoginOriginIdResponse.h>
#include <tencentcloud/lcic/v20220817/model/LoginUserRequest.h>
#include <tencentcloud/lcic/v20220817/model/LoginUserResponse.h>
#include <tencentcloud/lcic/v20220817/model/ModifyAppRequest.h>
#include <tencentcloud/lcic/v20220817/model/ModifyAppResponse.h>
#include <tencentcloud/lcic/v20220817/model/ModifyGroupRequest.h>
#include <tencentcloud/lcic/v20220817/model/ModifyGroupResponse.h>
#include <tencentcloud/lcic/v20220817/model/ModifyRoomRequest.h>
#include <tencentcloud/lcic/v20220817/model/ModifyRoomResponse.h>
#include <tencentcloud/lcic/v20220817/model/ModifyUserProfileRequest.h>
#include <tencentcloud/lcic/v20220817/model/ModifyUserProfileResponse.h>
#include <tencentcloud/lcic/v20220817/model/RegisterUserRequest.h>
#include <tencentcloud/lcic/v20220817/model/RegisterUserResponse.h>
#include <tencentcloud/lcic/v20220817/model/SetAppCustomContentRequest.h>
#include <tencentcloud/lcic/v20220817/model/SetAppCustomContentResponse.h>
#include <tencentcloud/lcic/v20220817/model/SetWatermarkRequest.h>
#include <tencentcloud/lcic/v20220817/model/SetWatermarkResponse.h>
#include <tencentcloud/lcic/v20220817/model/UnbindDocumentFromRoomRequest.h>
#include <tencentcloud/lcic/v20220817/model/UnbindDocumentFromRoomResponse.h>


namespace TencentCloud
{
    namespace Lcic
    {
        namespace V20220817
        {
            class LcicClient : public AbstractClient
            {
            public:
                LcicClient(const Credential &credential, const std::string &region);
                LcicClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::AddGroupMemberResponse> AddGroupMemberOutcome;
                typedef std::future<AddGroupMemberOutcome> AddGroupMemberOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::AddGroupMemberRequest&, AddGroupMemberOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddGroupMemberAsyncHandler;
                typedef Outcome<Core::Error, Model::BatchAddGroupMemberResponse> BatchAddGroupMemberOutcome;
                typedef std::future<BatchAddGroupMemberOutcome> BatchAddGroupMemberOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::BatchAddGroupMemberRequest&, BatchAddGroupMemberOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchAddGroupMemberAsyncHandler;
                typedef Outcome<Core::Error, Model::BatchCreateGroupWithMembersResponse> BatchCreateGroupWithMembersOutcome;
                typedef std::future<BatchCreateGroupWithMembersOutcome> BatchCreateGroupWithMembersOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::BatchCreateGroupWithMembersRequest&, BatchCreateGroupWithMembersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchCreateGroupWithMembersAsyncHandler;
                typedef Outcome<Core::Error, Model::BatchCreateRoomResponse> BatchCreateRoomOutcome;
                typedef std::future<BatchCreateRoomOutcome> BatchCreateRoomOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::BatchCreateRoomRequest&, BatchCreateRoomOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchCreateRoomAsyncHandler;
                typedef Outcome<Core::Error, Model::BatchDeleteGroupMemberResponse> BatchDeleteGroupMemberOutcome;
                typedef std::future<BatchDeleteGroupMemberOutcome> BatchDeleteGroupMemberOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::BatchDeleteGroupMemberRequest&, BatchDeleteGroupMemberOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchDeleteGroupMemberAsyncHandler;
                typedef Outcome<Core::Error, Model::BatchDeleteRecordResponse> BatchDeleteRecordOutcome;
                typedef std::future<BatchDeleteRecordOutcome> BatchDeleteRecordOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::BatchDeleteRecordRequest&, BatchDeleteRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchDeleteRecordAsyncHandler;
                typedef Outcome<Core::Error, Model::BatchRegisterResponse> BatchRegisterOutcome;
                typedef std::future<BatchRegisterOutcome> BatchRegisterOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::BatchRegisterRequest&, BatchRegisterOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchRegisterAsyncHandler;
                typedef Outcome<Core::Error, Model::BindDocumentToRoomResponse> BindDocumentToRoomOutcome;
                typedef std::future<BindDocumentToRoomOutcome> BindDocumentToRoomOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::BindDocumentToRoomRequest&, BindDocumentToRoomOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BindDocumentToRoomAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDocumentResponse> CreateDocumentOutcome;
                typedef std::future<CreateDocumentOutcome> CreateDocumentOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::CreateDocumentRequest&, CreateDocumentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDocumentAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateGroupWithMembersResponse> CreateGroupWithMembersOutcome;
                typedef std::future<CreateGroupWithMembersOutcome> CreateGroupWithMembersOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::CreateGroupWithMembersRequest&, CreateGroupWithMembersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateGroupWithMembersAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateGroupWithSubGroupResponse> CreateGroupWithSubGroupOutcome;
                typedef std::future<CreateGroupWithSubGroupOutcome> CreateGroupWithSubGroupOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::CreateGroupWithSubGroupRequest&, CreateGroupWithSubGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateGroupWithSubGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateRoomResponse> CreateRoomOutcome;
                typedef std::future<CreateRoomOutcome> CreateRoomOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::CreateRoomRequest&, CreateRoomOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateRoomAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSupervisorResponse> CreateSupervisorOutcome;
                typedef std::future<CreateSupervisorOutcome> CreateSupervisorOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::CreateSupervisorRequest&, CreateSupervisorOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSupervisorAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDocumentResponse> DeleteDocumentOutcome;
                typedef std::future<DeleteDocumentOutcome> DeleteDocumentOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::DeleteDocumentRequest&, DeleteDocumentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDocumentAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteGroupResponse> DeleteGroupOutcome;
                typedef std::future<DeleteGroupOutcome> DeleteGroupOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::DeleteGroupRequest&, DeleteGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteGroupMemberResponse> DeleteGroupMemberOutcome;
                typedef std::future<DeleteGroupMemberOutcome> DeleteGroupMemberOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::DeleteGroupMemberRequest&, DeleteGroupMemberOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteGroupMemberAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteRecordResponse> DeleteRecordOutcome;
                typedef std::future<DeleteRecordOutcome> DeleteRecordOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::DeleteRecordRequest&, DeleteRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRecordAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteRoomResponse> DeleteRoomOutcome;
                typedef std::future<DeleteRoomOutcome> DeleteRoomOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::DeleteRoomRequest&, DeleteRoomOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRoomAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCurrentMemberListResponse> DescribeCurrentMemberListOutcome;
                typedef std::future<DescribeCurrentMemberListOutcome> DescribeCurrentMemberListOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::DescribeCurrentMemberListRequest&, DescribeCurrentMemberListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCurrentMemberListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDocumentResponse> DescribeDocumentOutcome;
                typedef std::future<DescribeDocumentOutcome> DescribeDocumentOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::DescribeDocumentRequest&, DescribeDocumentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDocumentAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDocumentsByRoomResponse> DescribeDocumentsByRoomOutcome;
                typedef std::future<DescribeDocumentsByRoomOutcome> DescribeDocumentsByRoomOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::DescribeDocumentsByRoomRequest&, DescribeDocumentsByRoomOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDocumentsByRoomAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeGroupResponse> DescribeGroupOutcome;
                typedef std::future<DescribeGroupOutcome> DescribeGroupOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::DescribeGroupRequest&, DescribeGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeGroupListResponse> DescribeGroupListOutcome;
                typedef std::future<DescribeGroupListOutcome> DescribeGroupListOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::DescribeGroupListRequest&, DescribeGroupListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGroupListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeGroupMemberListResponse> DescribeGroupMemberListOutcome;
                typedef std::future<DescribeGroupMemberListOutcome> DescribeGroupMemberListOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::DescribeGroupMemberListRequest&, DescribeGroupMemberListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGroupMemberListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRoomResponse> DescribeRoomOutcome;
                typedef std::future<DescribeRoomOutcome> DescribeRoomOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::DescribeRoomRequest&, DescribeRoomOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRoomAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRoomStatisticsResponse> DescribeRoomStatisticsOutcome;
                typedef std::future<DescribeRoomStatisticsOutcome> DescribeRoomStatisticsOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::DescribeRoomStatisticsRequest&, DescribeRoomStatisticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRoomStatisticsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSdkAppIdUsersResponse> DescribeSdkAppIdUsersOutcome;
                typedef std::future<DescribeSdkAppIdUsersOutcome> DescribeSdkAppIdUsersOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::DescribeSdkAppIdUsersRequest&, DescribeSdkAppIdUsersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSdkAppIdUsersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUserResponse> DescribeUserOutcome;
                typedef std::future<DescribeUserOutcome> DescribeUserOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::DescribeUserRequest&, DescribeUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserAsyncHandler;
                typedef Outcome<Core::Error, Model::GetWatermarkResponse> GetWatermarkOutcome;
                typedef std::future<GetWatermarkOutcome> GetWatermarkOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::GetWatermarkRequest&, GetWatermarkOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetWatermarkAsyncHandler;
                typedef Outcome<Core::Error, Model::LoginOriginIdResponse> LoginOriginIdOutcome;
                typedef std::future<LoginOriginIdOutcome> LoginOriginIdOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::LoginOriginIdRequest&, LoginOriginIdOutcome, const std::shared_ptr<const AsyncCallerContext>&)> LoginOriginIdAsyncHandler;
                typedef Outcome<Core::Error, Model::LoginUserResponse> LoginUserOutcome;
                typedef std::future<LoginUserOutcome> LoginUserOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::LoginUserRequest&, LoginUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> LoginUserAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAppResponse> ModifyAppOutcome;
                typedef std::future<ModifyAppOutcome> ModifyAppOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::ModifyAppRequest&, ModifyAppOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAppAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyGroupResponse> ModifyGroupOutcome;
                typedef std::future<ModifyGroupOutcome> ModifyGroupOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::ModifyGroupRequest&, ModifyGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyRoomResponse> ModifyRoomOutcome;
                typedef std::future<ModifyRoomOutcome> ModifyRoomOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::ModifyRoomRequest&, ModifyRoomOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRoomAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyUserProfileResponse> ModifyUserProfileOutcome;
                typedef std::future<ModifyUserProfileOutcome> ModifyUserProfileOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::ModifyUserProfileRequest&, ModifyUserProfileOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyUserProfileAsyncHandler;
                typedef Outcome<Core::Error, Model::RegisterUserResponse> RegisterUserOutcome;
                typedef std::future<RegisterUserOutcome> RegisterUserOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::RegisterUserRequest&, RegisterUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RegisterUserAsyncHandler;
                typedef Outcome<Core::Error, Model::SetAppCustomContentResponse> SetAppCustomContentOutcome;
                typedef std::future<SetAppCustomContentOutcome> SetAppCustomContentOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::SetAppCustomContentRequest&, SetAppCustomContentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetAppCustomContentAsyncHandler;
                typedef Outcome<Core::Error, Model::SetWatermarkResponse> SetWatermarkOutcome;
                typedef std::future<SetWatermarkOutcome> SetWatermarkOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::SetWatermarkRequest&, SetWatermarkOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetWatermarkAsyncHandler;
                typedef Outcome<Core::Error, Model::UnbindDocumentFromRoomResponse> UnbindDocumentFromRoomOutcome;
                typedef std::future<UnbindDocumentFromRoomOutcome> UnbindDocumentFromRoomOutcomeCallable;
                typedef std::function<void(const LcicClient*, const Model::UnbindDocumentFromRoomRequest&, UnbindDocumentFromRoomOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UnbindDocumentFromRoomAsyncHandler;



                /**
                 *This API is used to add users to a group.
                 * @param req AddGroupMemberRequest
                 * @return AddGroupMemberOutcome
                 */
                AddGroupMemberOutcome AddGroupMember(const Model::AddGroupMemberRequest &request);
                void AddGroupMemberAsync(const Model::AddGroupMemberRequest& request, const AddGroupMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddGroupMemberOutcomeCallable AddGroupMemberCallable(const Model::AddGroupMemberRequest& request);

                /**
                 *This API is used to add users to multiple groups at a time.
                 * @param req BatchAddGroupMemberRequest
                 * @return BatchAddGroupMemberOutcome
                 */
                BatchAddGroupMemberOutcome BatchAddGroupMember(const Model::BatchAddGroupMemberRequest &request);
                void BatchAddGroupMemberAsync(const Model::BatchAddGroupMemberRequest& request, const BatchAddGroupMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BatchAddGroupMemberOutcomeCallable BatchAddGroupMemberCallable(const Model::BatchAddGroupMemberRequest& request);

                /**
                 *This API is used to create multiple groups at a time.
                 * @param req BatchCreateGroupWithMembersRequest
                 * @return BatchCreateGroupWithMembersOutcome
                 */
                BatchCreateGroupWithMembersOutcome BatchCreateGroupWithMembers(const Model::BatchCreateGroupWithMembersRequest &request);
                void BatchCreateGroupWithMembersAsync(const Model::BatchCreateGroupWithMembersRequest& request, const BatchCreateGroupWithMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BatchCreateGroupWithMembersOutcomeCallable BatchCreateGroupWithMembersCallable(const Model::BatchCreateGroupWithMembersRequest& request);

                /**
                 *This API is used to create multiple rooms at a time.
                 * @param req BatchCreateRoomRequest
                 * @return BatchCreateRoomOutcome
                 */
                BatchCreateRoomOutcome BatchCreateRoom(const Model::BatchCreateRoomRequest &request);
                void BatchCreateRoomAsync(const Model::BatchCreateRoomRequest& request, const BatchCreateRoomAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BatchCreateRoomOutcomeCallable BatchCreateRoomCallable(const Model::BatchCreateRoomRequest& request);

                /**
                 *This API is used to remove users from multiple groups at a time.
                 * @param req BatchDeleteGroupMemberRequest
                 * @return BatchDeleteGroupMemberOutcome
                 */
                BatchDeleteGroupMemberOutcome BatchDeleteGroupMember(const Model::BatchDeleteGroupMemberRequest &request);
                void BatchDeleteGroupMemberAsync(const Model::BatchDeleteGroupMemberRequest& request, const BatchDeleteGroupMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BatchDeleteGroupMemberOutcomeCallable BatchDeleteGroupMemberCallable(const Model::BatchDeleteGroupMemberRequest& request);

                /**
                 *This API is used to delete the recordings of multiple rooms.
                 * @param req BatchDeleteRecordRequest
                 * @return BatchDeleteRecordOutcome
                 */
                BatchDeleteRecordOutcome BatchDeleteRecord(const Model::BatchDeleteRecordRequest &request);
                void BatchDeleteRecordAsync(const Model::BatchDeleteRecordRequest& request, const BatchDeleteRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BatchDeleteRecordOutcomeCallable BatchDeleteRecordCallable(const Model::BatchDeleteRecordRequest& request);

                /**
                 *This API is used to register multiple users (up to 1,000) at a time. If a user ID already exists, the existing one will be overwritten.
                 * @param req BatchRegisterRequest
                 * @return BatchRegisterOutcome
                 */
                BatchRegisterOutcome BatchRegister(const Model::BatchRegisterRequest &request);
                void BatchRegisterAsync(const Model::BatchRegisterRequest& request, const BatchRegisterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BatchRegisterOutcomeCallable BatchRegisterCallable(const Model::BatchRegisterRequest& request);

                /**
                 *This API is used to bind a document to a room.
                 * @param req BindDocumentToRoomRequest
                 * @return BindDocumentToRoomOutcome
                 */
                BindDocumentToRoomOutcome BindDocumentToRoom(const Model::BindDocumentToRoomRequest &request);
                void BindDocumentToRoomAsync(const Model::BindDocumentToRoomRequest& request, const BindDocumentToRoomAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BindDocumentToRoomOutcomeCallable BindDocumentToRoomCallable(const Model::BindDocumentToRoomRequest& request);

                /**
                 *This API is used to create a document to be used in a room.
                 * @param req CreateDocumentRequest
                 * @return CreateDocumentOutcome
                 */
                CreateDocumentOutcome CreateDocument(const Model::CreateDocumentRequest &request);
                void CreateDocumentAsync(const Model::CreateDocumentRequest& request, const CreateDocumentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDocumentOutcomeCallable CreateDocumentCallable(const Model::CreateDocumentRequest& request);

                /**
                 *This API is used to create a group and specify its members.
                 * @param req CreateGroupWithMembersRequest
                 * @return CreateGroupWithMembersOutcome
                 */
                CreateGroupWithMembersOutcome CreateGroupWithMembers(const Model::CreateGroupWithMembersRequest &request);
                void CreateGroupWithMembersAsync(const Model::CreateGroupWithMembersRequest& request, const CreateGroupWithMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateGroupWithMembersOutcomeCallable CreateGroupWithMembersCallable(const Model::CreateGroupWithMembersRequest& request);

                /**
                 *This API is used to merge groups.
                 * @param req CreateGroupWithSubGroupRequest
                 * @return CreateGroupWithSubGroupOutcome
                 */
                CreateGroupWithSubGroupOutcome CreateGroupWithSubGroup(const Model::CreateGroupWithSubGroupRequest &request);
                void CreateGroupWithSubGroupAsync(const Model::CreateGroupWithSubGroupRequest& request, const CreateGroupWithSubGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateGroupWithSubGroupOutcomeCallable CreateGroupWithSubGroupCallable(const Model::CreateGroupWithSubGroupRequest& request);

                /**
                 *This API is used to create a room.
                 * @param req CreateRoomRequest
                 * @return CreateRoomOutcome
                 */
                CreateRoomOutcome CreateRoom(const Model::CreateRoomRequest &request);
                void CreateRoomAsync(const Model::CreateRoomRequest& request, const CreateRoomAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateRoomOutcomeCallable CreateRoomCallable(const Model::CreateRoomRequest& request);

                /**
                 *This API is used to create a spectator.
                 * @param req CreateSupervisorRequest
                 * @return CreateSupervisorOutcome
                 */
                CreateSupervisorOutcome CreateSupervisor(const Model::CreateSupervisorRequest &request);
                void CreateSupervisorAsync(const Model::CreateSupervisorRequest& request, const CreateSupervisorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSupervisorOutcomeCallable CreateSupervisorCallable(const Model::CreateSupervisorRequest& request);

                /**
                 *This API is used to delete a document.
                 * @param req DeleteDocumentRequest
                 * @return DeleteDocumentOutcome
                 */
                DeleteDocumentOutcome DeleteDocument(const Model::DeleteDocumentRequest &request);
                void DeleteDocumentAsync(const Model::DeleteDocumentRequest& request, const DeleteDocumentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDocumentOutcomeCallable DeleteDocumentCallable(const Model::DeleteDocumentRequest& request);

                /**
                 *This API is used to delete one or multiple groups.
                 * @param req DeleteGroupRequest
                 * @return DeleteGroupOutcome
                 */
                DeleteGroupOutcome DeleteGroup(const Model::DeleteGroupRequest &request);
                void DeleteGroupAsync(const Model::DeleteGroupRequest& request, const DeleteGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteGroupOutcomeCallable DeleteGroupCallable(const Model::DeleteGroupRequest& request);

                /**
                 *This API is used to remove users from a group.
                 * @param req DeleteGroupMemberRequest
                 * @return DeleteGroupMemberOutcome
                 */
                DeleteGroupMemberOutcome DeleteGroupMember(const Model::DeleteGroupMemberRequest &request);
                void DeleteGroupMemberAsync(const Model::DeleteGroupMemberRequest& request, const DeleteGroupMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteGroupMemberOutcomeCallable DeleteGroupMemberCallable(const Model::DeleteGroupMemberRequest& request);

                /**
                 *This example shows you how to delete the recording files of a specific room.
                 * @param req DeleteRecordRequest
                 * @return DeleteRecordOutcome
                 */
                DeleteRecordOutcome DeleteRecord(const Model::DeleteRecordRequest &request);
                void DeleteRecordAsync(const Model::DeleteRecordRequest& request, const DeleteRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRecordOutcomeCallable DeleteRecordCallable(const Model::DeleteRecordRequest& request);

                /**
                 *This API is used to delete a room.
                 * @param req DeleteRoomRequest
                 * @return DeleteRoomOutcome
                 */
                DeleteRoomOutcome DeleteRoom(const Model::DeleteRoomRequest &request);
                void DeleteRoomAsync(const Model::DeleteRoomRequest& request, const DeleteRoomAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRoomOutcomeCallable DeleteRoomCallable(const Model::DeleteRoomRequest& request);

                /**
                 *This API is used to get the user list of a room. This API will not work if a room has ended or expired.
                 * @param req DescribeCurrentMemberListRequest
                 * @return DescribeCurrentMemberListOutcome
                 */
                DescribeCurrentMemberListOutcome DescribeCurrentMemberList(const Model::DescribeCurrentMemberListRequest &request);
                void DescribeCurrentMemberListAsync(const Model::DescribeCurrentMemberListRequest& request, const DescribeCurrentMemberListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCurrentMemberListOutcomeCallable DescribeCurrentMemberListCallable(const Model::DescribeCurrentMemberListRequest& request);

                /**
                 *This API is used to get the information of a specific document.
                 * @param req DescribeDocumentRequest
                 * @return DescribeDocumentOutcome
                 */
                DescribeDocumentOutcome DescribeDocument(const Model::DescribeDocumentRequest &request);
                void DescribeDocumentAsync(const Model::DescribeDocumentRequest& request, const DescribeDocumentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDocumentOutcomeCallable DescribeDocumentCallable(const Model::DescribeDocumentRequest& request);

                /**
                 *This API is used to get the document list of a specific room.
                 * @param req DescribeDocumentsByRoomRequest
                 * @return DescribeDocumentsByRoomOutcome
                 */
                DescribeDocumentsByRoomOutcome DescribeDocumentsByRoom(const Model::DescribeDocumentsByRoomRequest &request);
                void DescribeDocumentsByRoomAsync(const Model::DescribeDocumentsByRoomRequest& request, const DescribeDocumentsByRoomAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDocumentsByRoomOutcomeCallable DescribeDocumentsByRoomCallable(const Model::DescribeDocumentsByRoomRequest& request);

                /**
                 *This API is used to get the details of a group.
                 * @param req DescribeGroupRequest
                 * @return DescribeGroupOutcome
                 */
                DescribeGroupOutcome DescribeGroup(const Model::DescribeGroupRequest &request);
                void DescribeGroupAsync(const Model::DescribeGroupRequest& request, const DescribeGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGroupOutcomeCallable DescribeGroupCallable(const Model::DescribeGroupRequest& request);

                /**
                 *This API is used to query groups.
                 * @param req DescribeGroupListRequest
                 * @return DescribeGroupListOutcome
                 */
                DescribeGroupListOutcome DescribeGroupList(const Model::DescribeGroupListRequest &request);
                void DescribeGroupListAsync(const Model::DescribeGroupListRequest& request, const DescribeGroupListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGroupListOutcomeCallable DescribeGroupListCallable(const Model::DescribeGroupListRequest& request);

                /**
                 *This API is used to get the members of a group.
                 * @param req DescribeGroupMemberListRequest
                 * @return DescribeGroupMemberListOutcome
                 */
                DescribeGroupMemberListOutcome DescribeGroupMemberList(const Model::DescribeGroupMemberListRequest &request);
                void DescribeGroupMemberListAsync(const Model::DescribeGroupMemberListRequest& request, const DescribeGroupMemberListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGroupMemberListOutcomeCallable DescribeGroupMemberListCallable(const Model::DescribeGroupMemberListRequest& request);

                /**
                 *This API is used to get room information.
                 * @param req DescribeRoomRequest
                 * @return DescribeRoomOutcome
                 */
                DescribeRoomOutcome DescribeRoom(const Model::DescribeRoomRequest &request);
                void DescribeRoomAsync(const Model::DescribeRoomRequest& request, const DescribeRoomAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRoomOutcomeCallable DescribeRoomCallable(const Model::DescribeRoomRequest& request);

                /**
                 *This API is used to obtain the statistics of a room. It can be called only after the room is ended.
                 * @param req DescribeRoomStatisticsRequest
                 * @return DescribeRoomStatisticsOutcome
                 */
                DescribeRoomStatisticsOutcome DescribeRoomStatistics(const Model::DescribeRoomStatisticsRequest &request);
                void DescribeRoomStatisticsAsync(const Model::DescribeRoomStatisticsRequest& request, const DescribeRoomStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRoomStatisticsOutcomeCallable DescribeRoomStatisticsCallable(const Model::DescribeRoomStatisticsRequest& request);

                /**
                 *This API is used to get the user list of a specific application.
                 * @param req DescribeSdkAppIdUsersRequest
                 * @return DescribeSdkAppIdUsersOutcome
                 */
                DescribeSdkAppIdUsersOutcome DescribeSdkAppIdUsers(const Model::DescribeSdkAppIdUsersRequest &request);
                void DescribeSdkAppIdUsersAsync(const Model::DescribeSdkAppIdUsersRequest& request, const DescribeSdkAppIdUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSdkAppIdUsersOutcomeCallable DescribeSdkAppIdUsersCallable(const Model::DescribeSdkAppIdUsersRequest& request);

                /**
                 *This API is used to obtain user profile.
                 * @param req DescribeUserRequest
                 * @return DescribeUserOutcome
                 */
                DescribeUserOutcome DescribeUser(const Model::DescribeUserRequest &request);
                void DescribeUserAsync(const Model::DescribeUserRequest& request, const DescribeUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUserOutcomeCallable DescribeUserCallable(const Model::DescribeUserRequest& request);

                /**
                 *This API is used to get watermark settings.
                 * @param req GetWatermarkRequest
                 * @return GetWatermarkOutcome
                 */
                GetWatermarkOutcome GetWatermark(const Model::GetWatermarkRequest &request);
                void GetWatermarkAsync(const Model::GetWatermarkRequest& request, const GetWatermarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetWatermarkOutcomeCallable GetWatermarkCallable(const Model::GetWatermarkRequest& request);

                /**
                 *This API is used to log in with an origin account, which is the `originId` entered during registration.
                 * @param req LoginOriginIdRequest
                 * @return LoginOriginIdOutcome
                 */
                LoginOriginIdOutcome LoginOriginId(const Model::LoginOriginIdRequest &request);
                void LoginOriginIdAsync(const Model::LoginOriginIdRequest& request, const LoginOriginIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                LoginOriginIdOutcomeCallable LoginOriginIdCallable(const Model::LoginOriginIdRequest& request);

                /**
                 *This API is used to log in.
                 * @param req LoginUserRequest
                 * @return LoginUserOutcome
                 */
                LoginUserOutcome LoginUser(const Model::LoginUserRequest &request);
                void LoginUserAsync(const Model::LoginUserRequest& request, const LoginUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                LoginUserOutcomeCallable LoginUserCallable(const Model::LoginUserRequest& request);

                /**
                 *This API is used to modify an application.
                 * @param req ModifyAppRequest
                 * @return ModifyAppOutcome
                 */
                ModifyAppOutcome ModifyApp(const Model::ModifyAppRequest &request);
                void ModifyAppAsync(const Model::ModifyAppRequest& request, const ModifyAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAppOutcomeCallable ModifyAppCallable(const Model::ModifyAppRequest& request);

                /**
                 *This API is used to modify a group.
                 * @param req ModifyGroupRequest
                 * @return ModifyGroupOutcome
                 */
                ModifyGroupOutcome ModifyGroup(const Model::ModifyGroupRequest &request);
                void ModifyGroupAsync(const Model::ModifyGroupRequest& request, const ModifyGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyGroupOutcomeCallable ModifyGroupCallable(const Model::ModifyGroupRequest& request);

                /**
                 *This API is used to modify a room.
                 * @param req ModifyRoomRequest
                 * @return ModifyRoomOutcome
                 */
                ModifyRoomOutcome ModifyRoom(const Model::ModifyRoomRequest &request);
                void ModifyRoomAsync(const Model::ModifyRoomRequest& request, const ModifyRoomAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyRoomOutcomeCallable ModifyRoomCallable(const Model::ModifyRoomRequest& request);

                /**
                 *This API is used to modify a user profile such as the nickname and profile photo.
                 * @param req ModifyUserProfileRequest
                 * @return ModifyUserProfileOutcome
                 */
                ModifyUserProfileOutcome ModifyUserProfile(const Model::ModifyUserProfileRequest &request);
                void ModifyUserProfileAsync(const Model::ModifyUserProfileRequest& request, const ModifyUserProfileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyUserProfileOutcomeCallable ModifyUserProfileCallable(const Model::ModifyUserProfileRequest& request);

                /**
                 *This API is used to register a user.
                 * @param req RegisterUserRequest
                 * @return RegisterUserOutcome
                 */
                RegisterUserOutcome RegisterUser(const Model::RegisterUserRequest &request);
                void RegisterUserAsync(const Model::RegisterUserRequest& request, const RegisterUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RegisterUserOutcomeCallable RegisterUserCallable(const Model::RegisterUserRequest& request);

                /**
                 *This API is used to set or update the custom content of an application, including the application icon and custom code. After you update JS and CSS content, you also need to call this API for the updates to take effect.
                 * @param req SetAppCustomContentRequest
                 * @return SetAppCustomContentOutcome
                 */
                SetAppCustomContentOutcome SetAppCustomContent(const Model::SetAppCustomContentRequest &request);
                void SetAppCustomContentAsync(const Model::SetAppCustomContentRequest& request, const SetAppCustomContentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetAppCustomContentOutcomeCallable SetAppCustomContentCallable(const Model::SetAppCustomContentRequest& request);

                /**
                 *This API is used to configure watermarks.
                 * @param req SetWatermarkRequest
                 * @return SetWatermarkOutcome
                 */
                SetWatermarkOutcome SetWatermark(const Model::SetWatermarkRequest &request);
                void SetWatermarkAsync(const Model::SetWatermarkRequest& request, const SetWatermarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetWatermarkOutcomeCallable SetWatermarkCallable(const Model::SetWatermarkRequest& request);

                /**
                 *This API is used to unbind a document from a room.
                 * @param req UnbindDocumentFromRoomRequest
                 * @return UnbindDocumentFromRoomOutcome
                 */
                UnbindDocumentFromRoomOutcome UnbindDocumentFromRoom(const Model::UnbindDocumentFromRoomRequest &request);
                void UnbindDocumentFromRoomAsync(const Model::UnbindDocumentFromRoomRequest& request, const UnbindDocumentFromRoomAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UnbindDocumentFromRoomOutcomeCallable UnbindDocumentFromRoomCallable(const Model::UnbindDocumentFromRoomRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_LCICCLIENT_H_
