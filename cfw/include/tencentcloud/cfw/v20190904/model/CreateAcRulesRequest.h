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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_CREATEACRULESREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_CREATEACRULESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfw/v20190904/model/RuleInfoData.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * CreateAcRules request structure.
                */
                class CreateAcRulesRequest : public AbstractModel
                {
                public:
                    CreateAcRulesRequest();
                    ~CreateAcRulesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Creates rule data
                     * @return Data Creates rule data
                     */
                    std::vector<RuleInfoData> GetData() const;

                    /**
                     * 设置Creates rule data
                     * @param Data Creates rule data
                     */
                    void SetData(const std::vector<RuleInfoData>& _data);

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取0: add (default); 1: insert
                     * @return Type 0: add (default); 1: insert
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置0: add (default); 1: insert
                     * @param Type 0: add (default); 1: insert
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Edge ID
                     * @return EdgeId Edge ID
                     */
                    std::string GetEdgeId() const;

                    /**
                     * 设置Edge ID
                     * @param EdgeId Edge ID
                     */
                    void SetEdgeId(const std::string& _edgeId);

                    /**
                     * 判断参数 EdgeId 是否已赋值
                     * @return EdgeId 是否已赋值
                     */
                    bool EdgeIdHasBeenSet() const;

                    /**
                     * 获取Access control rule status
                     * @return Enable Access control rule status
                     */
                    int64_t GetEnable() const;

                    /**
                     * 设置Access control rule status
                     * @param Enable Access control rule status
                     */
                    void SetEnable(const int64_t& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取0: add; 1: overwrite
                     * @return Overwrite 0: add; 1: overwrite
                     */
                    uint64_t GetOverwrite() const;

                    /**
                     * 设置0: add; 1: overwrite
                     * @param Overwrite 0: add; 1: overwrite
                     */
                    void SetOverwrite(const uint64_t& _overwrite);

                    /**
                     * 判断参数 Overwrite 是否已赋值
                     * @return Overwrite 是否已赋值
                     */
                    bool OverwriteHasBeenSet() const;

                    /**
                     * 获取NAT instance ID, required when the parameter Area exists
                     * @return InstanceId NAT instance ID, required when the parameter Area exists
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置NAT instance ID, required when the parameter Area exists
                     * @param InstanceId NAT instance ID, required when the parameter Area exists
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取portScan: from port scanning; patchImport: from batch import
                     * @return From portScan: from port scanning; patchImport: from batch import
                     */
                    std::string GetFrom() const;

                    /**
                     * 设置portScan: from port scanning; patchImport: from batch import
                     * @param From portScan: from port scanning; patchImport: from batch import
                     */
                    void SetFrom(const std::string& _from);

                    /**
                     * 判断参数 From 是否已赋值
                     * @return From 是否已赋值
                     */
                    bool FromHasBeenSet() const;

                    /**
                     * 获取NAT region
                     * @return Area NAT region
                     */
                    std::string GetArea() const;

                    /**
                     * 设置NAT region
                     * @param Area NAT region
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     */
                    bool AreaHasBeenSet() const;

                private:

                    /**
                     * Creates rule data
                     */
                    std::vector<RuleInfoData> m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * 0: add (default); 1: insert
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Edge ID
                     */
                    std::string m_edgeId;
                    bool m_edgeIdHasBeenSet;

                    /**
                     * Access control rule status
                     */
                    int64_t m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * 0: add; 1: overwrite
                     */
                    uint64_t m_overwrite;
                    bool m_overwriteHasBeenSet;

                    /**
                     * NAT instance ID, required when the parameter Area exists
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * portScan: from port scanning; patchImport: from batch import
                     */
                    std::string m_from;
                    bool m_fromHasBeenSet;

                    /**
                     * NAT region
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_CREATEACRULESREQUEST_H_
