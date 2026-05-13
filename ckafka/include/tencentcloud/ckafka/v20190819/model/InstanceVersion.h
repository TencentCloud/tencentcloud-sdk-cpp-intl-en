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
                     * 获取<p>ckafka cluster instance version</p>
                     * @return KafkaVersion <p>ckafka cluster instance version</p>
                     * 
                     */
                    std::string GetKafkaVersion() const;

                    /**
                     * 设置<p>ckafka cluster instance version</p>
                     * @param _kafkaVersion <p>ckafka cluster instance version</p>
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
                     * 获取<p>broker version info</p>
                     * @return CurBrokerVersion <p>broker version info</p>
                     * 
                     */
                    std::string GetCurBrokerVersion() const;

                    /**
                     * 设置<p>broker version info</p>
                     * @param _curBrokerVersion <p>broker version info</p>
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
                     * 获取<p>latest version info</p>
                     * @return LatestBrokerVersion <p>latest version info</p>
                     * 
                     */
                    std::vector<LatestBrokerVersion> GetLatestBrokerVersion() const;

                    /**
                     * 设置<p>latest version info</p>
                     * @param _latestBrokerVersion <p>latest version info</p>
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
                     * 获取<p>Permission for cross-major version kernel upgrade</p>
                     * @return AllowUpgradeHighVersion <p>Permission for cross-major version kernel upgrade</p>
                     * 
                     */
                    bool GetAllowUpgradeHighVersion() const;

                    /**
                     * 设置<p>Permission for cross-major version kernel upgrade</p>
                     * @param _allowUpgradeHighVersion <p>Permission for cross-major version kernel upgrade</p>
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
                     * 获取<p>Permission for major version upgrade</p>
                     * @return HighVersionSet <p>Permission for major version upgrade</p>
                     * 
                     */
                    std::vector<std::string> GetHighVersionSet() const;

                    /**
                     * 设置<p>Permission for major version upgrade</p>
                     * @param _highVersionSet <p>Permission for major version upgrade</p>
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
                     * 获取<p>Permission to configure auto deletion of consumer group for minor version number</p>
                     * @return AllowAutoDeleteTimestamp <p>Permission to configure auto deletion of consumer group for minor version number</p>
                     * 
                     */
                    bool GetAllowAutoDeleteTimestamp() const;

                    /**
                     * 设置<p>Permission to configure auto deletion of consumer group for minor version number</p>
                     * @param _allowAutoDeleteTimestamp <p>Permission to configure auto deletion of consumer group for minor version number</p>
                     * 
                     */
                    void SetAllowAutoDeleteTimestamp(const bool& _allowAutoDeleteTimestamp);

                    /**
                     * 判断参数 AllowAutoDeleteTimestamp 是否已赋值
                     * @return AllowAutoDeleteTimestamp 是否已赋值
                     * 
                     */
                    bool AllowAutoDeleteTimestampHasBeenSet() const;

                    /**
                     * 获取<p>Allow the modification of transaction ID expiration time configuration</p>
                     * @return AllowModifyTxnIdExpiration <p>Allow the modification of transaction ID expiration time configuration</p>
                     * 
                     */
                    bool GetAllowModifyTxnIdExpiration() const;

                    /**
                     * 设置<p>Allow the modification of transaction ID expiration time configuration</p>
                     * @param _allowModifyTxnIdExpiration <p>Allow the modification of transaction ID expiration time configuration</p>
                     * 
                     */
                    void SetAllowModifyTxnIdExpiration(const bool& _allowModifyTxnIdExpiration);

                    /**
                     * 判断参数 AllowModifyTxnIdExpiration 是否已赋值
                     * @return AllowModifyTxnIdExpiration 是否已赋值
                     * 
                     */
                    bool AllowModifyTxnIdExpirationHasBeenSet() const;

                private:

                    /**
                     * <p>ckafka cluster instance version</p>
                     */
                    std::string m_kafkaVersion;
                    bool m_kafkaVersionHasBeenSet;

                    /**
                     * <p>broker version info</p>
                     */
                    std::string m_curBrokerVersion;
                    bool m_curBrokerVersionHasBeenSet;

                    /**
                     * <p>latest version info</p>
                     */
                    std::vector<LatestBrokerVersion> m_latestBrokerVersion;
                    bool m_latestBrokerVersionHasBeenSet;

                    /**
                     * <p>Permission for cross-major version kernel upgrade</p>
                     */
                    bool m_allowUpgradeHighVersion;
                    bool m_allowUpgradeHighVersionHasBeenSet;

                    /**
                     * <p>Permission for major version upgrade</p>
                     */
                    std::vector<std::string> m_highVersionSet;
                    bool m_highVersionSetHasBeenSet;

                    /**
                     * <p>Permission to configure auto deletion of consumer group for minor version number</p>
                     */
                    bool m_allowAutoDeleteTimestamp;
                    bool m_allowAutoDeleteTimestampHasBeenSet;

                    /**
                     * <p>Allow the modification of transaction ID expiration time configuration</p>
                     */
                    bool m_allowModifyTxnIdExpiration;
                    bool m_allowModifyTxnIdExpirationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_INSTANCEVERSION_H_
