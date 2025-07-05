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

#ifndef TENCENTCLOUD_CIAM_V20220331_MODEL_SALT_H_
#define TENCENTCLOUD_CIAM_V20220331_MODEL_SALT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ciam/v20220331/model/SaltLocation.h>


namespace TencentCloud
{
    namespace Ciam
    {
        namespace V20220331
        {
            namespace Model
            {
                /**
                * Password salt
                */
                class Salt : public AbstractModel
                {
                public:
                    Salt();
                    ~Salt() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Salt value
                     * @return SaltValue Salt value
                     * 
                     */
                    std::string GetSaltValue() const;

                    /**
                     * 设置Salt value
                     * @param _saltValue Salt value
                     * 
                     */
                    void SetSaltValue(const std::string& _saltValue);

                    /**
                     * 判断参数 SaltValue 是否已赋值
                     * @return SaltValue 是否已赋值
                     * 
                     */
                    bool SaltValueHasBeenSet() const;

                    /**
                     * 获取Salt value location
                     * @return SaltLocation Salt value location
                     * 
                     */
                    SaltLocation GetSaltLocation() const;

                    /**
                     * 设置Salt value location
                     * @param _saltLocation Salt value location
                     * 
                     */
                    void SetSaltLocation(const SaltLocation& _saltLocation);

                    /**
                     * 判断参数 SaltLocation 是否已赋值
                     * @return SaltLocation 是否已赋值
                     * 
                     */
                    bool SaltLocationHasBeenSet() const;

                private:

                    /**
                     * Salt value
                     */
                    std::string m_saltValue;
                    bool m_saltValueHasBeenSet;

                    /**
                     * Salt value location
                     */
                    SaltLocation m_saltLocation;
                    bool m_saltLocationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CIAM_V20220331_MODEL_SALT_H_
