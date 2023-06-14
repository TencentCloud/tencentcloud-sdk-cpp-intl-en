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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_MODULECOUNTER_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_MODULECOUNTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecm/v20190719/model/ISPCounter.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * Node statistics
                */
                class ModuleCounter : public AbstractModel
                {
                public:
                    ModuleCounter();
                    ~ModuleCounter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ISP statistics list
                     * @return ISPCounterSet ISP statistics list
                     * 
                     */
                    std::vector<ISPCounter> GetISPCounterSet() const;

                    /**
                     * 设置ISP statistics list
                     * @param _iSPCounterSet ISP statistics list
                     * 
                     */
                    void SetISPCounterSet(const std::vector<ISPCounter>& _iSPCounterSet);

                    /**
                     * 判断参数 ISPCounterSet 是否已赋值
                     * @return ISPCounterSet 是否已赋值
                     * 
                     */
                    bool ISPCounterSetHasBeenSet() const;

                    /**
                     * 获取Number of provinces/states
                     * @return ProvinceNum Number of provinces/states
                     * 
                     */
                    int64_t GetProvinceNum() const;

                    /**
                     * 设置Number of provinces/states
                     * @param _provinceNum Number of provinces/states
                     * 
                     */
                    void SetProvinceNum(const int64_t& _provinceNum);

                    /**
                     * 判断参数 ProvinceNum 是否已赋值
                     * @return ProvinceNum 是否已赋值
                     * 
                     */
                    bool ProvinceNumHasBeenSet() const;

                    /**
                     * 获取Number of cities
                     * @return CityNum Number of cities
                     * 
                     */
                    int64_t GetCityNum() const;

                    /**
                     * 设置Number of cities
                     * @param _cityNum Number of cities
                     * 
                     */
                    void SetCityNum(const int64_t& _cityNum);

                    /**
                     * 判断参数 CityNum 是否已赋值
                     * @return CityNum 是否已赋值
                     * 
                     */
                    bool CityNumHasBeenSet() const;

                    /**
                     * 获取Number of nodes
                     * @return NodeNum Number of nodes
                     * 
                     */
                    int64_t GetNodeNum() const;

                    /**
                     * 设置Number of nodes
                     * @param _nodeNum Number of nodes
                     * 
                     */
                    void SetNodeNum(const int64_t& _nodeNum);

                    /**
                     * 判断参数 NodeNum 是否已赋值
                     * @return NodeNum 是否已赋值
                     * 
                     */
                    bool NodeNumHasBeenSet() const;

                    /**
                     * 获取Number of instances
                     * @return InstanceNum Number of instances
                     * 
                     */
                    int64_t GetInstanceNum() const;

                    /**
                     * 设置Number of instances
                     * @param _instanceNum Number of instances
                     * 
                     */
                    void SetInstanceNum(const int64_t& _instanceNum);

                    /**
                     * 判断参数 InstanceNum 是否已赋值
                     * @return InstanceNum 是否已赋值
                     * 
                     */
                    bool InstanceNumHasBeenSet() const;

                private:

                    /**
                     * ISP statistics list
                     */
                    std::vector<ISPCounter> m_iSPCounterSet;
                    bool m_iSPCounterSetHasBeenSet;

                    /**
                     * Number of provinces/states
                     */
                    int64_t m_provinceNum;
                    bool m_provinceNumHasBeenSet;

                    /**
                     * Number of cities
                     */
                    int64_t m_cityNum;
                    bool m_cityNumHasBeenSet;

                    /**
                     * Number of nodes
                     */
                    int64_t m_nodeNum;
                    bool m_nodeNumHasBeenSet;

                    /**
                     * Number of instances
                     */
                    int64_t m_instanceNum;
                    bool m_instanceNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_MODULECOUNTER_H_
