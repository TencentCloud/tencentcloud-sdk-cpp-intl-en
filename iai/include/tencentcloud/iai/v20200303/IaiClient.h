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

#ifndef TENCENTCLOUD_IAI_V20200303_IAICLIENT_H_
#define TENCENTCLOUD_IAI_V20200303_IAICLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/iai/v20200303/model/AnalyzeFaceRequest.h>
#include <tencentcloud/iai/v20200303/model/AnalyzeFaceResponse.h>
#include <tencentcloud/iai/v20200303/model/CheckSimilarPersonRequest.h>
#include <tencentcloud/iai/v20200303/model/CheckSimilarPersonResponse.h>
#include <tencentcloud/iai/v20200303/model/CompareFaceRequest.h>
#include <tencentcloud/iai/v20200303/model/CompareFaceResponse.h>
#include <tencentcloud/iai/v20200303/model/CopyPersonRequest.h>
#include <tencentcloud/iai/v20200303/model/CopyPersonResponse.h>
#include <tencentcloud/iai/v20200303/model/CreateFaceRequest.h>
#include <tencentcloud/iai/v20200303/model/CreateFaceResponse.h>
#include <tencentcloud/iai/v20200303/model/CreateGroupRequest.h>
#include <tencentcloud/iai/v20200303/model/CreateGroupResponse.h>
#include <tencentcloud/iai/v20200303/model/CreatePersonRequest.h>
#include <tencentcloud/iai/v20200303/model/CreatePersonResponse.h>
#include <tencentcloud/iai/v20200303/model/DeleteFaceRequest.h>
#include <tencentcloud/iai/v20200303/model/DeleteFaceResponse.h>
#include <tencentcloud/iai/v20200303/model/DeleteGroupRequest.h>
#include <tencentcloud/iai/v20200303/model/DeleteGroupResponse.h>
#include <tencentcloud/iai/v20200303/model/DeletePersonRequest.h>
#include <tencentcloud/iai/v20200303/model/DeletePersonResponse.h>
#include <tencentcloud/iai/v20200303/model/DeletePersonFromGroupRequest.h>
#include <tencentcloud/iai/v20200303/model/DeletePersonFromGroupResponse.h>
#include <tencentcloud/iai/v20200303/model/DetectFaceRequest.h>
#include <tencentcloud/iai/v20200303/model/DetectFaceResponse.h>
#include <tencentcloud/iai/v20200303/model/DetectLiveFaceRequest.h>
#include <tencentcloud/iai/v20200303/model/DetectLiveFaceResponse.h>
#include <tencentcloud/iai/v20200303/model/EstimateCheckSimilarPersonCostTimeRequest.h>
#include <tencentcloud/iai/v20200303/model/EstimateCheckSimilarPersonCostTimeResponse.h>
#include <tencentcloud/iai/v20200303/model/GetCheckSimilarPersonJobIdListRequest.h>
#include <tencentcloud/iai/v20200303/model/GetCheckSimilarPersonJobIdListResponse.h>
#include <tencentcloud/iai/v20200303/model/GetGroupInfoRequest.h>
#include <tencentcloud/iai/v20200303/model/GetGroupInfoResponse.h>
#include <tencentcloud/iai/v20200303/model/GetGroupListRequest.h>
#include <tencentcloud/iai/v20200303/model/GetGroupListResponse.h>
#include <tencentcloud/iai/v20200303/model/GetPersonBaseInfoRequest.h>
#include <tencentcloud/iai/v20200303/model/GetPersonBaseInfoResponse.h>
#include <tencentcloud/iai/v20200303/model/GetPersonGroupInfoRequest.h>
#include <tencentcloud/iai/v20200303/model/GetPersonGroupInfoResponse.h>
#include <tencentcloud/iai/v20200303/model/GetPersonListRequest.h>
#include <tencentcloud/iai/v20200303/model/GetPersonListResponse.h>
#include <tencentcloud/iai/v20200303/model/GetPersonListNumRequest.h>
#include <tencentcloud/iai/v20200303/model/GetPersonListNumResponse.h>
#include <tencentcloud/iai/v20200303/model/GetSimilarPersonResultRequest.h>
#include <tencentcloud/iai/v20200303/model/GetSimilarPersonResultResponse.h>
#include <tencentcloud/iai/v20200303/model/ModifyGroupRequest.h>
#include <tencentcloud/iai/v20200303/model/ModifyGroupResponse.h>
#include <tencentcloud/iai/v20200303/model/ModifyPersonBaseInfoRequest.h>
#include <tencentcloud/iai/v20200303/model/ModifyPersonBaseInfoResponse.h>
#include <tencentcloud/iai/v20200303/model/ModifyPersonGroupInfoRequest.h>
#include <tencentcloud/iai/v20200303/model/ModifyPersonGroupInfoResponse.h>
#include <tencentcloud/iai/v20200303/model/SearchFacesRequest.h>
#include <tencentcloud/iai/v20200303/model/SearchFacesResponse.h>
#include <tencentcloud/iai/v20200303/model/SearchFacesReturnsByGroupRequest.h>
#include <tencentcloud/iai/v20200303/model/SearchFacesReturnsByGroupResponse.h>
#include <tencentcloud/iai/v20200303/model/SearchPersonsRequest.h>
#include <tencentcloud/iai/v20200303/model/SearchPersonsResponse.h>
#include <tencentcloud/iai/v20200303/model/SearchPersonsReturnsByGroupRequest.h>
#include <tencentcloud/iai/v20200303/model/SearchPersonsReturnsByGroupResponse.h>
#include <tencentcloud/iai/v20200303/model/VerifyFaceRequest.h>
#include <tencentcloud/iai/v20200303/model/VerifyFaceResponse.h>
#include <tencentcloud/iai/v20200303/model/VerifyPersonRequest.h>
#include <tencentcloud/iai/v20200303/model/VerifyPersonResponse.h>


