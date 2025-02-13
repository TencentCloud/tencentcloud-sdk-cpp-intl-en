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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_PACKAGEBUYINFO_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_PACKAGEBUYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * Package purchase information.
                */
                class PackageBuyInfo : public AbstractModel
                {
                public:
                    PackageBuyInfo();
                    ~PackageBuyInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Package id.
                     * @return PackageId Package id.
                     * 
                     */
                    std::string GetPackageId() const;

                    /**
                     * 设置Package id.
                     * @param _packageId Package id.
                     * 
                     */
                    void SetPackageId(const std::string& _packageId);

                    /**
                     * 判断参数 PackageId 是否已赋值
                     * @return PackageId 是否已赋值
                     * 
                     */
                    bool PackageIdHasBeenSet() const;

                    /**
                     * 获取Package type, 0 - outbound call package | 1 - 400 inbound call package.
                     * @return Type Package type, 0 - outbound call package | 1 - 400 inbound call package.
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置Package type, 0 - outbound call package | 1 - 400 inbound call package.
                     * @param _type Package type, 0 - outbound call package | 1 - 400 inbound call package.
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<TOTAL_PACKAGE>.
                     * @return CapacitySize <TOTAL_PACKAGE>.
                     * 
                     */
                    int64_t GetCapacitySize() const;

                    /**
                     * 设置<TOTAL_PACKAGE>.
                     * @param _capacitySize <TOTAL_PACKAGE>.
                     * 
                     */
                    void SetCapacitySize(const int64_t& _capacitySize);

                    /**
                     * 判断参数 CapacitySize 是否已赋值
                     * @return CapacitySize 是否已赋值
                     * 
                     */
                    bool CapacitySizeHasBeenSet() const;

                    /**
                     * 获取Remaining package balance.
                     * @return CapacityRemain Remaining package balance.
                     * 
                     */
                    int64_t GetCapacityRemain() const;

                    /**
                     * 设置Remaining package balance.
                     * @param _capacityRemain Remaining package balance.
                     * 
                     */
                    void SetCapacityRemain(const int64_t& _capacityRemain);

                    /**
                     * 判断参数 CapacityRemain 是否已赋值
                     * @return CapacityRemain 是否已赋值
                     * 
                     */
                    bool CapacityRemainHasBeenSet() const;

                    /**
                     * 获取Purchased timestamp.
                     * @return BuyTime Purchased timestamp.
                     * 
                     */
                    int64_t GetBuyTime() const;

                    /**
                     * 设置Purchased timestamp.
                     * @param _buyTime Purchased timestamp.
                     * 
                     */
                    void SetBuyTime(const int64_t& _buyTime);

                    /**
                     * 判断参数 BuyTime 是否已赋值
                     * @return BuyTime 是否已赋值
                     * 
                     */
                    bool BuyTimeHasBeenSet() const;

                    /**
                     * 获取Deadline timestamp.
                     * @return EndTime Deadline timestamp.
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置Deadline timestamp.
                     * @param _endTime Deadline timestamp.
                     * 
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * Package id.
                     */
                    std::string m_packageId;
                    bool m_packageIdHasBeenSet;

                    /**
                     * Package type, 0 - outbound call package | 1 - 400 inbound call package.
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <TOTAL_PACKAGE>.
                     */
                    int64_t m_capacitySize;
                    bool m_capacitySizeHasBeenSet;

                    /**
                     * Remaining package balance.
                     */
                    int64_t m_capacityRemain;
                    bool m_capacityRemainHasBeenSet;

                    /**
                     * Purchased timestamp.
                     */
                    int64_t m_buyTime;
                    bool m_buyTimeHasBeenSet;

                    /**
                     * Deadline timestamp.
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_PACKAGEBUYINFO_H_
