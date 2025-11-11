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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBECONNECTINFORESULTDTO_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBECONNECTINFORESULTDTO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * Topic connection information
                */
                class DescribeConnectInfoResultDTO : public AbstractModel
                {
                public:
                    DescribeConnectInfoResultDTO();
                    ~DescribeConnectInfoResultDTO() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取IP address
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IpAddr IP address
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetIpAddr() const;

                    /**
                     * 设置IP address
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _ipAddr IP address
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIpAddr(const std::string& _ipAddr);

                    /**
                     * 判断参数 IpAddr 是否已赋值
                     * @return IpAddr 是否已赋值
                     * 
                     */
                    bool IpAddrHasBeenSet() const;

                    /**
                     * 获取Connection time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Time Connection time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTime() const;

                    /**
                     * 设置Connection time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _time Connection time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTime(const std::string& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     * 
                     */
                    bool TimeHasBeenSet() const;

                    /**
                     * 获取Specifies whether supported versions are required or not.
                     * @return IsUnSupportVersion Specifies whether supported versions are required or not.
                     * 
                     */
                    bool GetIsUnSupportVersion() const;

                    /**
                     * 设置Specifies whether supported versions are required or not.
                     * @param _isUnSupportVersion Specifies whether supported versions are required or not.
                     * 
                     */
                    void SetIsUnSupportVersion(const bool& _isUnSupportVersion);

                    /**
                     * 判断参数 IsUnSupportVersion 是否已赋值
                     * @return IsUnSupportVersion 是否已赋值
                     * 
                     */
                    bool IsUnSupportVersionHasBeenSet() const;

                private:

                    /**
                     * IP address
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_ipAddr;
                    bool m_ipAddrHasBeenSet;

                    /**
                     * Connection time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * Specifies whether supported versions are required or not.
                     */
                    bool m_isUnSupportVersion;
                    bool m_isUnSupportVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBECONNECTINFORESULTDTO_H_
