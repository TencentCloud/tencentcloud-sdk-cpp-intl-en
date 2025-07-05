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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_DYNAMICOPTIONS_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_DYNAMICOPTIONS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20211206/model/DdlOption.h>
#include <tencentcloud/dts/v20211206/model/ConflictHandleOption.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * Data sync options
                */
                class DynamicOptions : public AbstractModel
                {
                public:
                    DynamicOptions();
                    ~DynamicOptions() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取DML and DDL options to be synced. Valid values: `Insert` (INSERT), `Update` (UPDATE), `Delete` (DELETE), `DDL` (structure sync), `PartialDDL` (custom option, which is used together with `DdlOptions`). This parameter is required, and its value will overwrite the previous value. Note: This field may return null, indicating that no valid values can be obtained.
                     * @return OpTypes DML and DDL options to be synced. Valid values: `Insert` (INSERT), `Update` (UPDATE), `Delete` (DELETE), `DDL` (structure sync), `PartialDDL` (custom option, which is used together with `DdlOptions`). This parameter is required, and its value will overwrite the previous value. Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetOpTypes() const;

                    /**
                     * 设置DML and DDL options to be synced. Valid values: `Insert` (INSERT), `Update` (UPDATE), `Delete` (DELETE), `DDL` (structure sync), `PartialDDL` (custom option, which is used together with `DdlOptions`). This parameter is required, and its value will overwrite the previous value. Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _opTypes DML and DDL options to be synced. Valid values: `Insert` (INSERT), `Update` (UPDATE), `Delete` (DELETE), `DDL` (structure sync), `PartialDDL` (custom option, which is used together with `DdlOptions`). This parameter is required, and its value will overwrite the previous value. Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetOpTypes(const std::vector<std::string>& _opTypes);

                    /**
                     * 判断参数 OpTypes 是否已赋值
                     * @return OpTypes 是否已赋值
                     * 
                     */
                    bool OpTypesHasBeenSet() const;

                    /**
                     * 获取DDL options to be synced. This parameter is required when `OpTypes` is `PartialDDL`, and its value will overwrite the previous value. Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DdlOptions DDL options to be synced. This parameter is required when `OpTypes` is `PartialDDL`, and its value will overwrite the previous value. Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<DdlOption> GetDdlOptions() const;

                    /**
                     * 设置DDL options to be synced. This parameter is required when `OpTypes` is `PartialDDL`, and its value will overwrite the previous value. Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _ddlOptions DDL options to be synced. This parameter is required when `OpTypes` is `PartialDDL`, and its value will overwrite the previous value. Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDdlOptions(const std::vector<DdlOption>& _ddlOptions);

                    /**
                     * 判断参数 DdlOptions 是否已赋值
                     * @return DdlOptions 是否已赋值
                     * 
                     */
                    bool DdlOptionsHasBeenSet() const;

                    /**
                     * 获取Conflict resolution method. Valid values: `ReportError` (Report error), `Ignore` (Ignore), `Cover` (Overwrite), `ConditionCover` (Conditionally overwrite). Currently, this parameter cannot be modified if the target of the link is Kafka. Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ConflictHandleType Conflict resolution method. Valid values: `ReportError` (Report error), `Ignore` (Ignore), `Cover` (Overwrite), `ConditionCover` (Conditionally overwrite). Currently, this parameter cannot be modified if the target of the link is Kafka. Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetConflictHandleType() const;

                    /**
                     * 设置Conflict resolution method. Valid values: `ReportError` (Report error), `Ignore` (Ignore), `Cover` (Overwrite), `ConditionCover` (Conditionally overwrite). Currently, this parameter cannot be modified if the target of the link is Kafka. Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _conflictHandleType Conflict resolution method. Valid values: `ReportError` (Report error), `Ignore` (Ignore), `Cover` (Overwrite), `ConditionCover` (Conditionally overwrite). Currently, this parameter cannot be modified if the target of the link is Kafka. Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetConflictHandleType(const std::string& _conflictHandleType);

                    /**
                     * 判断参数 ConflictHandleType 是否已赋值
                     * @return ConflictHandleType 是否已赋值
                     * 
                     */
                    bool ConflictHandleTypeHasBeenSet() const;

                    /**
                     * 获取Detailed options of the conflict resolution method, such as the conditionally overwritten rows and condition operations for the “conditionally overwrite” method. The internal field of this parameter cannot be modified separately. If this parameter needs to be updated, update it fully. Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ConflictHandleOption Detailed options of the conflict resolution method, such as the conditionally overwritten rows and condition operations for the “conditionally overwrite” method. The internal field of this parameter cannot be modified separately. If this parameter needs to be updated, update it fully. Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    ConflictHandleOption GetConflictHandleOption() const;

                    /**
                     * 设置Detailed options of the conflict resolution method, such as the conditionally overwritten rows and condition operations for the “conditionally overwrite” method. The internal field of this parameter cannot be modified separately. If this parameter needs to be updated, update it fully. Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _conflictHandleOption Detailed options of the conflict resolution method, such as the conditionally overwritten rows and condition operations for the “conditionally overwrite” method. The internal field of this parameter cannot be modified separately. If this parameter needs to be updated, update it fully. Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetConflictHandleOption(const ConflictHandleOption& _conflictHandleOption);

                    /**
                     * 判断参数 ConflictHandleOption 是否已赋值
                     * @return ConflictHandleOption 是否已赋值
                     * 
                     */
                    bool ConflictHandleOptionHasBeenSet() const;

                private:

                    /**
                     * DML and DDL options to be synced. Valid values: `Insert` (INSERT), `Update` (UPDATE), `Delete` (DELETE), `DDL` (structure sync), `PartialDDL` (custom option, which is used together with `DdlOptions`). This parameter is required, and its value will overwrite the previous value. Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_opTypes;
                    bool m_opTypesHasBeenSet;

                    /**
                     * DDL options to be synced. This parameter is required when `OpTypes` is `PartialDDL`, and its value will overwrite the previous value. Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<DdlOption> m_ddlOptions;
                    bool m_ddlOptionsHasBeenSet;

                    /**
                     * Conflict resolution method. Valid values: `ReportError` (Report error), `Ignore` (Ignore), `Cover` (Overwrite), `ConditionCover` (Conditionally overwrite). Currently, this parameter cannot be modified if the target of the link is Kafka. Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_conflictHandleType;
                    bool m_conflictHandleTypeHasBeenSet;

                    /**
                     * Detailed options of the conflict resolution method, such as the conditionally overwritten rows and condition operations for the “conditionally overwrite” method. The internal field of this parameter cannot be modified separately. If this parameter needs to be updated, update it fully. Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    ConflictHandleOption m_conflictHandleOption;
                    bool m_conflictHandleOptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_DYNAMICOPTIONS_H_
