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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_CREATECLSLOGSETREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_CREATECLSLOGSETREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * CreateClsLogSet request structure.
                */
                class CreateClsLogSetRequest : public AbstractModel
                {
                public:
                    CreateClsLogSetRequest();
                    ~CreateClsLogSetRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Logset name, which must be unique among all CLS logsets; default value: clb_logset
                     * @return LogsetName Logset name, which must be unique among all CLS logsets; default value: clb_logset
                     */
                    std::string GetLogsetName() const;

                    /**
                     * 设置Logset name, which must be unique among all CLS logsets; default value: clb_logset
                     * @param LogsetName Logset name, which must be unique among all CLS logsets; default value: clb_logset
                     */
                    void SetLogsetName(const std::string& _logsetName);

                    /**
                     * 判断参数 LogsetName 是否已赋值
                     * @return LogsetName 是否已赋值
                     */
                    bool LogsetNameHasBeenSet() const;

                    /**
                     * 获取Logset retention period (in days)
                     * @return Period Logset retention period (in days)
                     */
                    uint64_t GetPeriod() const;

                    /**
                     * 设置Logset retention period (in days)
                     * @param Period Logset retention period (in days)
                     */
                    void SetPeriod(const uint64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取Logset type. Valid values: ACCESS (access logs; default value) and HEALTH (health check logs).
                     * @return LogsetType Logset type. Valid values: ACCESS (access logs; default value) and HEALTH (health check logs).
                     */
                    std::string GetLogsetType() const;

                    /**
                     * 设置Logset type. Valid values: ACCESS (access logs; default value) and HEALTH (health check logs).
                     * @param LogsetType Logset type. Valid values: ACCESS (access logs; default value) and HEALTH (health check logs).
                     */
                    void SetLogsetType(const std::string& _logsetType);

                    /**
                     * 判断参数 LogsetType 是否已赋值
                     * @return LogsetType 是否已赋值
                     */
                    bool LogsetTypeHasBeenSet() const;

                private:

                    /**
                     * Logset name, which must be unique among all CLS logsets; default value: clb_logset
                     */
                    std::string m_logsetName;
                    bool m_logsetNameHasBeenSet;

                    /**
                     * Logset retention period (in days)
                     */
                    uint64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * Logset type. Valid values: ACCESS (access logs; default value) and HEALTH (health check logs).
                     */
                    std::string m_logsetType;
                    bool m_logsetTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_CREATECLSLOGSETREQUEST_H_
