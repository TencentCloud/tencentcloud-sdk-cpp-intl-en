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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEIMPORTMACHINEINFOREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEIMPORTMACHINEINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/Filters.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeImportMachineInfo request structure.
                */
                class DescribeImportMachineInfoRequest : public AbstractModel
                {
                public:
                    DescribeImportMachineInfoRequest();
                    ~DescribeImportMachineInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Array of the server's private IP (default) / server name / server ID (maximum: 1000 entries)
                     * @return MachineList Array of the server's private IP (default) / server name / server ID (maximum: 1000 entries)
                     * 
                     */
                    std::vector<std::string> GetMachineList() const;

                    /**
                     * 设置Array of the server's private IP (default) / server name / server ID (maximum: 1000 entries)
                     * @param _machineList Array of the server's private IP (default) / server name / server ID (maximum: 1000 entries)
                     * 
                     */
                    void SetMachineList(const std::vector<std::string>& _machineList);

                    /**
                     * 判断参数 MachineList 是否已赋值
                     * @return MachineList 是否已赋值
                     * 
                     */
                    bool MachineListHasBeenSet() const;

                    /**
                     * 获取Data type of batch import. Select one from Ip, Name, and Id.
                     * @return ImportType Data type of batch import. Select one from Ip, Name, and Id.
                     * 
                     */
                    std::string GetImportType() const;

                    /**
                     * 设置Data type of batch import. Select one from Ip, Name, and Id.
                     * @param _importType Data type of batch import. Select one from Ip, Name, and Id.
                     * 
                     */
                    void SetImportType(const std::string& _importType);

                    /**
                     * 判断参数 ImportType 是否已赋值
                     * @return ImportType 是否已赋值
                     * 
                     */
                    bool ImportTypeHasBeenSet() const;

                    /**
                     * 获取This parameter is discarded.
                     * @return IsQueryProMachine This parameter is discarded.
                     * 
                     */
                    bool GetIsQueryProMachine() const;

                    /**
                     * 设置This parameter is discarded.
                     * @param _isQueryProMachine This parameter is discarded.
                     * 
                     */
                    void SetIsQueryProMachine(const bool& _isQueryProMachine);

                    /**
                     * 判断参数 IsQueryProMachine 是否已赋值
                     * @return IsQueryProMachine 是否已赋值
                     * 
                     */
                    bool IsQueryProMachineHasBeenSet() const;

                    /**
                     * 获取Filter criteria. <li>Version - String - Required: no - Current protection edition. Valid values: PRO_VERSION (professional edition), BASIC_VERSION (basic edition), Flagship (flagship edition), ProtectedMachines (professional edition + flagship edition), BASIC_PROPOST_GENERAL_DISCOUNT (lightweight edition + professional edition in pay-as-you-go mode + basic edition), and UnFlagship (professional edition in prepaid mode + professional edition in postpaid mode + basic edition + lightweight edition).</li>
                     * @return Filters Filter criteria. <li>Version - String - Required: no - Current protection edition. Valid values: PRO_VERSION (professional edition), BASIC_VERSION (basic edition), Flagship (flagship edition), ProtectedMachines (professional edition + flagship edition), BASIC_PROPOST_GENERAL_DISCOUNT (lightweight edition + professional edition in pay-as-you-go mode + basic edition), and UnFlagship (professional edition in prepaid mode + professional edition in postpaid mode + basic edition + lightweight edition).</li>
                     * 
                     */
                    std::vector<Filters> GetFilters() const;

                    /**
                     * 设置Filter criteria. <li>Version - String - Required: no - Current protection edition. Valid values: PRO_VERSION (professional edition), BASIC_VERSION (basic edition), Flagship (flagship edition), ProtectedMachines (professional edition + flagship edition), BASIC_PROPOST_GENERAL_DISCOUNT (lightweight edition + professional edition in pay-as-you-go mode + basic edition), and UnFlagship (professional edition in prepaid mode + professional edition in postpaid mode + basic edition + lightweight edition).</li>
                     * @param _filters Filter criteria. <li>Version - String - Required: no - Current protection edition. Valid values: PRO_VERSION (professional edition), BASIC_VERSION (basic edition), Flagship (flagship edition), ProtectedMachines (professional edition + flagship edition), BASIC_PROPOST_GENERAL_DISCOUNT (lightweight edition + professional edition in pay-as-you-go mode + basic edition), and UnFlagship (professional edition in prepaid mode + professional edition in postpaid mode + basic edition + lightweight edition).</li>
                     * 
                     */
                    void SetFilters(const std::vector<Filters>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * Array of the server's private IP (default) / server name / server ID (maximum: 1000 entries)
                     */
                    std::vector<std::string> m_machineList;
                    bool m_machineListHasBeenSet;

                    /**
                     * Data type of batch import. Select one from Ip, Name, and Id.
                     */
                    std::string m_importType;
                    bool m_importTypeHasBeenSet;

                    /**
                     * This parameter is discarded.
                     */
                    bool m_isQueryProMachine;
                    bool m_isQueryProMachineHasBeenSet;

                    /**
                     * Filter criteria. <li>Version - String - Required: no - Current protection edition. Valid values: PRO_VERSION (professional edition), BASIC_VERSION (basic edition), Flagship (flagship edition), ProtectedMachines (professional edition + flagship edition), BASIC_PROPOST_GENERAL_DISCOUNT (lightweight edition + professional edition in pay-as-you-go mode + basic edition), and UnFlagship (professional edition in prepaid mode + professional edition in postpaid mode + basic edition + lightweight edition).</li>
                     */
                    std::vector<Filters> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEIMPORTMACHINEINFOREQUEST_H_
