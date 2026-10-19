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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_COSAKSET_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_COSAKSET_H_

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
                * cos ak collection
                */
                class CosAkSet : public AbstractModel
                {
                public:
                    CosAkSet();
                    ~CosAkSet() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取App ID of the ak
                     * @return AppId App ID of the ak
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置App ID of the ak
                     * @param _appId App ID of the ak
                     * 
                     */
                    void SetAppId(const uint64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取Collection of ak names
                     * @return AkNameSet Collection of ak names
                     * 
                     */
                    std::vector<std::string> GetAkNameSet() const;

                    /**
                     * 设置Collection of ak names
                     * @param _akNameSet Collection of ak names
                     * 
                     */
                    void SetAkNameSet(const std::vector<std::string>& _akNameSet);

                    /**
                     * 判断参数 AkNameSet 是否已赋值
                     * @return AkNameSet 是否已赋值
                     * 
                     */
                    bool AkNameSetHasBeenSet() const;

                private:

                    /**
                     * App ID of the ak
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * Collection of ak names
                     */
                    std::vector<std::string> m_akNameSet;
                    bool m_akNameSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_COSAKSET_H_
