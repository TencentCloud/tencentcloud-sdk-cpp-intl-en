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

#ifndef TENCENTCLOUD_IAI_V20200303_MODEL_GETPERSONLISTRESPONSE_H_
#define TENCENTCLOUD_IAI_V20200303_MODEL_GETPERSONLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iai/v20200303/model/PersonInfo.h>


namespace TencentCloud
{
    namespace Iai
    {
        namespace V20200303
        {
            namespace Model
            {
                /**
                * GetPersonList response structure.
                */
                class GetPersonListResponse : public AbstractModel
                {
                public:
                    GetPersonListResponse();
                    ~GetPersonListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取Returned person information
                     * @return PersonInfos Returned person information
                     */
                    std::vector<PersonInfo> GetPersonInfos() const;

                    /**
                     * 判断参数 PersonInfos 是否已赋值
                     * @return PersonInfos 是否已赋值
                     */
                    bool PersonInfosHasBeenSet() const;

                    /**
                     * 获取Number of persons in the group
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return PersonNum Number of persons in the group
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetPersonNum() const;

                    /**
                     * 判断参数 PersonNum 是否已赋值
                     * @return PersonNum 是否已赋值
                     */
                    bool PersonNumHasBeenSet() const;

                    /**
                     * 获取Number of faces in the group
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return FaceNum Number of faces in the group
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetFaceNum() const;

                    /**
                     * 判断参数 FaceNum 是否已赋值
                     * @return FaceNum 是否已赋值
                     */
                    bool FaceNumHasBeenSet() const;

                    /**
                     * 获取Algorithm model version used for face recognition.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return FaceModelVersion Algorithm model version used for face recognition.
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
                     * Returned person information
                     */
                    std::vector<PersonInfo> m_personInfos;
                    bool m_personInfosHasBeenSet;

                    /**
                     * Number of persons in the group
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_personNum;
                    bool m_personNumHasBeenSet;

                    /**
                     * Number of faces in the group
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_faceNum;
                    bool m_faceNumHasBeenSet;

                    /**
                     * Algorithm model version used for face recognition.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_faceModelVersion;
                    bool m_faceModelVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IAI_V20200303_MODEL_GETPERSONLISTRESPONSE_H_
