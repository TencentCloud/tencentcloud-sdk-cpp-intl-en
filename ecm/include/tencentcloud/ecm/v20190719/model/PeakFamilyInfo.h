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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_PEAKFAMILYINFO_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_PEAKFAMILYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecm/v20190719/model/InstanceFamilyTypeConfig.h>
#include <tencentcloud/ecm/v20190719/model/PeakBase.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * PeakFamilyInfo: peak information of data such as CPU by model type
                */
                class PeakFamilyInfo : public AbstractModel
                {
                public:
                    PeakFamilyInfo();
                    ~PeakFamilyInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Model type information.
                     * @return InstanceFamily Model type information.
                     * 
                     */
                    InstanceFamilyTypeConfig GetInstanceFamily() const;

                    /**
                     * 设置Model type information.
                     * @param _instanceFamily Model type information.
                     * 
                     */
                    void SetInstanceFamily(const InstanceFamilyTypeConfig& _instanceFamily);

                    /**
                     * 判断参数 InstanceFamily 是否已赋值
                     * @return InstanceFamily 是否已赋值
                     * 
                     */
                    bool InstanceFamilyHasBeenSet() const;

                    /**
                     * 获取Peak information of basic data.
                     * @return PeakBaseSet Peak information of basic data.
                     * 
                     */
                    std::vector<PeakBase> GetPeakBaseSet() const;

                    /**
                     * 设置Peak information of basic data.
                     * @param _peakBaseSet Peak information of basic data.
                     * 
                     */
                    void SetPeakBaseSet(const std::vector<PeakBase>& _peakBaseSet);

                    /**
                     * 判断参数 PeakBaseSet 是否已赋值
                     * @return PeakBaseSet 是否已赋值
                     * 
                     */
                    bool PeakBaseSetHasBeenSet() const;

                private:

                    /**
                     * Model type information.
                     */
                    InstanceFamilyTypeConfig m_instanceFamily;
                    bool m_instanceFamilyHasBeenSet;

                    /**
                     * Peak information of basic data.
                     */
                    std::vector<PeakBase> m_peakBaseSet;
                    bool m_peakBaseSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_PEAKFAMILYINFO_H_
