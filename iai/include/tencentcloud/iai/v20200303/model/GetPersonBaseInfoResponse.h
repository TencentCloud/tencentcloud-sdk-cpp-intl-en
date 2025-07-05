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

#ifndef TENCENTCLOUD_IAI_V20200303_MODEL_GETPERSONBASEINFORESPONSE_H_
#define TENCENTCLOUD_IAI_V20200303_MODEL_GETPERSONBASEINFORESPONSE_H_

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
                * GetPersonBaseInfo response structure.
                */
                class GetPersonBaseInfoResponse : public AbstractModel
                {
                public:
                    GetPersonBaseInfoResponse();
                    ~GetPersonBaseInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Person name
                     * @return PersonName Person name
                     * 
                     */
                    std::string GetPersonName() const;

                    /**
                     * 判断参数 PersonName 是否已赋值
                     * @return PersonName 是否已赋值
                     * 
                     */
                    bool PersonNameHasBeenSet() const;

                    /**
                     * 获取Person gender. 0: empty; 1: male; 2: female.
                     * @return Gender Person gender. 0: empty; 1: male; 2: female.
                     * 
                     */
                    int64_t GetGender() const;

                    /**
                     * 判断参数 Gender 是否已赋值
                     * @return Gender 是否已赋值
                     * 
                     */
                    bool GenderHasBeenSet() const;

                    /**
                     * 获取List of the IDs of included faces
                     * @return FaceIds List of the IDs of included faces
                     * 
                     */
                    std::vector<std::string> GetFaceIds() const;

                    /**
                     * 判断参数 FaceIds 是否已赋值
                     * @return FaceIds 是否已赋值
                     * 
                     */
                    bool FaceIdsHasBeenSet() const;

                private:

                    /**
                     * Person name
                     */
                    std::string m_personName;
                    bool m_personNameHasBeenSet;

                    /**
                     * Person gender. 0: empty; 1: male; 2: female.
                     */
                    int64_t m_gender;
                    bool m_genderHasBeenSet;

                    /**
                     * List of the IDs of included faces
                     */
                    std::vector<std::string> m_faceIds;
                    bool m_faceIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IAI_V20200303_MODEL_GETPERSONBASEINFORESPONSE_H_
