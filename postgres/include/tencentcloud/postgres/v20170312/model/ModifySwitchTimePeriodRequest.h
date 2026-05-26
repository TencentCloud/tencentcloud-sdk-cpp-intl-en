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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_MODIFYSWITCHTIMEPERIODREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_MODIFYSWITCHTIMEPERIODREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * ModifySwitchTimePeriod request structure.
                */
                class ModifySwitchTimePeriodRequest : public AbstractModel
                {
                public:
                    ModifySwitchTimePeriodRequest();
                    ~ModifySwitchTimePeriodRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>ID of the instance that is waiting for a switch, which can be obtained through the <a href="https://www.tencentcloud.com/document/api/409/16773?from_cn_redirect=1">DescribeDBInstances</a> API.</p>
                     * @return DBInstanceId <p>ID of the instance that is waiting for a switch, which can be obtained through the <a href="https://www.tencentcloud.com/document/api/409/16773?from_cn_redirect=1">DescribeDBInstances</a> API.</p>
                     * 
                     */
                    std::string GetDBInstanceId() const;

                    /**
                     * 设置<p>ID of the instance that is waiting for a switch, which can be obtained through the <a href="https://www.tencentcloud.com/document/api/409/16773?from_cn_redirect=1">DescribeDBInstances</a> API.</p>
                     * @param _dBInstanceId <p>ID of the instance that is waiting for a switch, which can be obtained through the <a href="https://www.tencentcloud.com/document/api/409/16773?from_cn_redirect=1">DescribeDBInstances</a> API.</p>
                     * 
                     */
                    void SetDBInstanceId(const std::string& _dBInstanceId);

                    /**
                     * 判断参数 DBInstanceId 是否已赋值
                     * @return DBInstanceId 是否已赋值
                     * 
                     */
                    bool DBInstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>If the value of the input parameter is 0, it indicates to switch immediately.</p>
                     * @return SwitchTag <p>If the value of the input parameter is 0, it indicates to switch immediately.</p>
                     * 
                     */
                    uint64_t GetSwitchTag() const;

                    /**
                     * 设置<p>If the value of the input parameter is 0, it indicates to switch immediately.</p>
                     * @param _switchTag <p>If the value of the input parameter is 0, it indicates to switch immediately.</p>
                     * 
                     */
                    void SetSwitchTag(const uint64_t& _switchTag);

                    /**
                     * 判断参数 SwitchTag 是否已赋值
                     * @return SwitchTag 是否已赋值
                     * 
                     */
                    bool SwitchTagHasBeenSet() const;

                private:

                    /**
                     * <p>ID of the instance that is waiting for a switch, which can be obtained through the <a href="https://www.tencentcloud.com/document/api/409/16773?from_cn_redirect=1">DescribeDBInstances</a> API.</p>
                     */
                    std::string m_dBInstanceId;
                    bool m_dBInstanceIdHasBeenSet;

                    /**
                     * <p>If the value of the input parameter is 0, it indicates to switch immediately.</p>
                     */
                    uint64_t m_switchTag;
                    bool m_switchTagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_MODIFYSWITCHTIMEPERIODREQUEST_H_
