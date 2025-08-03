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

#ifndef TENCENTCLOUD_BI_V20220105_MODEL_APPLYEMBEDTOKENINFO_H_
#define TENCENTCLOUD_BI_V20220105_MODEL_APPLYEMBEDTOKENINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bi
    {
        namespace V20220105
        {
            namespace Model
            {
                /**
                * Token deferral request
                */
                class ApplyEmbedTokenInfo : public AbstractModel
                {
                public:
                    ApplyEmbedTokenInfo();
                    ~ApplyEmbedTokenInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Request result.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Result Request result.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetResult() const;

                    /**
                     * 设置Request result.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _result Request result.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetResult(const bool& _result);

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                private:

                    /**
                     * Request result.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_result;
                    bool m_resultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_MODEL_APPLYEMBEDTOKENINFO_H_
