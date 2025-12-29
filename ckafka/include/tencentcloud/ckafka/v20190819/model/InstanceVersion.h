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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_INSTANCEVERSION_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_INSTANCEVERSION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ckafka/v20190819/model/LatestBrokerVersion.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * Instance version information.
                */
                class InstanceVersion : public AbstractModel
                {
                public:
                    InstanceVersion();
                    ~InstanceVersion() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取CKafka cluster instance version.
                     * @return KafkaVersion CKafka cluster instance version.
                     * 
                     */
                    std::string GetKafkaVersion() const;

                    /**
                     * 设置CKafka cluster instance version.
                     * @param _kafkaVersion CKafka cluster instance version.
                     * 
                     */
                    void SetKafkaVersion(const std::string& _kafkaVersion);

                    /**
                     * 判断参数 KafkaVersion 是否已赋值
                     * @return KafkaVersion 是否已赋值
                     * 
                     */
                    bool KafkaVersionHasBeenSet() const;

                    /**
                     * 获取Broker version information.
                     * @return CurBrokerVersion Broker version information.
                     * 
                     */
                    std::string GetCurBrokerVersion() const;

                    /**
                     * 设置Broker version information.
                     * @param _curBrokerVersion Broker version information.
                     * 
                     */
                    void SetCurBrokerVersion(const std::string& _curBrokerVersion);

                    /**
                     * 判断参数 CurBrokerVersion 是否已赋值
                     * @return CurBrokerVersion 是否已赋值
                     * 
                     */
                    bool CurBrokerVersionHasBeenSet() const;

                    /**
                     * 获取Latest version information.
                     * @return LatestBrokerVersion Latest version information.
                     * 
                     */
                    std::vector<LatestBrokerVersion> GetLatestBrokerVersion() const;

                    /**
                     * 设置Latest version information.
                     * @param _latestBrokerVersion Latest version information.
                     * 
                     */
                    void SetLatestBrokerVersion(const std::vector<LatestBrokerVersion>& _latestBrokerVersion);

                    /**
                     * 判断参数 LatestBrokerVersion 是否已赋值
                     * @return LatestBrokerVersion 是否已赋值
                     * 
                     */
                    bool LatestBrokerVersionHasBeenSet() const;

                    /**
                     * 获取Whether to allow kernel upgrades across major versions.
                     * @return AllowUpgradeHighVersion Whether to allow kernel upgrades across major versions.
                     * 
                     */
                    bool GetAllowUpgradeHighVersion() const;

                    /**
                     * 设置Whether to allow kernel upgrades across major versions.
                     * @param _allowUpgradeHighVersion Whether to allow kernel upgrades across major versions.
                     * 
                     */
                    void SetAllowUpgradeHighVersion(const bool& _allowUpgradeHighVersion);

                    /**
                     * 判断参数 AllowUpgradeHighVersion 是否已赋值
                     * @return AllowUpgradeHighVersion 是否已赋值
                     * 
                     */
                    bool AllowUpgradeHighVersionHasBeenSet() const;

                    /**
                     * 获取Major version allowed for upgrades.
                     * @return HighVersionSet Major version allowed for upgrades.
                     * 
                     */
                    std::vector<std::string> GetHighVersionSet() const;

                    /**
                     * 设置Major version allowed for upgrades.
                     * @param _highVersionSet Major version allowed for upgrades.
                     * 
                     */
                    void SetHighVersionSet(const std::vector<std::string>& _highVersionSet);

                    /**
                     * 判断参数 HighVersionSet 是否已赋值
                     * @return HighVersionSet 是否已赋值
                     * 
                     */
                    bool HighVersionSetHasBeenSet() const;

                    /**
                     * 获取Whether to allow automatic deletion of consumer groups during minor version configuration.
                     * @return AllowAutoDeleteTimestamp Whether to allow automatic deletion of consumer groups during minor version configuration.
                     * 
                     */
                    bool GetAllowAutoDeleteTimestamp() const;

                    /**
                     * 设置Whether to allow automatic deletion of consumer groups during minor version configuration.
                     * @param _allowAutoDeleteTimestamp Whether to allow automatic deletion of consumer groups during minor version configuration.
                     * 
                     */
                    void SetAllowAutoDeleteTimestamp(const bool& _allowAutoDeleteTimestamp);

                    /**
                     * 判断参数 AllowAutoDeleteTimestamp 是否已赋值
                     * @return AllowAutoDeleteTimestamp 是否已赋值
                     * 
                     */
                    bool AllowAutoDeleteTimestampHasBeenSet() const;

                private:

                    /**
                     * CKafka cluster instance version.
                     */
                    std::string m_kafkaVersion;
                    bool m_kafkaVersionHasBeenSet;

                    /**
                     * Broker version information.
                     */
                    std::string m_curBrokerVersion;
                    bool m_curBrokerVersionHasBeenSet;

                    /**
                     * Latest version information.
                     */
                    std::vector<LatestBrokerVersion> m_latestBrokerVersion;
                    bool m_latestBrokerVersionHasBeenSet;

                    /**
                     * Whether to allow kernel upgrades across major versions.
                     */
                    bool m_allowUpgradeHighVersion;
                    bool m_allowUpgradeHighVersionHasBeenSet;

                    /**
                     * Major version allowed for upgrades.
                     */
                    std::vector<std::string> m_highVersionSet;
                    bool m_highVersionSetHasBeenSet;

                    /**
                     * Whether to allow automatic deletion of consumer groups during minor version configuration.
                     */
                    bool m_allowAutoDeleteTimestamp;
                    bool m_allowAutoDeleteTimestampHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_INSTANCEVERSION_H_
