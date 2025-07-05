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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYWARNINGHOSTCONFIGREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYWARNINGHOSTCONFIGREQUEST_H_

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
                * ModifyWarningHostConfig request structure.
                */
                class ModifyWarningHostConfigRequest : public AbstractModel
                {
                public:
                    ModifyWarningHostConfigRequest();
                    ~ModifyWarningHostConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Alarm type
                     * @return Type Alarm type
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置Alarm type
                     * @param _type Alarm type
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Alarm Host Range Type. 0: All Hosts; 1: By Project; 2: By Tencent Cloud Tag; 3: By Host Security Tag; 4: Custom Hosts
                     * @return HostRange Alarm Host Range Type. 0: All Hosts; 1: By Project; 2: By Tencent Cloud Tag; 3: By Host Security Tag; 4: Custom Hosts
                     * 
                     */
                    int64_t GetHostRange() const;

                    /**
                     * 设置Alarm Host Range Type. 0: All Hosts; 1: By Project; 2: By Tencent Cloud Tag; 3: By Host Security Tag; 4: Custom Hosts
                     * @param _hostRange Alarm Host Range Type. 0: All Hosts; 1: By Project; 2: By Tencent Cloud Tag; 3: By Host Security Tag; 4: Custom Hosts
                     * 
                     */
                    void SetHostRange(const int64_t& _hostRange);

                    /**
                     * 判断参数 HostRange 是否已赋值
                     * @return HostRange 是否已赋值
                     * 
                     */
                    bool HostRangeHasBeenSet() const;

                    /**
                     * 获取List of Project or Tag Names, empty for custom hosts
                     * @return ItemLabels List of Project or Tag Names, empty for custom hosts
                     * 
                     */
                    std::vector<std::string> GetItemLabels() const;

                    /**
                     * 设置List of Project or Tag Names, empty for custom hosts
                     * @param _itemLabels List of Project or Tag Names, empty for custom hosts
                     * 
                     */
                    void SetItemLabels(const std::vector<std::string>& _itemLabels);

                    /**
                     * 判断参数 ItemLabels 是否已赋值
                     * @return ItemLabels 是否已赋值
                     * 
                     */
                    bool ItemLabelsHasBeenSet() const;

                    /**
                     * 获取Machine list
                     * @return Quuids Machine list
                     * 
                     */
                    std::vector<std::string> GetQuuids() const;

                    /**
                     * 设置Machine list
                     * @param _quuids Machine list
                     * 
                     */
                    void SetQuuids(const std::vector<std::string>& _quuids);

                    /**
                     * 判断参数 Quuids 是否已赋值
                     * @return Quuids 是否已赋值
                     * 
                     */
                    bool QuuidsHasBeenSet() const;

                    /**
                     * 获取List of Project or Tag IDs, empty for custom hosts
                     * @return ItemLabelIds List of Project or Tag IDs, empty for custom hosts
                     * 
                     */
                    std::vector<std::string> GetItemLabelIds() const;

                    /**
                     * 设置List of Project or Tag IDs, empty for custom hosts
                     * @param _itemLabelIds List of Project or Tag IDs, empty for custom hosts
                     * 
                     */
                    void SetItemLabelIds(const std::vector<std::string>& _itemLabelIds);

                    /**
                     * 判断参数 ItemLabelIds 是否已赋值
                     * @return ItemLabelIds 是否已赋值
                     * 
                     */
                    bool ItemLabelIdsHasBeenSet() const;

                    /**
                     * 获取
                     * @return ExcludedQuuids 
                     * 
                     */
                    std::vector<std::string> GetExcludedQuuids() const;

                    /**
                     * 设置
                     * @param _excludedQuuids 
                     * 
                     */
                    void SetExcludedQuuids(const std::vector<std::string>& _excludedQuuids);

                    /**
                     * 判断参数 ExcludedQuuids 是否已赋值
                     * @return ExcludedQuuids 是否已赋值
                     * 
                     */
                    bool ExcludedQuuidsHasBeenSet() const;

                private:

                    /**
                     * Alarm type
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Alarm Host Range Type. 0: All Hosts; 1: By Project; 2: By Tencent Cloud Tag; 3: By Host Security Tag; 4: Custom Hosts
                     */
                    int64_t m_hostRange;
                    bool m_hostRangeHasBeenSet;

                    /**
                     * List of Project or Tag Names, empty for custom hosts
                     */
                    std::vector<std::string> m_itemLabels;
                    bool m_itemLabelsHasBeenSet;

                    /**
                     * Machine list
                     */
                    std::vector<std::string> m_quuids;
                    bool m_quuidsHasBeenSet;

                    /**
                     * List of Project or Tag IDs, empty for custom hosts
                     */
                    std::vector<std::string> m_itemLabelIds;
                    bool m_itemLabelIdsHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<std::string> m_excludedQuuids;
                    bool m_excludedQuuidsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYWARNINGHOSTCONFIGREQUEST_H_
