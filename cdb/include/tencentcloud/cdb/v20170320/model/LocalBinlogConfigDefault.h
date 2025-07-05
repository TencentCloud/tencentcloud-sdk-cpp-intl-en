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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_LOCALBINLOGCONFIGDEFAULT_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_LOCALBINLOGCONFIGDEFAULT_H_

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
                * Default retention policy of local binlog.
                */
                class LocalBinlogConfigDefault : public AbstractModel
                {
                public:
                    LocalBinlogConfigDefault();
                    ~LocalBinlogConfigDefault() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Retention period of local binlog. Value range: [72,168].
                     * @return SaveHours Retention period of local binlog. Value range: [72,168].
                     * 
                     */
                    int64_t GetSaveHours() const;

                    /**
                     * 设置Retention period of local binlog. Value range: [72,168].
                     * @param _saveHours Retention period of local binlog. Value range: [72,168].
                     * 
                     */
                    void SetSaveHours(const int64_t& _saveHours);

                    /**
                     * 判断参数 SaveHours 是否已赋值
                     * @return SaveHours 是否已赋值
                     * 
                     */
                    bool SaveHoursHasBeenSet() const;

                    /**
                     * 获取Space utilization of local binlog. Value range: [30,50].
                     * @return MaxUsage Space utilization of local binlog. Value range: [30,50].
                     * 
                     */
                    int64_t GetMaxUsage() const;

                    /**
                     * 设置Space utilization of local binlog. Value range: [30,50].
                     * @param _maxUsage Space utilization of local binlog. Value range: [30,50].
                     * 
                     */
                    void SetMaxUsage(const int64_t& _maxUsage);

                    /**
                     * 判断参数 MaxUsage 是否已赋值
                     * @return MaxUsage 是否已赋值
                     * 
                     */
                    bool MaxUsageHasBeenSet() const;

                private:

                    /**
                     * Retention period of local binlog. Value range: [72,168].
                     */
                    int64_t m_saveHours;
                    bool m_saveHoursHasBeenSet;

                    /**
                     * Space utilization of local binlog. Value range: [30,50].
                     */
                    int64_t m_maxUsage;
                    bool m_maxUsageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_LOCALBINLOGCONFIGDEFAULT_H_
