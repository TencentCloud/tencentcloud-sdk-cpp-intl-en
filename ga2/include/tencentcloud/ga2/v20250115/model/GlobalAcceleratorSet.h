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

#ifndef TENCENTCLOUD_GA2_V20250115_MODEL_GLOBALACCELERATORSET_H_
#define TENCENTCLOUD_GA2_V20250115_MODEL_GLOBALACCELERATORSET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ga2/v20250115/model/Tag.h>


namespace TencentCloud
{
    namespace Ga2
    {
        namespace V20250115
        {
            namespace Model
            {
                /**
                * Global acceleration instance information
                */
                class GlobalAcceleratorSet : public AbstractModel
                {
                public:
                    GlobalAcceleratorSet();
                    ~GlobalAcceleratorSet() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Global acceleration instance ID.</p>
                     * @return GlobalAcceleratorId <p>Global acceleration instance ID.</p>
                     * 
                     */
                    std::string GetGlobalAcceleratorId() const;

                    /**
                     * 设置<p>Global acceleration instance ID.</p>
                     * @param _globalAcceleratorId <p>Global acceleration instance ID.</p>
                     * 
                     */
                    void SetGlobalAcceleratorId(const std::string& _globalAcceleratorId);

                    /**
                     * 判断参数 GlobalAcceleratorId 是否已赋值
                     * @return GlobalAcceleratorId 是否已赋值
                     * 
                     */
                    bool GlobalAcceleratorIdHasBeenSet() const;

                    /**
                     * 获取<p>Global acceleration instance name.</p>
                     * @return Name <p>Global acceleration instance name.</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Global acceleration instance name.</p>
                     * @param _name <p>Global acceleration instance name.</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>Global acceleration instance description.</p>
                     * @return Description <p>Global acceleration instance description.</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>Global acceleration instance description.</p>
                     * @param _description <p>Global acceleration instance description.</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>Instance creation time of the global acceleration instance.</p>
                     * @return CreateTime <p>Instance creation time of the global acceleration instance.</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>Instance creation time of the global acceleration instance.</p>
                     * @param _createTime <p>Instance creation time of the global acceleration instance.</p>
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>Global acceleration instance status.</p>
                     * @return State <p>Global acceleration instance status.</p>
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置<p>Global acceleration instance status.</p>
                     * @param _state <p>Global acceleration instance status.</p>
                     * 
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取<p>Billing type of a global acceleration instance.</p>
                     * @return InstanceChargeType <p>Billing type of a global acceleration instance.</p>
                     * 
                     */
                    std::string GetInstanceChargeType() const;

                    /**
                     * 设置<p>Billing type of a global acceleration instance.</p>
                     * @param _instanceChargeType <p>Billing type of a global acceleration instance.</p>
                     * 
                     */
                    void SetInstanceChargeType(const std::string& _instanceChargeType);

                    /**
                     * 判断参数 InstanceChargeType 是否已赋值
                     * @return InstanceChargeType 是否已赋值
                     * 
                     */
                    bool InstanceChargeTypeHasBeenSet() const;

                    /**
                     * 获取<p>DDoS ID of the global acceleration instance.</p>
                     * @return DdosId <p>DDoS ID of the global acceleration instance.</p>
                     * 
                     */
                    std::string GetDdosId() const;

                    /**
                     * 设置<p>DDoS ID of the global acceleration instance.</p>
                     * @param _ddosId <p>DDoS ID of the global acceleration instance.</p>
                     * 
                     */
                    void SetDdosId(const std::string& _ddosId);

                    /**
                     * 判断参数 DdosId 是否已赋值
                     * @return DdosId 是否已赋值
                     * 
                     */
                    bool DdosIdHasBeenSet() const;

                    /**
                     * 获取<p>Number of listeners of the associated acceleration instance.</p>
                     * @return ListenerCounts <p>Number of listeners of the associated acceleration instance.</p>
                     * 
                     */
                    uint64_t GetListenerCounts() const;

                    /**
                     * 设置<p>Number of listeners of the associated acceleration instance.</p>
                     * @param _listenerCounts <p>Number of listeners of the associated acceleration instance.</p>
                     * 
                     */
                    void SetListenerCounts(const uint64_t& _listenerCounts);

                    /**
                     * 判断参数 ListenerCounts 是否已赋值
                     * @return ListenerCounts 是否已赋值
                     * 
                     */
                    bool ListenerCountsHasBeenSet() const;

                    /**
                     * 获取<p>Count of acceleration regions belonging to the acceleration instance.</p>
                     * @return AcceleratorAreaCounts <p>Count of acceleration regions belonging to the acceleration instance.</p>
                     * 
                     */
                    uint64_t GetAcceleratorAreaCounts() const;

