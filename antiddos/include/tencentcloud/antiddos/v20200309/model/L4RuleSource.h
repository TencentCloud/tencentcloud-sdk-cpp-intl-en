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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_L4RULESOURCE_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_L4RULESOURCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * List of layer-4 forwarding rules
                */
                class L4RuleSource : public AbstractModel
                {
                public:
                    L4RuleSource();
                    ~L4RuleSource() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取IP or domain name for forwarding.
                     * @return Source IP or domain name for forwarding.
                     */
                    std::string GetSource() const;

                    /**
                     * 设置IP or domain name for forwarding.
                     * @param Source IP or domain name for forwarding.
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取Weight. Value range: [0,100].
                     * @return Weight Weight. Value range: [0,100].
                     */
                    uint64_t GetWeight() const;

                    /**
                     * 设置Weight. Value range: [0,100].
                     * @param Weight Weight. Value range: [0,100].
                     */
                    void SetWeight(const uint64_t& _weight);

                    /**
                     * 判断参数 Weight 是否已赋值
                     * @return Weight 是否已赋值
                     */
                    bool WeightHasBeenSet() const;

                    /**
                     * 获取8000
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Port 8000
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    uint64_t GetPort() const;

                    /**
                     * 设置8000
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param Port 8000
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetPort(const uint64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取Secondary origin server. `1`: secondary origin server; `0`: general origin server.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return Backup Secondary origin server. `1`: secondary origin server; `0`: general origin server.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    uint64_t GetBackup() const;

                    /**
                     * 设置Secondary origin server. `1`: secondary origin server; `0`: general origin server.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param Backup Secondary origin server. `1`: secondary origin server; `0`: general origin server.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetBackup(const uint64_t& _backup);

                    /**
                     * 判断参数 Backup 是否已赋值
                     * @return Backup 是否已赋值
                     */
                    bool BackupHasBeenSet() const;

                private:

                    /**
                     * IP or domain name for forwarding.
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * Weight. Value range: [0,100].
                     */
                    uint64_t m_weight;
                    bool m_weightHasBeenSet;

                    /**
                     * 8000
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    uint64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * Secondary origin server. `1`: secondary origin server; `0`: general origin server.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    uint64_t m_backup;
                    bool m_backupHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_L4RULESOURCE_H_
