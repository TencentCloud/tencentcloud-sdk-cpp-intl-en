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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CLUSTERSLAVEDATA_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CLUSTERSLAVEDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/SlaveZoneAttrItem.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * 
                */
                class ClusterSlaveData : public AbstractModel
                {
                public:
                    ClusterSlaveData();
                    ~ClusterSlaveData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Old primary availability zone.
                     * @return OldMasterZone Old primary availability zone.
                     * 
                     */
                    std::string GetOldMasterZone() const;

                    /**
                     * 设置Old primary availability zone.
                     * @param _oldMasterZone Old primary availability zone.
                     * 
                     */
                    void SetOldMasterZone(const std::string& _oldMasterZone);

                    /**
                     * 判断参数 OldMasterZone 是否已赋值
                     * @return OldMasterZone 是否已赋值
                     * 
                     */
                    bool OldMasterZoneHasBeenSet() const;

                    /**
                     * 获取
                     * @return OldSlaveZone 
                     * 
                     */
                    std::vector<std::string> GetOldSlaveZone() const;

                    /**
                     * 设置
                     * @param _oldSlaveZone 
                     * 
                     */
                    void SetOldSlaveZone(const std::vector<std::string>& _oldSlaveZone);

                    /**
                     * 判断参数 OldSlaveZone 是否已赋值
                     * @return OldSlaveZone 是否已赋值
                     * 
                     */
                    bool OldSlaveZoneHasBeenSet() const;

                    /**
                     * 获取New primary availability zone.
                     * @return NewMasterZone New primary availability zone.
                     * 
                     */
                    std::string GetNewMasterZone() const;

                    /**
                     * 设置New primary availability zone.
                     * @param _newMasterZone New primary availability zone.
                     * 
                     */
                    void SetNewMasterZone(const std::string& _newMasterZone);

                    /**
                     * 判断参数 NewMasterZone 是否已赋值
                     * @return NewMasterZone 是否已赋值
                     * 
                     */
                    bool NewMasterZoneHasBeenSet() const;

                    /**
                     * 获取
                     * @return NewSlaveZone 
                     * 
                     */
                    std::vector<std::string> GetNewSlaveZone() const;

                    /**
                     * 设置
                     * @param _newSlaveZone 
                     * 
                     */
                    void SetNewSlaveZone(const std::vector<std::string>& _newSlaveZone);

                    /**
                     * 判断参数 NewSlaveZone 是否已赋值
                     * @return NewSlaveZone 是否已赋值
                     * 
                     */
                    bool NewSlaveZoneHasBeenSet() const;

                    /**
                     * 获取New from availability zone attribute.
                     * @return NewSlaveZoneAttr New from availability zone attribute.
                     * 
                     */
                    std::vector<SlaveZoneAttrItem> GetNewSlaveZoneAttr() const;

                    /**
                     * 设置New from availability zone attribute.
                     * @param _newSlaveZoneAttr New from availability zone attribute.
                     * 
                     */
                    void SetNewSlaveZoneAttr(const std::vector<SlaveZoneAttrItem>& _newSlaveZoneAttr);

                    /**
                     * 判断参数 NewSlaveZoneAttr 是否已赋值
                     * @return NewSlaveZoneAttr 是否已赋值
                     * 
                     */
                    bool NewSlaveZoneAttrHasBeenSet() const;

                    /**
                     * 获取Old availability zone attributes.
                     * @return OldSlaveZoneAttr Old availability zone attributes.
                     * 
                     */
                    std::vector<SlaveZoneAttrItem> GetOldSlaveZoneAttr() const;

                    /**
                     * 设置Old availability zone attributes.
                     * @param _oldSlaveZoneAttr Old availability zone attributes.
                     * 
                     */
                    void SetOldSlaveZoneAttr(const std::vector<SlaveZoneAttrItem>& _oldSlaveZoneAttr);

                    /**
                     * 判断参数 OldSlaveZoneAttr 是否已赋值
                     * @return OldSlaveZoneAttr 是否已赋值
                     * 
                     */
                    bool OldSlaveZoneAttrHasBeenSet() const;

                private:

                    /**
                     * Old primary availability zone.
                     */
                    std::string m_oldMasterZone;
                    bool m_oldMasterZoneHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<std::string> m_oldSlaveZone;
                    bool m_oldSlaveZoneHasBeenSet;

                    /**
                     * New primary availability zone.
                     */
                    std::string m_newMasterZone;
                    bool m_newMasterZoneHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<std::string> m_newSlaveZone;
                    bool m_newSlaveZoneHasBeenSet;

                    /**
                     * New from availability zone attribute.
                     */
                    std::vector<SlaveZoneAttrItem> m_newSlaveZoneAttr;
                    bool m_newSlaveZoneAttrHasBeenSet;

                    /**
                     * Old availability zone attributes.
                     */
                    std::vector<SlaveZoneAttrItem> m_oldSlaveZoneAttr;
                    bool m_oldSlaveZoneAttrHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CLUSTERSLAVEDATA_H_
