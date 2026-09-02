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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECWPSCANIPINFORESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECWPSCANIPINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeCWPScanIpInfo response structure.
                */
                class DescribeCWPScanIpInfoResponse : public AbstractModel
                {
                public:
                    DescribeCWPScanIpInfoResponse();
                    ~DescribeCWPScanIpInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Associated business</p>
                     * @return Bussiness <p>Associated business</p>
                     * 
                     */
                    std::string GetBussiness() const;

                    /**
                     * 判断参数 Bussiness 是否已赋值
                     * @return Bussiness 是否已赋值
                     * 
                     */
                    bool BussinessHasBeenSet() const;

                    /**
                     * 获取<p>Business characteristic</p>
                     * @return Characteristic <p>Business characteristic</p>
                     * 
                     */
                    std::string GetCharacteristic() const;

                    /**
                     * 判断参数 Characteristic 是否已赋值
                     * @return Characteristic 是否已赋值
                     * 
                     */
                    bool CharacteristicHasBeenSet() const;

                    /**
                     * 获取<p>Description.</p>
                     * @return Describe <p>Description.</p>
                     * 
                     */
                    std::string GetDescribe() const;

                    /**
                     * 判断参数 Describe 是否已赋值
                     * @return Describe 是否已赋值
                     * 
                     */
                    bool DescribeHasBeenSet() const;

                    /**
                     * 获取<p>Official announcement</p>
                     * @return Referer <p>Official announcement</p>
                     * 
                     */
                    std::string GetReferer() const;

                    /**
                     * 判断参数 Referer 是否已赋值
                     * @return Referer 是否已赋值
                     * 
                     */
                    bool RefererHasBeenSet() const;

                    /**
                     * 获取<p>Scan example</p>
                     * @return Demo <p>Scan example</p>
                     * 
                     */
                    std::string GetDemo() const;

                    /**
                     * 判断参数 Demo 是否已赋值
                     * @return Demo 是否已赋值
                     * 
                     */
                    bool DemoHasBeenSet() const;

                    /**
                     * 获取<p>Scan target</p>
                     * @return Target <p>Scan target</p>
                     * 
                     */
                    std::string GetTarget() const;

                    /**
                     * 判断参数 Target 是否已赋值
                     * @return Target 是否已赋值
                     * 
                     */
                    bool TargetHasBeenSet() const;

                    /**
                     * 获取<p>Scan target</p>
                     * @return Purpose <p>Scan target</p>
                     * 
                     */
                    std::string GetPurpose() const;

                    /**
                     * 判断参数 Purpose 是否已赋值
                     * @return Purpose 是否已赋值
                     * 
                     */
                    bool PurposeHasBeenSet() const;

                    /**
                     * 获取<p>Product copywriting</p>
                     * @return Announcement <p>Product copywriting</p>
                     * 
                     */
                    std::string GetAnnouncement() const;

                    /**
                     * 判断参数 Announcement 是否已赋值
                     * @return Announcement 是否已赋值
                     * 
                     */
                    bool AnnouncementHasBeenSet() const;

                    /**
                     * 获取<p>Geographic location</p>
                     * @return Location <p>Geographic location</p>
                     * 
                     */
                    std::string GetLocation() const;

                    /**
                     * 判断参数 Location 是否已赋值
                     * @return Location 是否已赋值
                     * 
                     */
                    bool LocationHasBeenSet() const;

                    /**
                     * 获取<p>Associated operator</p>
                     * @return ISP <p>Associated operator</p>
                     * 
                     */
                    std::string GetISP() const;

                    /**
                     * 判断参数 ISP 是否已赋值
                     * @return ISP 是否已赋值
                     * 
                     */
                    bool ISPHasBeenSet() const;

                    /**
                     * 获取<p>Whether it belongs to Tencent</p>
                     * @return IsBelongTencent <p>Whether it belongs to Tencent</p>
                     * 
                     */
                    bool GetIsBelongTencent() const;

                    /**
                     * 判断参数 IsBelongTencent 是否已赋值
                     * @return IsBelongTencent 是否已赋值
                     * 
                     */
                    bool IsBelongTencentHasBeenSet() const;

                private:

                    /**
                     * <p>Associated business</p>
                     */
                    std::string m_bussiness;
                    bool m_bussinessHasBeenSet;

                    /**
                     * <p>Business characteristic</p>
                     */
                    std::string m_characteristic;
                    bool m_characteristicHasBeenSet;

                    /**
                     * <p>Description.</p>
                     */
                    std::string m_describe;
                    bool m_describeHasBeenSet;

                    /**
                     * <p>Official announcement</p>
                     */
                    std::string m_referer;
                    bool m_refererHasBeenSet;

                    /**
                     * <p>Scan example</p>
                     */
                    std::string m_demo;
                    bool m_demoHasBeenSet;

                    /**
                     * <p>Scan target</p>
                     */
                    std::string m_target;
                    bool m_targetHasBeenSet;

                    /**
                     * <p>Scan target</p>
                     */
                    std::string m_purpose;
                    bool m_purposeHasBeenSet;

                    /**
                     * <p>Product copywriting</p>
                     */
                    std::string m_announcement;
                    bool m_announcementHasBeenSet;

                    /**
                     * <p>Geographic location</p>
                     */
                    std::string m_location;
                    bool m_locationHasBeenSet;

                    /**
                     * <p>Associated operator</p>
                     */
                    std::string m_iSP;
                    bool m_iSPHasBeenSet;

                    /**
                     * <p>Whether it belongs to Tencent</p>
                     */
                    bool m_isBelongTencent;
                    bool m_isBelongTencentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECWPSCANIPINFORESPONSE_H_
