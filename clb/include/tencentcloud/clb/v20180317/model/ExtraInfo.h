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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_EXTRAINFO_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_EXTRAINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * Reserved field which can be ignored generally.
                */
                class ExtraInfo : public AbstractModel
                {
                public:
                    ExtraInfo();
                    ~ExtraInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether to enable VIP direct connection
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ZhiTong Whether to enable VIP direct connection
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool GetZhiTong() const;

                    /**
                     * 设置Whether to enable VIP direct connection
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param ZhiTong Whether to enable VIP direct connection
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetZhiTong(const bool& _zhiTong);

                    /**
                     * 判断参数 ZhiTong 是否已赋值
                     * @return ZhiTong 是否已赋值
                     */
                    bool ZhiTongHasBeenSet() const;

                    /**
                     * 获取TgwGroup name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TgwGroupName TgwGroup name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetTgwGroupName() const;

                    /**
                     * 设置TgwGroup name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param TgwGroupName TgwGroup name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetTgwGroupName(const std::string& _tgwGroupName);

                    /**
                     * 判断参数 TgwGroupName 是否已赋值
                     * @return TgwGroupName 是否已赋值
                     */
                    bool TgwGroupNameHasBeenSet() const;

                private:

                    /**
                     * Whether to enable VIP direct connection
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_zhiTong;
                    bool m_zhiTongHasBeenSet;

                    /**
                     * TgwGroup name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_tgwGroupName;
                    bool m_tgwGroupNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_EXTRAINFO_H_
