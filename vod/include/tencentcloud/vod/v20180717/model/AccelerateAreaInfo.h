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
                * Regional acceleration information of the domain.
                */
                class AccelerateAreaInfo : public AbstractModel
                {
                public:
                    AccelerateAreaInfo();
                    ~AccelerateAreaInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Acceleration region. Available values:
<li>Chinese Mainland: within the Chinese mainland (excluding Hong Kong (China), Macao (China), and Taiwan (China)).</li>
<li>Outside Chinese Mainland: outside the Chinese mainland.</li>
                     * @return Area Acceleration region. Available values:
<li>Chinese Mainland: within the Chinese mainland (excluding Hong Kong (China), Macao (China), and Taiwan (China)).</li>
<li>Outside Chinese Mainland: outside the Chinese mainland.</li>
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置Acceleration region. Available values:
<li>Chinese Mainland: within the Chinese mainland (excluding Hong Kong (China), Macao (China), and Taiwan (China)).</li>
<li>Outside Chinese Mainland: outside the Chinese mainland.</li>
                     * @param _area Acceleration region. Available values:
<li>Chinese Mainland: within the Chinese mainland (excluding Hong Kong (China), Macao (China), and Taiwan (China)).</li>
<li>Outside Chinese Mainland: outside the Chinese mainland.</li>
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
                     * 获取Tencent disable reason. Available values:
<li>ForLegalReasons: Acceleration disabled due to legal reasons;</li>
<li>ForOverdueBills: Acceleration is disabled due to service suspension for overdue payment.</li>
                     * @return TencentDisableReason Tencent disable reason. Available values:
<li>ForLegalReasons: Acceleration disabled due to legal reasons;</li>
<li>ForOverdueBills: Acceleration is disabled due to service suspension for overdue payment.</li>
                     * 
                     */
                    std::string GetTencentDisableReason() const;

                    /**
                     * 设置Tencent disable reason. Available values:
<li>ForLegalReasons: Acceleration disabled due to legal reasons;</li>
<li>ForOverdueBills: Acceleration is disabled due to service suspension for overdue payment.</li>
                     * @param _tencentDisableReason Tencent disable reason. Available values:
<li>ForLegalReasons: Acceleration disabled due to legal reasons;</li>
<li>ForOverdueBills: Acceleration is disabled due to service suspension for overdue payment.</li>
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
                     * 获取CNAME domain name corresponding to the acceleration domain.
                     * @return TencentEdgeDomain CNAME domain name corresponding to the acceleration domain.
                     * 
                     */
                    std::string GetTencentEdgeDomain() const;

                    /**
                     * 设置CNAME domain name corresponding to the acceleration domain.
                     * @param _tencentEdgeDomain CNAME domain name corresponding to the acceleration domain.
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
                     * Acceleration region. Available values:
<li>Chinese Mainland: within the Chinese mainland (excluding Hong Kong (China), Macao (China), and Taiwan (China)).</li>
<li>Outside Chinese Mainland: outside the Chinese mainland.</li>
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * Tencent disable reason. Available values:
<li>ForLegalReasons: Acceleration disabled due to legal reasons;</li>
<li>ForOverdueBills: Acceleration is disabled due to service suspension for overdue payment.</li>
                     */
                    std::string m_tencentDisableReason;
                    bool m_tencentDisableReasonHasBeenSet;

                    /**
                     * CNAME domain name corresponding to the acceleration domain.
                     */
                    std::string m_tencentEdgeDomain;
                    bool m_tencentEdgeDomainHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_ACCELERATEAREAINFO_H_
