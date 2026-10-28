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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_EXPIRATIONAWARENESS_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_EXPIRATIONAWARENESS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * Timeliness retrieval enhancement configuration
                */
                class ExpirationAwareness : public AbstractModel
                {
                public:
                    ExpirationAwareness();
                    ~ExpirationAwareness() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Whether to enable timeliness retrieval. Once enabled, retrieval results will be sorted based on the validity time of the knowledge</p>
                     * @return Enabled <p>Whether to enable timeliness retrieval. Once enabled, retrieval results will be sorted based on the validity time of the knowledge</p>
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置<p>Whether to enable timeliness retrieval. Once enabled, retrieval results will be sorted based on the validity time of the knowledge</p>
                     * @param _enabled <p>Whether to enable timeliness retrieval. Once enabled, retrieval results will be sorted based on the validity time of the knowledge</p>
                     * 
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                private:

                    /**
                     * <p>Whether to enable timeliness retrieval. Once enabled, retrieval results will be sorted based on the validity time of the knowledge</p>
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_EXPIRATIONAWARENESS_H_
