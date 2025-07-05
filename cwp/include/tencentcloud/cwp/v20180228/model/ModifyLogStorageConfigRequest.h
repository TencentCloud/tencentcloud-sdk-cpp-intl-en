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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYLOGSTORAGECONFIGREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYLOGSTORAGECONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * ModifyLogStorageConfig request structure.
                */
                class ModifyLogStorageConfigRequest : public AbstractModel
                {
                public:
                    ModifyLogStorageConfigRequest();
                    ~ModifyLogStorageConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Whether to modify the validity period
                     * @return IsModifyPeriod Whether to modify the validity period
                     * 
                     */
                    bool GetIsModifyPeriod() const;

                    /**
                     * 设置Whether to modify the validity period
                     * @param _isModifyPeriod Whether to modify the validity period
                     * 
                     */
                    void SetIsModifyPeriod(const bool& _isModifyPeriod);

                    /**
                     * 判断参数 IsModifyPeriod 是否已赋值
                     * @return IsModifyPeriod 是否已赋值
                     * 
                     */
                    bool IsModifyPeriodHasBeenSet() const;

                    /**
                     * 获取Storage type: string array
                     * @return Type Storage type: string array
                     * 
                     */
                    std::vector<std::string> GetType() const;

                    /**
                     * 设置Storage type: string array
                     * @param _type Storage type: string array
                     * 
                     */
                    void SetType(const std::vector<std::string>& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Log retention days. The value 3640 indicates that the number of days is unlimited.
                     * @return Period Log retention days. The value 3640 indicates that the number of days is unlimited.
                     * 
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置Log retention days. The value 3640 indicates that the number of days is unlimited.
                     * @param _period Log retention days. The value 3640 indicates that the number of days is unlimited.
                     * 
                     */
                    void SetPeriod(const int64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                private:

                    /**
                     * Whether to modify the validity period
                     */
                    bool m_isModifyPeriod;
                    bool m_isModifyPeriodHasBeenSet;

                    /**
                     * Storage type: string array
                     */
                    std::vector<std::string> m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Log retention days. The value 3640 indicates that the number of days is unlimited.
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYLOGSTORAGECONFIGREQUEST_H_
