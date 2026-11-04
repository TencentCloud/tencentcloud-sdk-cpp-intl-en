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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_APPSTATUSINFO_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_APPSTATUSINFO_H_

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
                * Application status information - runtime status information (non-modifiable by users)
                */
                class AppStatusInfo : public AbstractModel
                {
                public:
                    AppStatusInfo();
                    ~AppStatusInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Application status</p><p>Enumeration values:</p><ul><li>1: not launched</li><li>2: running</li><li>3: disabled</li><li>4: importing</li></ul>
                     * @return Status <p>Application status</p><p>Enumeration values:</p><ul><li>1: not launched</li><li>2: running</li><li>3: disabled</li><li>4: importing</li></ul>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>Application status</p><p>Enumeration values:</p><ul><li>1: not launched</li><li>2: running</li><li>3: disabled</li><li>4: importing</li></ul>
                     * @param _status <p>Application status</p><p>Enumeration values:</p><ul><li>1: not launched</li><li>2: running</li><li>3: disabled</li><li>4: importing</li></ul>
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>Status description.</p>
                     * @return StatusDescription <p>Status description.</p>
                     * 
                     */
                    std::string GetStatusDescription() const;

                    /**
                     * 设置<p>Status description.</p>
                     * @param _statusDescription <p>Status description.</p>
                     * 
                     */
                    void SetStatusDescription(const std::string& _statusDescription);

                    /**
                     * 判断参数 StatusDescription 是否已赋值
                     * @return StatusDescription 是否已赋值
                     * 
                     */
                    bool StatusDescriptionHasBeenSet() const;

                private:

                    /**
                     * <p>Application status</p><p>Enumeration values:</p><ul><li>1: not launched</li><li>2: running</li><li>3: disabled</li><li>4: importing</li></ul>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Status description.</p>
                     */
                    std::string m_statusDescription;
                    bool m_statusDescriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_APPSTATUSINFO_H_
