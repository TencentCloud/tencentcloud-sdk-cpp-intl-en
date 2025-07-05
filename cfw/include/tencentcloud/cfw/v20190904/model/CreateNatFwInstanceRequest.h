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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_CREATENATFWINSTANCEREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_CREATENATFWINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfw/v20190904/model/NewModeItems.h>
#include <tencentcloud/cfw/v20190904/model/FwCidrInfo.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * CreateNatFwInstance request structure.
                */
                class CreateNatFwInstanceRequest : public AbstractModel
                {
                public:
                    CreateNatFwInstanceRequest();
                    ~CreateNatFwInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Firewall instance name
                     * @return Name Firewall instance name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Firewall instance name
                     * @param _name Firewall instance name
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
                     * 获取Bandwidth
                     * @return Width Bandwidth
                     * 
                     */
                    int64_t GetWidth() const;

                    /**
                     * 设置Bandwidth
                     * @param _width Bandwidth
                     * 
                     */
                    void SetWidth(const int64_t& _width);

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     * 
                     */
                    bool WidthHasBeenSet() const;

                    /**
                     * 获取Mode. 1: use existing; 0: create new
                     * @return Mode Mode. 1: use existing; 0: create new
                     * 
                     */
                    int64_t GetMode() const;

                    /**
                     * 设置Mode. 1: use existing; 0: create new
                     * @param _mode Mode. 1: use existing; 0: create new
                     * 
                     */
                    void SetMode(const int64_t& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取Parameter passed for the Create New mode. Either NewModeItems or NatgwList is required.
                     * @return NewModeItems Parameter passed for the Create New mode. Either NewModeItems or NatgwList is required.
                     * 
                     */
                    NewModeItems GetNewModeItems() const;

                    /**
                     * 设置Parameter passed for the Create New mode. Either NewModeItems or NatgwList is required.
                     * @param _newModeItems Parameter passed for the Create New mode. Either NewModeItems or NatgwList is required.
                     * 
                     */
                    void SetNewModeItems(const NewModeItems& _newModeItems);

                    /**
                     * 判断参数 NewModeItems 是否已赋值
                     * @return NewModeItems 是否已赋值
                     * 
                     */
                    bool NewModeItemsHasBeenSet() const;

                    /**
                     * 获取NAT gateway list for the Using Existing mode. Either NewModeItems or NatgwList is required.
                     * @return NatGwList NAT gateway list for the Using Existing mode. Either NewModeItems or NatgwList is required.
                     * 
                     */
                    std::vector<std::string> GetNatGwList() const;

                    /**
                     * 设置NAT gateway list for the Using Existing mode. Either NewModeItems or NatgwList is required.
                     * @param _natGwList NAT gateway list for the Using Existing mode. Either NewModeItems or NatgwList is required.
                     * 
                     */
                    void SetNatGwList(const std::vector<std::string>& _natGwList);

                    /**
                     * 判断参数 NatGwList 是否已赋值
                     * @return NatGwList 是否已赋值
                     * 
                     */
                    bool NatGwListHasBeenSet() const;

                    /**
                     * 获取Primary zone. The default zone is selected if it is empty.
                     * @return Zone Primary zone. The default zone is selected if it is empty.
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置Primary zone. The default zone is selected if it is empty.
                     * @param _zone Primary zone. The default zone is selected if it is empty.
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取Secondary zone. The default zone is selected if it is empty.
                     * @return ZoneBak Secondary zone. The default zone is selected if it is empty.
                     * 
                     */
                    std::string GetZoneBak() const;

                    /**
                     * 设置Secondary zone. The default zone is selected if it is empty.
                     * @param _zoneBak Secondary zone. The default zone is selected if it is empty.
                     * 
                     */
                    void SetZoneBak(const std::string& _zoneBak);

                    /**
                     * 判断参数 ZoneBak 是否已赋值
                     * @return ZoneBak 是否已赋值
                     * 
                     */
                    bool ZoneBakHasBeenSet() const;

                    /**
                     * 获取Remote disaster recovery. 1: enable; 0: disable; empty: disable by default
                     * @return CrossAZone Remote disaster recovery. 1: enable; 0: disable; empty: disable by default
                     * 
                     */
                    int64_t GetCrossAZone() const;

                    /**
                     * 设置Remote disaster recovery. 1: enable; 0: disable; empty: disable by default
                     * @param _crossAZone Remote disaster recovery. 1: enable; 0: disable; empty: disable by default
                     * 
                     */
                    void SetCrossAZone(const int64_t& _crossAZone);

                    /**
                     * 判断参数 CrossAZone 是否已赋值
                     * @return CrossAZone 是否已赋值
                     * 
                     */
                    bool CrossAZoneHasBeenSet() const;

                    /**
                     * 获取IP range of the firewall
                     * @return FwCidrInfo IP range of the firewall
                     * 
                     */
                    FwCidrInfo GetFwCidrInfo() const;

                    /**
                     * 设置IP range of the firewall
                     * @param _fwCidrInfo IP range of the firewall
                     * 
                     */
                    void SetFwCidrInfo(const FwCidrInfo& _fwCidrInfo);

                    /**
                     * 判断参数 FwCidrInfo 是否已赋值
                     * @return FwCidrInfo 是否已赋值
                     * 
                     */
                    bool FwCidrInfoHasBeenSet() const;

                private:

                    /**
                     * Firewall instance name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Bandwidth
                     */
                    int64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * Mode. 1: use existing; 0: create new
                     */
                    int64_t m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * Parameter passed for the Create New mode. Either NewModeItems or NatgwList is required.
                     */
                    NewModeItems m_newModeItems;
                    bool m_newModeItemsHasBeenSet;

                    /**
                     * NAT gateway list for the Using Existing mode. Either NewModeItems or NatgwList is required.
                     */
                    std::vector<std::string> m_natGwList;
                    bool m_natGwListHasBeenSet;

                    /**
                     * Primary zone. The default zone is selected if it is empty.
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * Secondary zone. The default zone is selected if it is empty.
                     */
                    std::string m_zoneBak;
                    bool m_zoneBakHasBeenSet;

                    /**
                     * Remote disaster recovery. 1: enable; 0: disable; empty: disable by default
                     */
                    int64_t m_crossAZone;
                    bool m_crossAZoneHasBeenSet;

                    /**
                     * IP range of the firewall
                     */
                    FwCidrInfo m_fwCidrInfo;
                    bool m_fwCidrInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_CREATENATFWINSTANCEREQUEST_H_
