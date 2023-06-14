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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_ACCELERATEAREAINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_ACCELERATEAREAINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Acceleration region information of the domain name
                */
                class AccelerateAreaInfo : public AbstractModel
                {
                public:
                    AccelerateAreaInfo();
                    ~AccelerateAreaInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Acceleration region. Valid values:
<li>Chinese Mainland</li>
<li>Outside Chinese Mainland</li>
                     * @return Area Acceleration region. Valid values:
<li>Chinese Mainland</li>
<li>Outside Chinese Mainland</li>
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置Acceleration region. Valid values:
<li>Chinese Mainland</li>
<li>Outside Chinese Mainland</li>
                     * @param _area Acceleration region. Valid values:
<li>Chinese Mainland</li>
<li>Outside Chinese Mainland</li>
                     * 
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取Reason why acceleration is disabled by Tencent Cloud. Valid values:
<li>ForLegalReasons: legal reasons</li>
<li>ForOverdueBills: overdue payment</li>
                     * @return TencentDisableReason Reason why acceleration is disabled by Tencent Cloud. Valid values:
<li>ForLegalReasons: legal reasons</li>
<li>ForOverdueBills: overdue payment</li>
                     * 
                     */
                    std::string GetTencentDisableReason() const;

                    /**
                     * 设置Reason why acceleration is disabled by Tencent Cloud. Valid values:
<li>ForLegalReasons: legal reasons</li>
<li>ForOverdueBills: overdue payment</li>
                     * @param _tencentDisableReason Reason why acceleration is disabled by Tencent Cloud. Valid values:
<li>ForLegalReasons: legal reasons</li>
<li>ForOverdueBills: overdue payment</li>
                     * 
                     */
                    void SetTencentDisableReason(const std::string& _tencentDisableReason);

                    /**
                     * 判断参数 TencentDisableReason 是否已赋值
                     * @return TencentDisableReason 是否已赋值
                     * 
                     */
                    bool TencentDisableReasonHasBeenSet() const;

                    /**
                     * 获取CNAME of the acceleration domain name
                     * @return TencentEdgeDomain CNAME of the acceleration domain name
                     * 
                     */
                    std::string GetTencentEdgeDomain() const;

                    /**
                     * 设置CNAME of the acceleration domain name
                     * @param _tencentEdgeDomain CNAME of the acceleration domain name
                     * 
                     */
                    void SetTencentEdgeDomain(const std::string& _tencentEdgeDomain);

                    /**
                     * 判断参数 TencentEdgeDomain 是否已赋值
                     * @return TencentEdgeDomain 是否已赋值
                     * 
                     */
                    bool TencentEdgeDomainHasBeenSet() const;

                private:

                    /**
                     * Acceleration region. Valid values:
<li>Chinese Mainland</li>
<li>Outside Chinese Mainland</li>
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * Reason why acceleration is disabled by Tencent Cloud. Valid values:
<li>ForLegalReasons: legal reasons</li>
<li>ForOverdueBills: overdue payment</li>
                     */
                    std::string m_tencentDisableReason;
                    bool m_tencentDisableReasonHasBeenSet;

                    /**
                     * CNAME of the acceleration domain name
                     */
                    std::string m_tencentEdgeDomain;
                    bool m_tencentEdgeDomainHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_ACCELERATEAREAINFO_H_
