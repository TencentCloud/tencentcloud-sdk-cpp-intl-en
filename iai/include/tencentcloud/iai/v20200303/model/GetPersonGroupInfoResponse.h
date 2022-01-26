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

#ifndef TENCENTCLOUD_IAI_V20200303_MODEL_GETPERSONGROUPINFORESPONSE_H_
#define TENCENTCLOUD_IAI_V20200303_MODEL_GETPERSONGROUPINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iai/v20200303/model/PersonGroupInfo.h>


namespace TencentCloud
{
    namespace Iai
    {
        namespace V20200303
        {
            namespace Model
            {
                /**
                * GetPersonGroupInfo response structure.
                */
                class GetPersonGroupInfoResponse : public AbstractModel
                {
                public:
                    GetPersonGroupInfoResponse();
                    ~GetPersonGroupInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取List of groups containing this person and their description fields
                     * @return PersonGroupInfos List of groups containing this person and their description fields
                     */
                    std::vector<PersonGroupInfo> GetPersonGroupInfos() const;

                    /**
                     * 判断参数 PersonGroupInfos 是否已赋值
                     * @return PersonGroupInfos 是否已赋值
                     */
                    bool PersonGroupInfosHasBeenSet() const;

                    /**
                     * 获取Total number of groups
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return GroupNum Total number of groups
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetGroupNum() const;

                    /**
                     * 判断参数 GroupNum 是否已赋值
                     * @return GroupNum 是否已赋值
                     */
                    bool GroupNumHasBeenSet() const;

                    /**
                     * 获取Algorithm model version used by the Face Recognition service.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return FaceModelVersion Algorithm model version used by the Face Recognition service.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetFaceModelVersion() const;

                    /**
                     * 判断参数 FaceModelVersion 是否已赋值
                     * @return FaceModelVersion 是否已赋值
                     */
                    bool FaceModelVersionHasBeenSet() const;

                private:

                    /**
                     * List of groups containing this person and their description fields
                     */
                    std::vector<PersonGroupInfo> m_personGroupInfos;
                    bool m_personGroupInfosHasBeenSet;

                    /**
                     * Total number of groups
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_groupNum;
                    bool m_groupNumHasBeenSet;

                    /**
                     * Algorithm model version used by the Face Recognition service.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_faceModelVersion;
                    bool m_faceModelVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IAI_V20200303_MODEL_GETPERSONGROUPINFORESPONSE_H_
