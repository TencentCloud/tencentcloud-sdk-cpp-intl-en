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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_SLOWLOGHOST_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_SLOWLOGHOST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * Details of slow log source addresses.
                */
                class SlowLogHost : public AbstractModel
                {
                public:
                    SlowLogHost();
                    ~SlowLogHost() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Source addresses.
                     * @return UserHost Source addresses.
                     */
                    std::string GetUserHost() const;

                    /**
                     * 设置Source addresses.
                     * @param UserHost Source addresses.
                     */
                    void SetUserHost(const std::string& _userHost);

                    /**
                     * 判断参数 UserHost 是否已赋值
                     * @return UserHost 是否已赋值
                     */
                    bool UserHostHasBeenSet() const;

                    /**
                     * 获取Proportion (in %) of slow logs from this source address to the total number of slow logs.
                     * @return Ratio Proportion (in %) of slow logs from this source address to the total number of slow logs.
                     */
                    double GetRatio() const;

                    /**
                     * 设置Proportion (in %) of slow logs from this source address to the total number of slow logs.
                     * @param Ratio Proportion (in %) of slow logs from this source address to the total number of slow logs.
                     */
                    void SetRatio(const double& _ratio);

                    /**
                     * 判断参数 Ratio 是否已赋值
                     * @return Ratio 是否已赋值
                     */
                    bool RatioHasBeenSet() const;

                    /**
                     * 获取Number of slow logs from this source address.
                     * @return Count Number of slow logs from this source address.
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置Number of slow logs from this source address.
                     * @param Count Number of slow logs from this source address.
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     */
                    bool CountHasBeenSet() const;

                private:

                    /**
                     * Source addresses.
                     */
                    std::string m_userHost;
                    bool m_userHostHasBeenSet;

                    /**
                     * Proportion (in %) of slow logs from this source address to the total number of slow logs.
                     */
                    double m_ratio;
                    bool m_ratioHasBeenSet;

                    /**
                     * Number of slow logs from this source address.
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_SLOWLOGHOST_H_
