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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_PREAUDITINFO_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_PREAUDITINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * List of prereview information
                */
                class PreAuditInfo : public AbstractModel
                {
                public:
                    PreAuditInfo();
                    ~PreAuditInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Total number of years of the certificate
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TotalPeriod Total number of years of the certificate
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetTotalPeriod() const;

                    /**
                     * 设置Total number of years of the certificate
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param TotalPeriod Total number of years of the certificate
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetTotalPeriod(const int64_t& _totalPeriod);

                    /**
                     * 判断参数 TotalPeriod 是否已赋值
                     * @return TotalPeriod 是否已赋值
                     */
                    bool TotalPeriodHasBeenSet() const;

                    /**
                     * 获取Current year of the certificate
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return NowPeriod Current year of the certificate
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetNowPeriod() const;

                    /**
                     * 设置Current year of the certificate
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param NowPeriod Current year of the certificate
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetNowPeriod(const int64_t& _nowPeriod);

                    /**
                     * 判断参数 NowPeriod 是否已赋值
                     * @return NowPeriod 是否已赋值
                     */
                    bool NowPeriodHasBeenSet() const;

                    /**
                     * 获取Certificate prereview manager ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ManagerId Certificate prereview manager ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetManagerId() const;

                    /**
                     * 设置Certificate prereview manager ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param ManagerId Certificate prereview manager ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetManagerId(const std::string& _managerId);

                    /**
                     * 判断参数 ManagerId 是否已赋值
                     * @return ManagerId 是否已赋值
                     */
                    bool ManagerIdHasBeenSet() const;

                private:

                    /**
                     * Total number of years of the certificate
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_totalPeriod;
                    bool m_totalPeriodHasBeenSet;

                    /**
                     * Current year of the certificate
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_nowPeriod;
                    bool m_nowPeriodHasBeenSet;

                    /**
                     * Certificate prereview manager ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_managerId;
                    bool m_managerIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_PREAUDITINFO_H_
