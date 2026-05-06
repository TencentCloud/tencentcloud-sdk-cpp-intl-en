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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_KONGUPSTREAMPREVIEW_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_KONGUPSTREAMPREVIEW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/KongTarget.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * Cloud-native gateway Upstream info
                */
                class KongUpstreamPreview : public AbstractModel
                {
                public:
                    KongUpstreamPreview();
                    ~KongUpstreamPreview() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Service ID
                     * @return ID Service ID
                     * 
                     */
                    std::string GetID() const;

                    /**
                     * 设置Service ID
                     * @param _iD Service ID
                     * 
                     */
                    void SetID(const std::string& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取Service name.
                     * @return Name Service name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Service name.
                     * @param _name Service name.
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
                     * 获取Backend configuration
                     * @return Target Backend configuration
                     * 
                     */
                    std::vector<KongTarget> GetTarget() const;

                    /**
                     * 设置Backend configuration
                     * @param _target Backend configuration
                     * 
                     */
                    void SetTarget(const std::vector<KongTarget>& _target);

                    /**
                     * 判断参数 Target 是否已赋值
                     * @return Target 是否已赋值
                     * 
                     */
                    bool TargetHasBeenSet() const;

                private:

                    /**
                     * Service ID
                     */
                    std::string m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * Service name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Backend configuration
                     */
                    std::vector<KongTarget> m_target;
                    bool m_targetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_KONGUPSTREAMPREVIEW_H_
