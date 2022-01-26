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

#ifndef TENCENTCLOUD_IAI_V20200303_MODEL_DELETEFACEREQUEST_H_
#define TENCENTCLOUD_IAI_V20200303_MODEL_DELETEFACEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iai
    {
        namespace V20200303
        {
            namespace Model
            {
                /**
                * DeleteFace request structure.
                */
                class DeleteFaceRequest : public AbstractModel
                {
                public:
                    DeleteFaceRequest();
                    ~DeleteFaceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Person ID, which is the `PersonId` in the `CreatePerson` API.
                     * @return PersonId Person ID, which is the `PersonId` in the `CreatePerson` API.
                     */
                    std::string GetPersonId() const;

                    /**
                     * 设置Person ID, which is the `PersonId` in the `CreatePerson` API.
                     * @param PersonId Person ID, which is the `PersonId` in the `CreatePerson` API.
                     */
                    void SetPersonId(const std::string& _personId);

                    /**
                     * 判断参数 PersonId 是否已赋值
                     * @return PersonId 是否已赋值
                     */
                    bool PersonIdHasBeenSet() const;

                    /**
                     * 获取List of IDs of the faces to be deleted. The array element value is the `FaceId` returned by the `CreateFace` API.
                     * @return FaceIds List of IDs of the faces to be deleted. The array element value is the `FaceId` returned by the `CreateFace` API.
                     */
                    std::vector<std::string> GetFaceIds() const;

                    /**
                     * 设置List of IDs of the faces to be deleted. The array element value is the `FaceId` returned by the `CreateFace` API.
                     * @param FaceIds List of IDs of the faces to be deleted. The array element value is the `FaceId` returned by the `CreateFace` API.
                     */
                    void SetFaceIds(const std::vector<std::string>& _faceIds);

                    /**
                     * 判断参数 FaceIds 是否已赋值
                     * @return FaceIds 是否已赋值
                     */
                    bool FaceIdsHasBeenSet() const;

                private:

                    /**
                     * Person ID, which is the `PersonId` in the `CreatePerson` API.
                     */
                    std::string m_personId;
                    bool m_personIdHasBeenSet;

                    /**
                     * List of IDs of the faces to be deleted. The array element value is the `FaceId` returned by the `CreateFace` API.
                     */
                    std::vector<std::string> m_faceIds;
                    bool m_faceIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IAI_V20200303_MODEL_DELETEFACEREQUEST_H_
