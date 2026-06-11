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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_CLOUDFROMCNT_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_CLOUDFROMCNT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * Number of cloud server type instances
                */
                class CloudFromCnt : public AbstractModel
                {
                public:
                    CloudFromCnt();
                    ~CloudFromCnt() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Cloud server type
                     * @return CloudFrom Cloud server type
                     * 
                     */
                    uint64_t GetCloudFrom() const;

                    /**
                     * 设置Cloud server type
                     * @param _cloudFrom Cloud server type
                     * 
                     */
                    void SetCloudFrom(const uint64_t& _cloudFrom);

                    /**
                     * 判断参数 CloudFrom 是否已赋值
                     * @return CloudFrom 是否已赋值
                     * 
                     */
                    bool CloudFromHasBeenSet() const;

                    /**
                     * 获取Number of Machines
                     * @return MachineCnt Number of Machines
                     * 
                     */
                    int64_t GetMachineCnt() const;

                    /**
                     * 设置Number of Machines
                     * @param _machineCnt Number of Machines
                     * 
                     */
                    void SetMachineCnt(const int64_t& _machineCnt);

                    /**
                     * 判断参数 MachineCnt 是否已赋值
                     * @return MachineCnt 是否已赋值
                     * 
                     */
                    bool MachineCntHasBeenSet() const;

                private:

                    /**
                     * Cloud server type
                     */
                    uint64_t m_cloudFrom;
                    bool m_cloudFromHasBeenSet;

                    /**
                     * Number of Machines
                     */
                    int64_t m_machineCnt;
                    bool m_machineCntHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_CLOUDFROMCNT_H_