                    /**
                     * 设置<p>Count of acceleration regions belonging to the acceleration instance.</p>
                     * @param _acceleratorAreaCounts <p>Count of acceleration regions belonging to the acceleration instance.</p>
                     * 
                     */
                    void SetAcceleratorAreaCounts(const uint64_t& _acceleratorAreaCounts);

                    /**
                     * 判断参数 AcceleratorAreaCounts 是否已赋值
                     * @return AcceleratorAreaCounts 是否已赋值
                     * 
                     */
                    bool AcceleratorAreaCountsHasBeenSet() const;

                    /**
                     * 获取<p>Global acceleration instance status.</p>
                     * @return Status <p>Global acceleration instance status.</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>Global acceleration instance status.</p>
                     * @param _status <p>Global acceleration instance status.</p>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>Domain name.</p>
                     * @return Cname <p>Domain name.</p>
                     * 
                     */
                    std::string GetCname() const;

                    /**
                     * 设置<p>Domain name.</p>
                     * @param _cname <p>Domain name.</p>
                     * 
                     */
                    void SetCname(const std::string& _cname);

                    /**
                     * 判断参数 Cname 是否已赋值
                     * @return Cname 是否已赋值
                     * 
                     */
                    bool CnameHasBeenSet() const;

                    /**
                     * 获取<p>Cross-border type; HighQuality (high-quality cross-border), Unicom (China Unicom cross-border), NotAvailable (not enabled).</p>
                     * @return CrossBorderType <p>Cross-border type; HighQuality (high-quality cross-border), Unicom (China Unicom cross-border), NotAvailable (not enabled).</p>
                     * 
                     */
                    std::string GetCrossBorderType() const;

                    /**
                     * 设置<p>Cross-border type; HighQuality (high-quality cross-border), Unicom (China Unicom cross-border), NotAvailable (not enabled).</p>
                     * @param _crossBorderType <p>Cross-border type; HighQuality (high-quality cross-border), Unicom (China Unicom cross-border), NotAvailable (not enabled).</p>
                     * 
                     */
                    void SetCrossBorderType(const std::string& _crossBorderType);

                    /**
                     * 判断参数 CrossBorderType 是否已赋值
                     * @return CrossBorderType 是否已赋值
                     * 
                     */
                    bool CrossBorderTypeHasBeenSet() const;

                    /**
                     * 获取<p>Tag information.</p>
                     * @return TagSet <p>Tag information.</p>
                     * 
                     */
                    std::vector<Tag> GetTagSet() const;

                    /**
                     * 设置<p>Tag information.</p>
                     * @param _tagSet <p>Tag information.</p>
                     * 
                     */
                    void SetTagSet(const std::vector<Tag>& _tagSet);

                    /**
                     * 判断参数 TagSet 是否已赋值
                     * @return TagSet 是否已赋值
                     * 
                     */
                    bool TagSetHasBeenSet() const;

                private:

                    /**
                     * <p>Global acceleration instance ID.</p>
                     */
                    std::string m_globalAcceleratorId;
                    bool m_globalAcceleratorIdHasBeenSet;

                    /**
                     * <p>Global acceleration instance name.</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Global acceleration instance description.</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>Instance creation time of the global acceleration instance.</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>Global acceleration instance status.</p>
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * <p>Billing type of a global acceleration instance.</p>
                     */
                    std::string m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                    /**
                     * <p>DDoS ID of the global acceleration instance.</p>
                     */
                    std::string m_ddosId;
                    bool m_ddosIdHasBeenSet;

                    /**
                     * <p>Number of listeners of the associated acceleration instance.</p>
                     */
                    uint64_t m_listenerCounts;
                    bool m_listenerCountsHasBeenSet;

                    /**
                     * <p>Count of acceleration regions belonging to the acceleration instance.</p>
                     */
                    uint64_t m_acceleratorAreaCounts;
                    bool m_acceleratorAreaCountsHasBeenSet;

                    /**
                     * <p>Global acceleration instance status.</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Domain name.</p>
                     */
                    std::string m_cname;
                    bool m_cnameHasBeenSet;

                    /**
                     * <p>Cross-border type; HighQuality (high-quality cross-border), Unicom (China Unicom cross-border), NotAvailable (not enabled).</p>
                     */
                    std::string m_crossBorderType;
                    bool m_crossBorderTypeHasBeenSet;

                    /**
                     * <p>Tag information.</p>
                     */
                    std::vector<Tag> m_tagSet;
                    bool m_tagSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GA2_V20250115_MODEL_GLOBALACCELERATORSET_H_
