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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_SETDRMKEYPROVIDERINFOREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_SETDRMKEYPROVIDERINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/SDMCDrmKeyProviderInfo.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * SetDrmKeyProviderInfo request structure.
                */
                class SetDrmKeyProviderInfoRequest : public AbstractModel
                {
                public:
                    SetDrmKeyProviderInfoRequest();
                    ~SetDrmKeyProviderInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The DRM key information provided by SDMC.
                     * @return SDMCInfo The DRM key information provided by SDMC.
                     * 
                     */
                    SDMCDrmKeyProviderInfo GetSDMCInfo() const;

                    /**
                     * 设置The DRM key information provided by SDMC.
                     * @param _sDMCInfo The DRM key information provided by SDMC.
                     * 
                     */
                    void SetSDMCInfo(const SDMCDrmKeyProviderInfo& _sDMCInfo);

                    /**
                     * 判断参数 SDMCInfo 是否已赋值
                     * @return SDMCInfo 是否已赋值
                     * 
                     */
                    bool SDMCInfoHasBeenSet() const;

                    /**
                     * 获取<b>The VOD [application](https://intl.cloud.tencent.com/document/product/266/14574) ID. For customers who activate VOD service from December 25, 2023, if they want to access resources in a VOD application (whether it's the default application or a newly created one), they must fill in this field with the application ID.</b>
                     * @return SubAppId <b>The VOD [application](https://intl.cloud.tencent.com/document/product/266/14574) ID. For customers who activate VOD service from December 25, 2023, if they want to access resources in a VOD application (whether it's the default application or a newly created one), they must fill in this field with the application ID.</b>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<b>The VOD [application](https://intl.cloud.tencent.com/document/product/266/14574) ID. For customers who activate VOD service from December 25, 2023, if they want to access resources in a VOD application (whether it's the default application or a newly created one), they must fill in this field with the application ID.</b>
                     * @param _subAppId <b>The VOD [application](https://intl.cloud.tencent.com/document/product/266/14574) ID. For customers who activate VOD service from December 25, 2023, if they want to access resources in a VOD application (whether it's the default application or a newly created one), they must fill in this field with the application ID.</b>
                     * 
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                private:

                    /**
                     * The DRM key information provided by SDMC.
                     */
                    SDMCDrmKeyProviderInfo m_sDMCInfo;
                    bool m_sDMCInfoHasBeenSet;

                    /**
                     * <b>The VOD [application](https://intl.cloud.tencent.com/document/product/266/14574) ID. For customers who activate VOD service from December 25, 2023, if they want to access resources in a VOD application (whether it's the default application or a newly created one), they must fill in this field with the application ID.</b>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_SETDRMKEYPROVIDERINFOREQUEST_H_
