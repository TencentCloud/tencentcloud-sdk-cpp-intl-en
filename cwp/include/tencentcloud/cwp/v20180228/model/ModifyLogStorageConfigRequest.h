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
                     * 获取Whether to modify the validity period (deprecated).
                     * @return IsModifyPeriod Whether to modify the validity period (deprecated).
                     * 
                     */
                    bool GetIsModifyPeriod() const;

                    /**
                     * 设置Whether to modify the validity period (deprecated).
                     * @param _isModifyPeriod Whether to modify the validity period (deprecated).
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
                     * 获取Log retention time. The value 3640 indicates that the time is unlimited.
                     * @return Period Log retention time. The value 3640 indicates that the time is unlimited.
                     * 
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置Log retention time. The value 3640 indicates that the time is unlimited.
                     * @param _period Log retention time. The value 3640 indicates that the time is unlimited.
                     * 
                     */
                    void SetPeriod(const int64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取Log storage duration unit: year/month/day
                     * @return Granularity Log storage duration unit: year/month/day
                     * 
                     */
                    std::string GetGranularity() const;

                    /**
                     * 设置Log storage duration unit: year/month/day
                     * @param _granularity Log storage duration unit: year/month/day
                     * 
                     */
                    void SetGranularity(const std::string& _granularity);

                    /**
                     * 判断参数 Granularity 是否已赋值
                     * @return Granularity 是否已赋值
                     * 
                     */
                    bool GranularityHasBeenSet() const;

                    /**
                     * 获取Language type
                     * @return MsgLanguage Language type
                     * 
                     */
                    std::string GetMsgLanguage() const;

                    /**
                     * 设置Language type
                     * @param _msgLanguage Language type
                     * 
                     */
                    void SetMsgLanguage(const std::string& _msgLanguage);

                    /**
                     * 判断参数 MsgLanguage 是否已赋值
                     * @return MsgLanguage 是否已赋值
                     * 
                     */
                    bool MsgLanguageHasBeenSet() const;

                private:

                    /**
                     * Whether to modify the validity period (deprecated).
                     */
                    bool m_isModifyPeriod;
                    bool m_isModifyPeriodHasBeenSet;

                    /**
                     * Storage type: string array
                     */
                    std::vector<std::string> m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Log retention time. The value 3640 indicates that the time is unlimited.
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * Log storage duration unit: year/month/day
                     */
                    std::string m_granularity;
                    bool m_granularityHasBeenSet;

                    /**
                     * Language type
                     */
                    std::string m_msgLanguage;
                    bool m_msgLanguageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYLOGSTORAGECONFIGREQUEST_H_
