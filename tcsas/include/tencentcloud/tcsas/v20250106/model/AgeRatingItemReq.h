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

#ifndef TENCENTCLOUD_TCSAS_V20250106_MODEL_AGERATINGITEMREQ_H_
#define TENCENTCLOUD_TCSAS_V20250106_MODEL_AGERATINGITEMREQ_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcsas
    {
        namespace V20250106
        {
            namespace Model
            {
                /**
                * Age rating request.
                */
                class AgeRatingItemReq : public AbstractModel
                {
                public:
                    AgeRatingItemReq();
                    ~AgeRatingItemReq() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Age rating standard.</p><p>Valid values:</p><ul><li>apple: Apple</li><li>iarc: Android.</li></ul>
                     * @return StandardId <p>Age rating standard.</p><p>Valid values:</p><ul><li>apple: Apple</li><li>iarc: Android.</li></ul>
                     * 
                     */
                    std::string GetStandardId() const;

                    /**
                     * 设置<p>Age rating standard.</p><p>Valid values:</p><ul><li>apple: Apple</li><li>iarc: Android.</li></ul>
                     * @param _standardId <p>Age rating standard.</p><p>Valid values:</p><ul><li>apple: Apple</li><li>iarc: Android.</li></ul>
                     * 
                     */
                    void SetStandardId(const std::string& _standardId);

                    /**
                     * 判断参数 StandardId 是否已赋值
                     * @return StandardId 是否已赋值
                     * 
                     */
                    bool StandardIdHasBeenSet() const;

                    /**
                     * 获取<p>Applicable age for age rating.</p>
                     * @return AgeRating <p>Applicable age for age rating.</p>
                     * 
                     */
                    int64_t GetAgeRating() const;

                    /**
                     * 设置<p>Applicable age for age rating.</p>
                     * @param _ageRating <p>Applicable age for age rating.</p>
                     * 
                     */
                    void SetAgeRating(const int64_t& _ageRating);

                    /**
                     * 判断参数 AgeRating 是否已赋值
                     * @return AgeRating 是否已赋值
                     * 
                     */
                    bool AgeRatingHasBeenSet() const;

                private:

                    /**
                     * <p>Age rating standard.</p><p>Valid values:</p><ul><li>apple: Apple</li><li>iarc: Android.</li></ul>
                     */
                    std::string m_standardId;
                    bool m_standardIdHasBeenSet;

                    /**
                     * <p>Applicable age for age rating.</p>
                     */
                    int64_t m_ageRating;
                    bool m_ageRatingHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSAS_V20250106_MODEL_AGERATINGITEMREQ_H_
