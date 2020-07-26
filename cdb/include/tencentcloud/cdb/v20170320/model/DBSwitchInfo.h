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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DBSWITCHINFO_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DBSWITCHINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * TencentDB instance switch records
                */
                class DBSwitchInfo : public AbstractModel
                {
                public:
                    DBSwitchInfo();
                    ~DBSwitchInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Switch time in the format of yyyy-MM-dd HH:mm:ss, such as 2017-09-03 01:34:31
                     * @return SwitchTime Switch time in the format of yyyy-MM-dd HH:mm:ss, such as 2017-09-03 01:34:31
                     */
                    std::string GetSwitchTime() const;

                    /**
                     * 设置Switch time in the format of yyyy-MM-dd HH:mm:ss, such as 2017-09-03 01:34:31
                     * @param SwitchTime Switch time in the format of yyyy-MM-dd HH:mm:ss, such as 2017-09-03 01:34:31
                     */
                    void SetSwitchTime(const std::string& _switchTime);

                    /**
                     * 判断参数 SwitchTime 是否已赋值
                     * @return SwitchTime 是否已赋值
                     */
                    bool SwitchTimeHasBeenSet() const;

                    /**
                     * 获取Switch type. Value range: TRANSFER (data migration), MASTER2SLAVE (master/slave switch), RECOVERY (master/slave recovery)
                     * @return SwitchType Switch type. Value range: TRANSFER (data migration), MASTER2SLAVE (master/slave switch), RECOVERY (master/slave recovery)
                     */
                    std::string GetSwitchType() const;

                    /**
                     * 设置Switch type. Value range: TRANSFER (data migration), MASTER2SLAVE (master/slave switch), RECOVERY (master/slave recovery)
                     * @param SwitchType Switch type. Value range: TRANSFER (data migration), MASTER2SLAVE (master/slave switch), RECOVERY (master/slave recovery)
                     */
                    void SetSwitchType(const std::string& _switchType);

                    /**
                     * 判断参数 SwitchType 是否已赋值
                     * @return SwitchType 是否已赋值
                     */
                    bool SwitchTypeHasBeenSet() const;

                private:

                    /**
                     * Switch time in the format of yyyy-MM-dd HH:mm:ss, such as 2017-09-03 01:34:31
                     */
                    std::string m_switchTime;
                    bool m_switchTimeHasBeenSet;

                    /**
                     * Switch type. Value range: TRANSFER (data migration), MASTER2SLAVE (master/slave switch), RECOVERY (master/slave recovery)
                     */
                    std::string m_switchType;
                    bool m_switchTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DBSWITCHINFO_H_
