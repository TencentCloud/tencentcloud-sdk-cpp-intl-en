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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEUPGRADEINSTANCECHECKRESPONSE_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEUPGRADEINSTANCECHECKRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/sqlserver/v20180328/model/CheckItem.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * DescribeUpgradeInstanceCheck response structure.
                */
                class DescribeUpgradeInstanceCheckResponse : public AbstractModel
                {
                public:
                    DescribeUpgradeInstanceCheckResponse();
                    ~DescribeUpgradeInstanceCheckResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Whether the configuration adjustment has an impact on the instance. 0 - no; 1 - yes.
                     * @return IsAffect Whether the configuration adjustment has an impact on the instance. 0 - no; 1 - yes.
                     * 
                     */
                    int64_t GetIsAffect() const;

                    /**
                     * 判断参数 IsAffect 是否已赋值
                     * @return IsAffect 是否已赋值
                     * 
                     */
                    bool IsAffectHasBeenSet() const;

                    /**
                     * 获取Whether the configuration adjustment can be executed. 0 - no; 1 - yes.
                     * @return Passed Whether the configuration adjustment can be executed. 0 - no; 1 - yes.
                     * 
                     */
                    int64_t GetPassed() const;

                    /**
                     * 判断参数 Passed 是否已赋值
                     * @return Passed 是否已赋值
                     * 
                     */
                    bool PassedHasBeenSet() const;

                    /**
                     * 获取Whether the configuration adjustment is a downgrade or an upgrade. Down - downgrade; up - upgrade.
                     * @return ModifyMode Whether the configuration adjustment is a downgrade or an upgrade. Down - downgrade; up - upgrade.
                     * 
                     */
                    std::string GetModifyMode() const;

                    /**
                     * 判断参数 ModifyMode 是否已赋值
                     * @return ModifyMode 是否已赋值
                     * 
                     */
                    bool ModifyModeHasBeenSet() const;

                    /**
                     * 获取Check item list.
                     * @return CheckItems Check item list.
                     * 
                     */
                    std::vector<CheckItem> GetCheckItems() const;

                    /**
                     * 判断参数 CheckItems 是否已赋值
                     * @return CheckItems 是否已赋值
                     * 
                     */
                    bool CheckItemsHasBeenSet() const;

                private:

                    /**
                     * Whether the configuration adjustment has an impact on the instance. 0 - no; 1 - yes.
                     */
                    int64_t m_isAffect;
                    bool m_isAffectHasBeenSet;

                    /**
                     * Whether the configuration adjustment can be executed. 0 - no; 1 - yes.
                     */
                    int64_t m_passed;
                    bool m_passedHasBeenSet;

                    /**
                     * Whether the configuration adjustment is a downgrade or an upgrade. Down - downgrade; up - upgrade.
                     */
                    std::string m_modifyMode;
                    bool m_modifyModeHasBeenSet;

                    /**
                     * Check item list.
                     */
                    std::vector<CheckItem> m_checkItems;
                    bool m_checkItemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEUPGRADEINSTANCECHECKRESPONSE_H_
