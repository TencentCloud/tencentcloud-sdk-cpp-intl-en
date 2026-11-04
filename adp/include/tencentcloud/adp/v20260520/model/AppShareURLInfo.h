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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_APPSHAREURLINFO_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_APPSHAREURLINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/AppShareAccessControl.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * Sharing link information (returned by details query; the non-modifiable part for users; the modifiable part of access_control is handled by ModifyApp)
                */
                class AppShareURLInfo : public AbstractModel
                {
                public:
                    AppShareURLInfo();
                    ~AppShareURLInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Currently effective access control configuration
                     * @return AccessControl Currently effective access control configuration
                     * 
                     */
                    AppShareAccessControl GetAccessControl() const;

                    /**
                     * 设置Currently effective access control configuration
                     * @param _accessControl Currently effective access control configuration
                     * 
                     */
                    void SetAccessControl(const AppShareAccessControl& _accessControl);

                    /**
                     * 判断参数 AccessControl 是否已赋值
                     * @return AccessControl 是否已赋值
                     * 
                     */
                    bool AccessControlHasBeenSet() const;

                    /**
                     * 获取Share URL
                     * @return ShareUrl Share URL
                     * 
                     */
                    std::string GetShareUrl() const;

                    /**
                     * 设置Share URL
                     * @param _shareUrl Share URL
                     * 
                     */
                    void SetShareUrl(const std::string& _shareUrl);

                    /**
                     * 判断参数 ShareUrl 是否已赋值
                     * @return ShareUrl 是否已赋值
                     * 
                     */
                    bool ShareUrlHasBeenSet() const;

                private:

                    /**
                     * Currently effective access control configuration
                     */
                    AppShareAccessControl m_accessControl;
                    bool m_accessControlHasBeenSet;

                    /**
                     * Share URL
                     */
                    std::string m_shareUrl;
                    bool m_shareUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_APPSHAREURLINFO_H_