namespace TencentCloud
{
    namespace Iai
    {
        namespace V20200303
        {
            class IaiClient : public AbstractClient
            {
            public:
                IaiClient(const Credential &credential, const std::string &region);
                IaiClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Error, Model::AnalyzeFaceResponse> AnalyzeFaceOutcome;
                typedef std::future<AnalyzeFaceOutcome> AnalyzeFaceOutcomeCallable;
                typedef std::function<void(const IaiClient*, const Model::AnalyzeFaceRequest&, AnalyzeFaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AnalyzeFaceAsyncHandler;
                typedef Outcome<Error, Model::CheckSimilarPersonResponse> CheckSimilarPersonOutcome;
                typedef std::future<CheckSimilarPersonOutcome> CheckSimilarPersonOutcomeCallable;
                typedef std::function<void(const IaiClient*, const Model::CheckSimilarPersonRequest&, CheckSimilarPersonOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckSimilarPersonAsyncHandler;
                typedef Outcome<Error, Model::CompareFaceResponse> CompareFaceOutcome;
                typedef std::future<CompareFaceOutcome> CompareFaceOutcomeCallable;
                typedef std::function<void(const IaiClient*, const Model::CompareFaceRequest&, CompareFaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CompareFaceAsyncHandler;
                typedef Outcome<Error, Model::CopyPersonResponse> CopyPersonOutcome;
                typedef std::future<CopyPersonOutcome> CopyPersonOutcomeCallable;
                typedef std::function<void(const IaiClient*, const Model::CopyPersonRequest&, CopyPersonOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CopyPersonAsyncHandler;
                typedef Outcome<Error, Model::CreateFaceResponse> CreateFaceOutcome;
                typedef std::future<CreateFaceOutcome> CreateFaceOutcomeCallable;
                typedef std::function<void(const IaiClient*, const Model::CreateFaceRequest&, CreateFaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateFaceAsyncHandler;
                typedef Outcome<Error, Model::CreateGroupResponse> CreateGroupOutcome;
                typedef std::future<CreateGroupOutcome> CreateGroupOutcomeCallable;
                typedef std::function<void(const IaiClient*, const Model::CreateGroupRequest&, CreateGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateGroupAsyncHandler;
                typedef Outcome<Error, Model::CreatePersonResponse> CreatePersonOutcome;
                typedef std::future<CreatePersonOutcome> CreatePersonOutcomeCallable;
                typedef std::function<void(const IaiClient*, const Model::CreatePersonRequest&, CreatePersonOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePersonAsyncHandler;
                typedef Outcome<Error, Model::DeleteFaceResponse> DeleteFaceOutcome;
                typedef std::future<DeleteFaceOutcome> DeleteFaceOutcomeCallable;
                typedef std::function<void(const IaiClient*, const Model::DeleteFaceRequest&, DeleteFaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteFaceAsyncHandler;
                typedef Outcome<Error, Model::DeleteGroupResponse> DeleteGroupOutcome;
                typedef std::future<DeleteGroupOutcome> DeleteGroupOutcomeCallable;
                typedef std::function<void(const IaiClient*, const Model::DeleteGroupRequest&, DeleteGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteGroupAsyncHandler;
                typedef Outcome<Error, Model::DeletePersonResponse> DeletePersonOutcome;
                typedef std::future<DeletePersonOutcome> DeletePersonOutcomeCallable;
                typedef std::function<void(const IaiClient*, const Model::DeletePersonRequest&, DeletePersonOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeletePersonAsyncHandler;
                typedef Outcome<Error, Model::DeletePersonFromGroupResponse> DeletePersonFromGroupOutcome;
                typedef std::future<DeletePersonFromGroupOutcome> DeletePersonFromGroupOutcomeCallable;
                typedef std::function<void(const IaiClient*, const Model::DeletePersonFromGroupRequest&, DeletePersonFromGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeletePersonFromGroupAsyncHandler;
                typedef Outcome<Error, Model::DetectFaceResponse> DetectFaceOutcome;
                typedef std::future<DetectFaceOutcome> DetectFaceOutcomeCallable;
                typedef std::function<void(const IaiClient*, const Model::DetectFaceRequest&, DetectFaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DetectFaceAsyncHandler;
                typedef Outcome<Error, Model::DetectLiveFaceResponse> DetectLiveFaceOutcome;
                typedef std::future<DetectLiveFaceOutcome> DetectLiveFaceOutcomeCallable;
                typedef std::function<void(const IaiClient*, const Model::DetectLiveFaceRequest&, DetectLiveFaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DetectLiveFaceAsyncHandler;
                typedef Outcome<Error, Model::EstimateCheckSimilarPersonCostTimeResponse> EstimateCheckSimilarPersonCostTimeOutcome;
                typedef std::future<EstimateCheckSimilarPersonCostTimeOutcome> EstimateCheckSimilarPersonCostTimeOutcomeCallable;
                typedef std::function<void(const IaiClient*, const Model::EstimateCheckSimilarPersonCostTimeRequest&, EstimateCheckSimilarPersonCostTimeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EstimateCheckSimilarPersonCostTimeAsyncHandler;
                typedef Outcome<Error, Model::GetCheckSimilarPersonJobIdListResponse> GetCheckSimilarPersonJobIdListOutcome;
                typedef std::future<GetCheckSimilarPersonJobIdListOutcome> GetCheckSimilarPersonJobIdListOutcomeCallable;
                typedef std::function<void(const IaiClient*, const Model::GetCheckSimilarPersonJobIdListRequest&, GetCheckSimilarPersonJobIdListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetCheckSimilarPersonJobIdListAsyncHandler;
                typedef Outcome<Error, Model::GetGroupInfoResponse> GetGroupInfoOutcome;
                typedef std::future<GetGroupInfoOutcome> GetGroupInfoOutcomeCallable;
                typedef std::function<void(const IaiClient*, const Model::GetGroupInfoRequest&, GetGroupInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetGroupInfoAsyncHandler;
                typedef Outcome<Error, Model::GetGroupListResponse> GetGroupListOutcome;
                typedef std::future<GetGroupListOutcome> GetGroupListOutcomeCallable;
                typedef std::function<void(const IaiClient*, const Model::GetGroupListRequest&, GetGroupListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetGroupListAsyncHandler;
                typedef Outcome<Error, Model::GetPersonBaseInfoResponse> GetPersonBaseInfoOutcome;
                typedef std::future<GetPersonBaseInfoOutcome> GetPersonBaseInfoOutcomeCallable;
                typedef std::function<void(const IaiClient*, const Model::GetPersonBaseInfoRequest&, GetPersonBaseInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetPersonBaseInfoAsyncHandler;
                typedef Outcome<Error, Model::GetPersonGroupInfoResponse> GetPersonGroupInfoOutcome;
                typedef std::future<GetPersonGroupInfoOutcome> GetPersonGroupInfoOutcomeCallable;
                typedef std::function<void(const IaiClient*, const Model::GetPersonGroupInfoRequest&, GetPersonGroupInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetPersonGroupInfoAsyncHandler;
                typedef Outcome<Error, Model::GetPersonListResponse> GetPersonListOutcome;
                typedef std::future<GetPersonListOutcome> GetPersonListOutcomeCallable;
                typedef std::function<void(const IaiClient*, const Model::GetPersonListRequest&, GetPersonListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetPersonListAsyncHandler;
                typedef Outcome<Error, Model::GetPersonListNumResponse> GetPersonListNumOutcome;
                typedef std::future<GetPersonListNumOutcome> GetPersonListNumOutcomeCallable;
                typedef std::function<void(const IaiClient*, const Model::GetPersonListNumRequest&, GetPersonListNumOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetPersonListNumAsyncHandler;
                typedef Outcome<Error, Model::GetSimilarPersonResultResponse> GetSimilarPersonResultOutcome;
                typedef std::future<GetSimilarPersonResultOutcome> GetSimilarPersonResultOutcomeCallable;
                typedef std::function<void(const IaiClient*, const Model::GetSimilarPersonResultRequest&, GetSimilarPersonResultOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetSimilarPersonResultAsyncHandler;
                typedef Outcome<Error, Model::ModifyGroupResponse> ModifyGroupOutcome;
                typedef std::future<ModifyGroupOutcome> ModifyGroupOutcomeCallable;
                typedef std::function<void(const IaiClient*, const Model::ModifyGroupRequest&, ModifyGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyGroupAsyncHandler;
                typedef Outcome<Error, Model::ModifyPersonBaseInfoResponse> ModifyPersonBaseInfoOutcome;
                typedef std::future<ModifyPersonBaseInfoOutcome> ModifyPersonBaseInfoOutcomeCallable;
                typedef std::function<void(const IaiClient*, const Model::ModifyPersonBaseInfoRequest&, ModifyPersonBaseInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPersonBaseInfoAsyncHandler;
                typedef Outcome<Error, Model::ModifyPersonGroupInfoResponse> ModifyPersonGroupInfoOutcome;
                typedef std::future<ModifyPersonGroupInfoOutcome> ModifyPersonGroupInfoOutcomeCallable;
                typedef std::function<void(const IaiClient*, const Model::ModifyPersonGroupInfoRequest&, ModifyPersonGroupInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPersonGroupInfoAsyncHandler;
                typedef Outcome<Error, Model::SearchFacesResponse> SearchFacesOutcome;
                typedef std::future<SearchFacesOutcome> SearchFacesOutcomeCallable;
                typedef std::function<void(const IaiClient*, const Model::SearchFacesRequest&, SearchFacesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SearchFacesAsyncHandler;
                typedef Outcome<Error, Model::SearchFacesReturnsByGroupResponse> SearchFacesReturnsByGroupOutcome;
                typedef std::future<SearchFacesReturnsByGroupOutcome> SearchFacesReturnsByGroupOutcomeCallable;
                typedef std::function<void(const IaiClient*, const Model::SearchFacesReturnsByGroupRequest&, SearchFacesReturnsByGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SearchFacesReturnsByGroupAsyncHandler;
                typedef Outcome<Error, Model::SearchPersonsResponse> SearchPersonsOutcome;
                typedef std::future<SearchPersonsOutcome> SearchPersonsOutcomeCallable;
                typedef std::function<void(const IaiClient*, const Model::SearchPersonsRequest&, SearchPersonsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SearchPersonsAsyncHandler;
                typedef Outcome<Error, Model::SearchPersonsReturnsByGroupResponse> SearchPersonsReturnsByGroupOutcome;
                typedef std::future<SearchPersonsReturnsByGroupOutcome> SearchPersonsReturnsByGroupOutcomeCallable;
                typedef std::function<void(const IaiClient*, const Model::SearchPersonsReturnsByGroupRequest&, SearchPersonsReturnsByGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SearchPersonsReturnsByGroupAsyncHandler;
                typedef Outcome<Error, Model::VerifyFaceResponse> VerifyFaceOutcome;
                typedef std::future<VerifyFaceOutcome> VerifyFaceOutcomeCallable;
                typedef std::function<void(const IaiClient*, const Model::VerifyFaceRequest&, VerifyFaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> VerifyFaceAsyncHandler;
                typedef Outcome<Error, Model::VerifyPersonResponse> VerifyPersonOutcome;
                typedef std::future<VerifyPersonOutcome> VerifyPersonOutcomeCallable;
                typedef std::function<void(const IaiClient*, const Model::VerifyPersonRequest&, VerifyPersonOutcome, const std::shared_ptr<const AsyncCallerContext>&)> VerifyPersonAsyncHandler;



                /**
                 *This API is used to perform facial feature localization (aka facial keypoint localization) on a given image and calculate 90 facial keypoints that make up the contour of the face, including eyebrows (8 points on the left and 8 on the right), eyes (8 points on the left and 8 on the right), nose (13 points), mouth (22 points), face contour (21 points), and eyeballs or pupils (2 points).

>     
- Please use the signature algorithm v3 to calculate the signature in the common parameters, that is, set the `SignatureMethod` parameter to `TC3-HMAC-SHA256`.
                 * @param req AnalyzeFaceRequest
                 * @return AnalyzeFaceOutcome
                 */
                AnalyzeFaceOutcome AnalyzeFace(const Model::AnalyzeFaceRequest &request);
                void AnalyzeFaceAsync(const Model::AnalyzeFaceRequest& request, const AnalyzeFaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AnalyzeFaceOutcomeCallable AnalyzeFaceCallable(const Model::AnalyzeFaceRequest& request);

                /**
                 *This API is used to check a specified group for suspected duplicate persons and list their information.

You can use this API to check for duplicate persons in one group so as to avoid situations where the same person has multiple roles in the group. You can also use it to check for duplicate persons across multiple groups to see whether the same person exists in multiple groups at the same time.

Duplicate check across algorithm model versions is not supported. Currently, this feature is available only to groups with algorithm model v3.0.

>     
- If you perform a duplicate check on the same group again, you need to wait for the last operation to complete, that is, when the `GroupIds` entered in the two requests are the same, if the first request is not completed, the second request will fail.

>     
- The status of the group on which the duplicate check is to be performed is that when the duplicate check task really starts, that is, after you initiate the duplicate check request; if your duplicate check task needs to queue up, any addition or deletion operation performed on the group during the queuing will affect the duplicate check result. Tencent Cloud will use the group status when the duplicate check task actually starts. After the task starts, any operation on the group will not affect the task execution; however, you are still recommended not to add/delete persons or faces to/from the group after the task starts.
                 * @param req CheckSimilarPersonRequest
                 * @return CheckSimilarPersonOutcome
                 */
                CheckSimilarPersonOutcome CheckSimilarPerson(const Model::CheckSimilarPersonRequest &request);
                void CheckSimilarPersonAsync(const Model::CheckSimilarPersonRequest& request, const CheckSimilarPersonAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckSimilarPersonOutcomeCallable CheckSimilarPersonCallable(const Model::CheckSimilarPersonRequest& request);

                /**
                 *This API is used to calculate the similarity of faces in two images and return the face similarity score.

If you need to judge "whether the person in the image is someone specified" in scenarios such as face login, i.e., checking whether the person in a given image is someone with a known identity, you are recommended to use the [VerifyFace](https://cloud.tencent.com/document/product/867/32806) or [VerifyPerson](https://cloud.tencent.com/document/product/867/38879) API.

>     
- Please use the signature algorithm v3 to calculate the signature in the common parameters, that is, set the `SignatureMethod` parameter to `TC3-HMAC-SHA256`.
                 * @param req CompareFaceRequest
                 * @return CompareFaceOutcome
                 */
                CompareFaceOutcome CompareFace(const Model::CompareFaceRequest &request);
                void CompareFaceAsync(const Model::CompareFaceRequest& request, const CompareFaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CompareFaceOutcomeCallable CompareFaceCallable(const Model::CompareFaceRequest& request);

                /**
                 *This API is used to copy a person in a group to another group (without copying the description). One person can exist in up to 100 groups at the same time.
>     
- Note: if the version of the algorithm model was 2.0 when the person was created, the copy operation will fail if it is to copy to a group not on algorithm model v2.0.
                 * @param req CopyPersonRequest
                 * @return CopyPersonOutcome
                 */
                CopyPersonOutcome CopyPerson(const Model::CopyPersonRequest &request);
                void CopyPersonAsync(const Model::CopyPersonRequest& request, const CopyPersonAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CopyPersonOutcomeCallable CopyPersonCallable(const Model::CopyPersonRequest& request);

                /**
                 *This API is used to add a set of face images to a person. One person can have up to 5 images. If a person exists in multiple groups, the images will be added to all those groups for the person.

>     
- Please use the signature algorithm v3 to calculate the signature in the common parameters, that is, set the `SignatureMethod` parameter to `TC3-HMAC-SHA256`.
                 * @param req CreateFaceRequest
                 * @return CreateFaceOutcome
                 */
                CreateFaceOutcome CreateFace(const Model::CreateFaceRequest &request);
                void CreateFaceAsync(const Model::CreateFaceRequest& request, const CreateFaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateFaceOutcomeCallable CreateFaceCallable(const Model::CreateFaceRequest& request);

                /**
                 *This API is used to create an empty group. If the group already exists, an error will be returned.
Custom description fields can be created as needed to describe persons in the group.

A maximum of 100,000 groups or 50 million faces can be created under one `APPID`.

The maximum number of faces that can be included in one group varies by algorithm model version (`FaceModelVersion`), which is 1 million for v2.0 or 3 million for v3.0.
                 * @param req CreateGroupRequest
                 * @return CreateGroupOutcome
                 */
                CreateGroupOutcome CreateGroup(const Model::CreateGroupRequest &request);
                void CreateGroupAsync(const Model::CreateGroupRequest& request, const CreateGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateGroupOutcomeCallable CreateGroupCallable(const Model::CreateGroupRequest& request);

                /**
                 *This API is used to create a person and add face, name, gender, and other related information.

>     
- Please use the signature algorithm v3 to calculate the signature in the common parameters, that is, set the `SignatureMethod` parameter to `TC3-HMAC-SHA256`.
                 * @param req CreatePersonRequest
                 * @return CreatePersonOutcome
                 */
                CreatePersonOutcome CreatePerson(const Model::CreatePersonRequest &request);
                void CreatePersonAsync(const Model::CreatePersonRequest& request, const CreatePersonAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePersonOutcomeCallable CreatePersonCallable(const Model::CreatePersonRequest& request);

                /**
                 *This API is used to delete the face images of a person. If the person has only one face image, an error will be returned.
                 * @param req DeleteFaceRequest
                 * @return DeleteFaceOutcome
                 */
                DeleteFaceOutcome DeleteFace(const Model::DeleteFaceRequest &request);
                void DeleteFaceAsync(const Model::DeleteFaceRequest& request, const DeleteFaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteFaceOutcomeCallable DeleteFaceCallable(const Model::DeleteFaceRequest& request);

                /**
                 *This API is used to delete a group and all persons in it. Meanwhile, all face information corresponding to the persons will be deleted. If a person exists in multiple groups at the same time, deleting a group will not delete the person, but the custom description field information in the group will be deleted. Custom description field information in other groups will not be affected.

                 * @param req DeleteGroupRequest
                 * @return DeleteGroupOutcome
                 */
                DeleteGroupOutcome DeleteGroup(const Model::DeleteGroupRequest &request);
                void DeleteGroupAsync(const Model::DeleteGroupRequest& request, const DeleteGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteGroupOutcomeCallable DeleteGroupCallable(const Model::DeleteGroupRequest& request);

                /**
                 *This API is used to delete a person from all groups. Meanwhile, all face information of the person will be deleted.
                 * @param req DeletePersonRequest
                 * @return DeletePersonOutcome
                 */
                DeletePersonOutcome DeletePerson(const Model::DeletePersonRequest &request);
                void DeletePersonAsync(const Model::DeletePersonRequest& request, const DeletePersonAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeletePersonOutcomeCallable DeletePersonCallable(const Model::DeletePersonRequest& request);

                /**
                 *This API is used to remove a person from a specified group. This operation only affects the group. If the person exists only in the group, the person will be deleted, and all face information of the person will also be deleted.
                 * @param req DeletePersonFromGroupRequest
                 * @return DeletePersonFromGroupOutcome
                 */
                DeletePersonFromGroupOutcome DeletePersonFromGroup(const Model::DeletePersonFromGroupRequest &request);
                void DeletePersonFromGroupAsync(const Model::DeletePersonFromGroupRequest& request, const DeletePersonFromGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeletePersonFromGroupOutcomeCallable DeletePersonFromGroupCallable(const Model::DeletePersonFromGroupRequest& request);

                /**
                 *This API is used to detect the position, attributes, and quality information of a face in the given image. The position information includes (x, y, w, h); the face attributes include gender, age, expression, beauty, glass, hair, mask, and pose (pitch, roll, yaw); and the face quality information includes the overall quality score, sharpness, brightness, and completeness.

 
The face quality information is mainly used to evaluate the quality of the input face image. When using the Face Recognition service, you are recommended to evaluate the quality of the input face image first to improve the effects of subsequent processing. Application scenarios of this feature include:

1). [Creating](https://cloud.tencent.com/document/product/867/32793)/[Adding](https://cloud.tencent.com/document/product/867/32795) a person in a group: this is to ensure the quality of the face information to facilitate subsequent processing.

2). [Face search](https://cloud.tencent.com/document/product/867/32798): this is to ensure the quality of the input image to quickly find the corresponding person.

3). [Face verification](https://cloud.tencent.com/document/product/867/32806): this is to ensure the quality of the face information to avoid cases where the verification incorrectly fails.

4). [Face fusion](https://cloud.tencent.com/product/facefusion): this is to ensure the quality of the uploaded face images to improve the fusion effect.

>     
- Please use the signature algorithm v3 to calculate the signature in the common parameters, that is, set the `SignatureMethod` parameter to `TC3-HMAC-SHA256`.


                 * @param req DetectFaceRequest
                 * @return DetectFaceOutcome
                 */
                DetectFaceOutcome DetectFace(const Model::DetectFaceRequest &request);
                void DetectFaceAsync(const Model::DetectFaceRequest& request, const DetectFaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DetectFaceOutcomeCallable DetectFaceCallable(const Model::DetectFaceRequest& request);

                /**
                 *This API is used to detect the liveness of a user with a user-uploaded image. Its difference from video-based liveness detection lies in that the user does not need to speak, shake their head, or wink for detection.

Image-based liveness detection is suitable for scenarios where the image is a selfie or the requirement for attack defense is not high. If you have a higher security requirement for liveness detection, please use [Faceid](https://cloud.tencent.com/product/faceid).

>     
- The aspect ratio of the image should be close to 3:4 (width:height); otherwise, the score returned for the image will be meaningless. This API is suitable for selfie scenarios, and the score returned in other scenarios will be meaningless.

>     
- Please use the signature algorithm v3 to calculate the signature in the common parameters, that is, set the `SignatureMethod` parameter to `TC3-HMAC-SHA256`.
                 * @param req DetectLiveFaceRequest
                 * @return DetectLiveFaceOutcome
                 */
                DetectLiveFaceOutcome DetectLiveFace(const Model::DetectLiveFaceRequest &request);
                void DetectLiveFaceAsync(const Model::DetectLiveFaceRequest& request, const DetectLiveFaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DetectLiveFaceOutcomeCallable DetectLiveFaceCallable(const Model::DetectLiveFaceRequest& request);

                /**
                 *This API is used to get the estimated duration of a duplicate person check task.

If the `EndTimestamp` meets your expectations, please initiate the duplicate person check request as soon as possible; otherwise, the task may take more time.

If the estimated duration is more than 5 hours, the duplicate person check feature cannot be used.
                 * @param req EstimateCheckSimilarPersonCostTimeRequest
                 * @return EstimateCheckSimilarPersonCostTimeOutcome
                 */
                EstimateCheckSimilarPersonCostTimeOutcome EstimateCheckSimilarPersonCostTime(const Model::EstimateCheckSimilarPersonCostTimeRequest &request);
                void EstimateCheckSimilarPersonCostTimeAsync(const Model::EstimateCheckSimilarPersonCostTimeRequest& request, const EstimateCheckSimilarPersonCostTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EstimateCheckSimilarPersonCostTimeOutcomeCallable EstimateCheckSimilarPersonCostTimeCallable(const Model::EstimateCheckSimilarPersonCostTimeRequest& request);

                /**
                 *This API is used to get the list of duplicate person check tasks and sort them in reverse order by task creation time (i.e., the newest one is at the top)

Only data in the past year is retained.
                 * @param req GetCheckSimilarPersonJobIdListRequest
                 * @return GetCheckSimilarPersonJobIdListOutcome
                 */
                GetCheckSimilarPersonJobIdListOutcome GetCheckSimilarPersonJobIdList(const Model::GetCheckSimilarPersonJobIdListRequest &request);
                void GetCheckSimilarPersonJobIdListAsync(const Model::GetCheckSimilarPersonJobIdListRequest& request, const GetCheckSimilarPersonJobIdListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetCheckSimilarPersonJobIdListOutcomeCallable GetCheckSimilarPersonJobIdListCallable(const Model::GetCheckSimilarPersonJobIdListRequest& request);

                /**
                 *This API is used to get the group information.
                 * @param req GetGroupInfoRequest
                 * @return GetGroupInfoOutcome
                 */
                GetGroupInfoOutcome GetGroupInfo(const Model::GetGroupInfoRequest &request);
                void GetGroupInfoAsync(const Model::GetGroupInfoRequest& request, const GetGroupInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetGroupInfoOutcomeCallable GetGroupInfoCallable(const Model::GetGroupInfoRequest& request);

                /**
                 *This API is used to get the list of groups.
                 * @param req GetGroupListRequest
                 * @return GetGroupListOutcome
                 */
                GetGroupListOutcome GetGroupList(const Model::GetGroupListRequest &request);
                void GetGroupListAsync(const Model::GetGroupListRequest& request, const GetGroupListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetGroupListOutcomeCallable GetGroupListCallable(const Model::GetGroupListRequest& request);

                /**
                 *This API is used to get the information of a specified person, including name, gender, face, etc.
                 * @param req GetPersonBaseInfoRequest
                 * @return GetPersonBaseInfoOutcome
                 */
                GetPersonBaseInfoOutcome GetPersonBaseInfo(const Model::GetPersonBaseInfoRequest &request);
                void GetPersonBaseInfoAsync(const Model::GetPersonBaseInfoRequest& request, const GetPersonBaseInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetPersonBaseInfoOutcomeCallable GetPersonBaseInfoCallable(const Model::GetPersonBaseInfoRequest& request);

                /**
                 *This API is used to get the information of a specified person, including group, description, etc.
                 * @param req GetPersonGroupInfoRequest
                 * @return GetPersonGroupInfoOutcome
                 */
                GetPersonGroupInfoOutcome GetPersonGroupInfo(const Model::GetPersonGroupInfoRequest &request);
                void GetPersonGroupInfoAsync(const Model::GetPersonGroupInfoRequest& request, const GetPersonGroupInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetPersonGroupInfoOutcomeCallable GetPersonGroupInfoCallable(const Model::GetPersonGroupInfoRequest& request);

                /**
                 *This API is used to get the list of persons in a specified group.
                 * @param req GetPersonListRequest
                 * @return GetPersonListOutcome
                 */
                GetPersonListOutcome GetPersonList(const Model::GetPersonListRequest &request);
                void GetPersonListAsync(const Model::GetPersonListRequest& request, const GetPersonListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetPersonListOutcomeCallable GetPersonListCallable(const Model::GetPersonListRequest& request);

                /**
                 *This API is used to get the number of persons in a specified group.
                 * @param req GetPersonListNumRequest
                 * @return GetPersonListNumOutcome
                 */
                GetPersonListNumOutcome GetPersonListNum(const Model::GetPersonListNumRequest &request);
                void GetPersonListNumAsync(const Model::GetPersonListNumRequest& request, const GetPersonListNumAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetPersonListNumOutcomeCallable GetPersonListNumCallable(const Model::GetPersonListNumRequest& request);

                /**
                 *This API is used to get the result of the `CheckSimilarPerson` API.
                 * @param req GetSimilarPersonResultRequest
                 * @return GetSimilarPersonResultOutcome
                 */
                GetSimilarPersonResultOutcome GetSimilarPersonResult(const Model::GetSimilarPersonResultRequest &request);
                void GetSimilarPersonResultAsync(const Model::GetSimilarPersonResultRequest& request, const GetSimilarPersonResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetSimilarPersonResultOutcomeCallable GetSimilarPersonResultCallable(const Model::GetSimilarPersonResultRequest& request);

                /**
                 *This API is used to modify the name, tag, and custom description field of a group.
                 * @param req ModifyGroupRequest
                 * @return ModifyGroupOutcome
                 */
                ModifyGroupOutcome ModifyGroup(const Model::ModifyGroupRequest &request);
                void ModifyGroupAsync(const Model::ModifyGroupRequest& request, const ModifyGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyGroupOutcomeCallable ModifyGroupCallable(const Model::ModifyGroupRequest& request);

                /**
                 *This API is used to modify the information of a person, including name, gender, etc. The changes of person name and gender will be synced to all the groups that contain the person.
                 * @param req ModifyPersonBaseInfoRequest
                 * @return ModifyPersonBaseInfoOutcome
                 */
                ModifyPersonBaseInfoOutcome ModifyPersonBaseInfo(const Model::ModifyPersonBaseInfoRequest &request);
                void ModifyPersonBaseInfoAsync(const Model::ModifyPersonBaseInfoRequest& request, const ModifyPersonBaseInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyPersonBaseInfoOutcomeCallable ModifyPersonBaseInfoCallable(const Model::ModifyPersonBaseInfoRequest& request);

                /**
                 *This API is used to modify the description of a specified person in a group.
                 * @param req ModifyPersonGroupInfoRequest
                 * @return ModifyPersonGroupInfoOutcome
                 */
                ModifyPersonGroupInfoOutcome ModifyPersonGroupInfo(const Model::ModifyPersonGroupInfoRequest &request);
                void ModifyPersonGroupInfoAsync(const Model::ModifyPersonGroupInfoRequest& request, const ModifyPersonGroupInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyPersonGroupInfoOutcomeCallable ModifyPersonGroupInfoCallable(const Model::ModifyPersonGroupInfoRequest& request);

                /**
                 *This API is used to recognize top K persons in one or more groups who are similar to the person in a given image and rank the similarity in a descending order.

Up to 10 faces in an image can be recognized at a time, and up to 100 groups can be searched in at a time.

The maximum number of faces in a group that can be searched for at a time is subject to the group's algorithm model version (`FaceModelVersion`), which is 1 million for v2.0 or 3 million for v3.0.

This API recognizes each face of a person as an independent one. By contrast, the [SearchPersons](https://cloud.tencent.com/document/product/867/38881) and [SearchPersonsReturnsByGroup](https://cloud.tencent.com/document/product/867/38880) APIs fuse the features of all faces of a person; for example, if a person has 4 faces, they will fuse the features of the 4 faces and generate the summarized facial features of the person to make the search more accurate.


This API should be used together with the [CreateGroup API](https://cloud.tencent.com/document/product/867/32794).

>     
- Please use the signature algorithm v3 to calculate the signature in the common parameters, that is, set the `SignatureMethod` parameter to `TC3-HMAC-SHA256`.
                 * @param req SearchFacesRequest
                 * @return SearchFacesOutcome
                 */
                SearchFacesOutcome SearchFaces(const Model::SearchFacesRequest &request);
                void SearchFacesAsync(const Model::SearchFacesRequest& request, const SearchFacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SearchFacesOutcomeCallable SearchFacesCallable(const Model::SearchFacesRequest& request);

                /**
                 *This API is used to recognize top K persons in one or more groups who are similar to the person in a given image, display the results **by group**, and rank the similarity within each group in a descending order.

Up to 10 faces in the image can be recognized at a time, and cross-group search is supported.

The maximum number of faces in a group that can be searched for at a time is subject to the group's algorithm model version (`FaceModelVersion`), which is 1 million for v2.0 or 3 million for v3.0.

This API recognizes each face of a person as an independent one. By contrast, the [SearchPersons](https://cloud.tencent.com/document/product/867/38881) and [SearchPersonsReturnsByGroup](https://cloud.tencent.com/document/product/867/38880) APIs fuse the features of all faces of a person; for example, if a person has 4 faces, they will fuse the features of the 4 faces and generate the summarized facial features of the person to make the search more accurate.

This API should be used together with the [CreateGroup API](https://cloud.tencent.com/document/product/867/32794).

>     
- Please use the signature algorithm v3 to calculate the signature in the common parameters, that is, set the `SignatureMethod` parameter to `TC3-HMAC-SHA256`.


                 * @param req SearchFacesReturnsByGroupRequest
                 * @return SearchFacesReturnsByGroupOutcome
                 */
                SearchFacesReturnsByGroupOutcome SearchFacesReturnsByGroup(const Model::SearchFacesReturnsByGroupRequest &request);
                void SearchFacesReturnsByGroupAsync(const Model::SearchFacesReturnsByGroupRequest& request, const SearchFacesReturnsByGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SearchFacesReturnsByGroupOutcomeCallable SearchFacesReturnsByGroupCallable(const Model::SearchFacesReturnsByGroupRequest& request);

                /**
                 *This API is used to recognize top K persons in one or more groups who are similar to the person in a given image and rank the similarity in a descending order.

Up to 10 faces in an image can be recognized at a time, and up to 100 groups can be searched in at a time.

The maximum number of faces in a group that can be searched for at a time is subject to the group's algorithm model version (`FaceModelVersion`), which is 1 million for v2.0 or 3 million for v3.0.

This API fuses the features of all faces of a person; for example, if a person has 4 faces, it will fuse the features of the 4 faces and generate the summarized facial features of the person to make the person search (i.e., judging whether the face image to be recognized is of a specified person) more accurate. By contrast, the [SearchFaces](https://cloud.tencent.com/document/product/867/32798) and [SearchFacesReturnsByGroup](https://cloud.tencent.com/document/product/867/38882) APIs recognize each face of a person as an independent one for search.

>     
- Please use the signature algorithm v3 to calculate the signature in the common parameters, that is, set the `SignatureMethod` parameter to `TC3-HMAC-SHA256`.
- This feature is available only to groups whose algorithm model version (`FaceModelVersion`) is 3.0.
                 * @param req SearchPersonsRequest
                 * @return SearchPersonsOutcome
                 */
                SearchPersonsOutcome SearchPersons(const Model::SearchPersonsRequest &request);
                void SearchPersonsAsync(const Model::SearchPersonsRequest& request, const SearchPersonsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SearchPersonsOutcomeCallable SearchPersonsCallable(const Model::SearchPersonsRequest& request);

                /**
                 *This API is used to recognize top K persons in one or more groups who are similar to the person in a given image, display the results **by group**, and rank the similarity within each group in a descending order.

Up to 10 faces in the image can be recognized at a time, and cross-group search is supported.

The maximum number of faces in a group that can be searched for at a time is subject to the group's algorithm model version (`FaceModelVersion`), which is 1 million for v2.0 or 3 million for v3.0.

This API fuses the features of all faces of a person; for example, if a person has 4 faces, it will fuse the features of the 4 faces and generate the summarized facial features of the person to make the person search (i.e., judging whether the face image to be recognized is of a specified person) more accurate. By contrast, the [SearchFaces](https://cloud.tencent.com/document/product/867/32798) and [SearchFacesReturnsByGroup](https://cloud.tencent.com/document/product/867/38882) APIs recognize each face of a person as an independent one for search.
>     
- Please use the signature algorithm v3 to calculate the signature in the common parameters, that is, set the `SignatureMethod` parameter to `TC3-HMAC-SHA256`.
- This feature is available only to groups whose algorithm model version (`FaceModelVersion`) is 3.0.
                 * @param req SearchPersonsReturnsByGroupRequest
                 * @return SearchPersonsReturnsByGroupOutcome
                 */
                SearchPersonsReturnsByGroupOutcome SearchPersonsReturnsByGroup(const Model::SearchPersonsReturnsByGroupRequest &request);
                void SearchPersonsReturnsByGroupAsync(const Model::SearchPersonsReturnsByGroupRequest& request, const SearchPersonsReturnsByGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SearchPersonsReturnsByGroupOutcomeCallable SearchPersonsReturnsByGroupCallable(const Model::SearchPersonsReturnsByGroupRequest& request);

                /**
                 *This API is used to judge whether a person in an image corresponds to a given `PersonId`. For more information on `PersonId`, please see [CreateGroup](https://cloud.tencent.com/document/product/867/32794). 

Unlike the [CompareFace](https://cloud.tencent.com/document/product/867/32802) API that is used to judge the similarity between two faces, this API is used to judge "whether the person in the image is someone specified" whose information is stored in a group. This "someone" may have multiple face images.

This API recognizes each face of a person as an independent one. By contrast, the [VerifyPerson](https://cloud.tencent.com/document/product/867/38879) API fuses the features of all faces of a person; for example, if a person has 4 faces, it will fuse the features of the 4 faces and generate the summarized facial features of the person to make the person verification (i.e., judging whether the face image to be recognized is of a specified person) more accurate.

>     
- Please use the signature algorithm v3 to calculate the signature in the common parameters, that is, set the `SignatureMethod` parameter to `TC3-HMAC-SHA256`.
                 * @param req VerifyFaceRequest
                 * @return VerifyFaceOutcome
                 */
                VerifyFaceOutcome VerifyFace(const Model::VerifyFaceRequest &request);
                void VerifyFaceAsync(const Model::VerifyFaceRequest& request, const VerifyFaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                VerifyFaceOutcomeCallable VerifyFaceCallable(const Model::VerifyFaceRequest& request);

                /**
                 *This API is used to judge whether a person in an image corresponds to a given `PersonId`. For more information on `PersonId`, please see [CreateGroup](https://cloud.tencent.com/document/product/867/32794).
This API fuses the features of all faces of a person; for example, if a person has 4 faces, it will fuse the features of the 4 faces and generate the summarized facial features of the person to make the person verification (i.e., judging whether the face image to be recognized is of a specified person) more accurate.

 Unlike the `CompareFace` API that is used to judge the similarity between two faces, this API is used to judge "whether the person in the image is someone specified" whose information is stored in a group. This "someone" may have multiple face images.


>     
- Please use the signature algorithm v3 to calculate the signature in the common parameters, that is, set the `SignatureMethod` parameter to `TC3-HMAC-SHA256`.
- This feature is available only to groups whose algorithm model version (`FaceModelVersion`) is 3.0.
                 * @param req VerifyPersonRequest
                 * @return VerifyPersonOutcome
                 */
                VerifyPersonOutcome VerifyPerson(const Model::VerifyPersonRequest &request);
                void VerifyPersonAsync(const Model::VerifyPersonRequest& request, const VerifyPersonAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                VerifyPersonOutcomeCallable VerifyPersonCallable(const Model::VerifyPersonRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_IAI_V20200303_IAICLIENT_H_
