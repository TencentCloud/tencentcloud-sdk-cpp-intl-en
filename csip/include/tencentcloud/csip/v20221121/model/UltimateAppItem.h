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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_ULTIMATEAPPITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_ULTIMATEAPPITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * User flagship version information.
                */
                class UltimateAppItem : public AbstractModel
                {
                public:
                    UltimateAppItem();
                    ~UltimateAppItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>User AppID.</p>
                     * @return AppID <p>User AppID.</p>
                     * 
                     */
                    uint64_t GetAppID() const;

                    /**
                     * 设置<p>User AppID.</p>
                     * @param _appID <p>User AppID.</p>
                     * 
                     */
                    void SetAppID(const uint64_t& _appID);

                    /**
                     * 判断参数 AppID 是否已赋值
                     * @return AppID 是否已赋值
                     * 
                     */
                    bool AppIDHasBeenSet() const;

                    /**
                     * 获取<p>Whether it is the flagship edition.</p>
                     * @return IsUltimateVersion <p>Whether it is the flagship edition.</p>
                     * 
                     */
                    bool GetIsUltimateVersion() const;

                    /**
                     * 设置<p>Whether it is the flagship edition.</p>
                     * @param _isUltimateVersion <p>Whether it is the flagship edition.</p>
                     * 
                     */
                    void SetIsUltimateVersion(const bool& _isUltimateVersion);

                    /**
                     * 判断参数 IsUltimateVersion 是否已赋值
                     * @return IsUltimateVersion 是否已赋值
                     * 
                     */
                    bool IsUltimateVersionHasBeenSet() const;

                private:

                    /**
                     * <p>User AppID.</p>
                     */
                    uint64_t m_appID;
                    bool m_appIDHasBeenSet;

                    /**
                     * <p>Whether it is the flagship edition.</p>
                     */
                    bool m_isUltimateVersion;
                    bool m_isUltimateVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_ULTIMATEAPPITEM_H_
