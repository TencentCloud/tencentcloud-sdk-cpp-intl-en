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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_IMAGELAYER_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_IMAGELAYER_H_

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
                * Image Layer Information
                */
                class ImageLayer : public AbstractModel
                {
                public:
                    ImageLayer();
                    ~ImageLayer() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Image layer serial number</p>
                     * @return LayerIndex <p>Image layer serial number</p>
                     * 
                     */
                    uint64_t GetLayerIndex() const;

                    /**
                     * 设置<p>Image layer serial number</p>
                     * @param _layerIndex <p>Image layer serial number</p>
                     * 
                     */
                    void SetLayerIndex(const uint64_t& _layerIndex);

                    /**
                     * 判断参数 LayerIndex 是否已赋值
                     * @return LayerIndex 是否已赋值
                     * 
                     */
                    bool LayerIndexHasBeenSet() const;

                    /**
                     * 获取<p>Image layer id</p>
                     * @return LayerId <p>Image layer id</p>
                     * 
                     */
                    std::string GetLayerId() const;

                    /**
                     * 设置<p>Image layer id</p>
                     * @param _layerId <p>Image layer id</p>
                     * 
                     */
                    void SetLayerId(const std::string& _layerId);

                    /**
                     * 判断参数 LayerId 是否已赋值
                     * @return LayerId 是否已赋值
                     * 
                     */
                    bool LayerIdHasBeenSet() const;

                    /**
                     * 获取<p>Image layer command line</p>
                     * @return LayerCmd <p>Image layer command line</p>
                     * 
                     */
                    std::string GetLayerCmd() const;

                    /**
                     * 设置<p>Image layer command line</p>
                     * @param _layerCmd <p>Image layer command line</p>
                     * 
                     */
                    void SetLayerCmd(const std::string& _layerCmd);

                    /**
                     * 判断参数 LayerCmd 是否已赋值
                     * @return LayerCmd 是否已赋值
                     * 
                     */
                    bool LayerCmdHasBeenSet() const;

                    /**
                     * 获取<p>Mirror layer size</p>
                     * @return Size <p>Mirror layer size</p>
                     * 
                     */
                    uint64_t GetSize() const;

                    /**
                     * 设置<p>Mirror layer size</p>
                     * @param _size <p>Mirror layer size</p>
                     * 
                     */
                    void SetSize(const uint64_t& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     * 
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取<p>Critical vulnerability count</p>
                     * @return CriticalLevelVulCnt <p>Critical vulnerability count</p>
                     * 
                     */
                    uint64_t GetCriticalLevelVulCnt() const;

                    /**
                     * 设置<p>Critical vulnerability count</p>
                     * @param _criticalLevelVulCnt <p>Critical vulnerability count</p>
                     * 
                     */
                    void SetCriticalLevelVulCnt(const uint64_t& _criticalLevelVulCnt);

                    /**
                     * 判断参数 CriticalLevelVulCnt 是否已赋值
                     * @return CriticalLevelVulCnt 是否已赋值
                     * 
                     */
                    bool CriticalLevelVulCntHasBeenSet() const;

                    /**
                     * 获取<p>High-risk vulnerability count</p>
                     * @return HighLevelVulCnt <p>High-risk vulnerability count</p>
                     * 
                     */
                    uint64_t GetHighLevelVulCnt() const;

                    /**
                     * 设置<p>High-risk vulnerability count</p>
                     * @param _highLevelVulCnt <p>High-risk vulnerability count</p>
                     * 
                     */
                    void SetHighLevelVulCnt(const uint64_t& _highLevelVulCnt);

                    /**
                     * 判断参数 HighLevelVulCnt 是否已赋值
                     * @return HighLevelVulCnt 是否已赋值
                     * 
                     */
                    bool HighLevelVulCntHasBeenSet() const;

                    /**
                     * 获取<p>medium-risk vulnerability count</p>
                     * @return MediumLevelVulCnt <p>medium-risk vulnerability count</p>
                     * 
                     */
                    uint64_t GetMediumLevelVulCnt() const;

                    /**
                     * 设置<p>medium-risk vulnerability count</p>
                     * @param _mediumLevelVulCnt <p>medium-risk vulnerability count</p>
                     * 
                     */
                    void SetMediumLevelVulCnt(const uint64_t& _mediumLevelVulCnt);

                    /**
                     * 判断参数 MediumLevelVulCnt 是否已赋值
                     * @return MediumLevelVulCnt 是否已赋值
                     * 
                     */
                    bool MediumLevelVulCntHasBeenSet() const;

                    /**
                     * 获取<p>Number of low-risk vulnerabilities</p>
                     * @return LowLevelVulCnt <p>Number of low-risk vulnerabilities</p>
                     * 
                     */
                    uint64_t GetLowLevelVulCnt() const;

                    /**
                     * 设置<p>Number of low-risk vulnerabilities</p>
                     * @param _lowLevelVulCnt <p>Number of low-risk vulnerabilities</p>
                     * 
                     */
                    void SetLowLevelVulCnt(const uint64_t& _lowLevelVulCnt);

                    /**
                     * 判断参数 LowLevelVulCnt 是否已赋值
                     * @return LowLevelVulCnt 是否已赋值
                     * 
                     */
                    bool LowLevelVulCntHasBeenSet() const;

                    /**
                     * 获取<p>Number of Trojans</p>
                     * @return VirusCnt <p>Number of Trojans</p>
                     * 
                     */
                    uint64_t GetVirusCnt() const;

                    /**
                     * 设置<p>Number of Trojans</p>
                     * @param _virusCnt <p>Number of Trojans</p>
                     * 
                     */
                    void SetVirusCnt(const uint64_t& _virusCnt);

                    /**
                     * 判断参数 VirusCnt 是否已赋值
                     * @return VirusCnt 是否已赋值
                     * 
                     */
                    bool VirusCntHasBeenSet() const;

                    /**
                     * 获取<p>Number of sensitive information entries.</p>
                     * @return SensitiveCnt <p>Number of sensitive information entries.</p>
                     * 
                     */
                    uint64_t GetSensitiveCnt() const;

                    /**
                     * 设置<p>Number of sensitive information entries.</p>
                     * @param _sensitiveCnt <p>Number of sensitive information entries.</p>
                     * 
                     */
                    void SetSensitiveCnt(const uint64_t& _sensitiveCnt);

                    /**
                     * 判断参数 SensitiveCnt 是否已赋值
                     * @return SensitiveCnt 是否已赋值
                     * 
                     */
                    bool SensitiveCntHasBeenSet() const;

                    /**
                     * 获取<p>Image layer creation time</p><p>Parameter format: YYYY-MM-DD hh:mm:ss</p>
                     * @return LayerCreateTime <p>Image layer creation time</p><p>Parameter format: YYYY-MM-DD hh:mm:ss</p>
                     * 
                     */
                    std::string GetLayerCreateTime() const;

                    /**
                     * 设置<p>Image layer creation time</p><p>Parameter format: YYYY-MM-DD hh:mm:ss</p>
                     * @param _layerCreateTime <p>Image layer creation time</p><p>Parameter format: YYYY-MM-DD hh:mm:ss</p>
                     * 
                     */
                    void SetLayerCreateTime(const std::string& _layerCreateTime);

                    /**
                     * 判断参数 LayerCreateTime 是否已赋值
                     * @return LayerCreateTime 是否已赋值
                     * 
                     */
                    bool LayerCreateTimeHasBeenSet() const;

                private:

                    /**
                     * <p>Image layer serial number</p>
                     */
                    uint64_t m_layerIndex;
                    bool m_layerIndexHasBeenSet;

                    /**
                     * <p>Image layer id</p>
                     */
                    std::string m_layerId;
                    bool m_layerIdHasBeenSet;

                    /**
                     * <p>Image layer command line</p>
                     */
                    std::string m_layerCmd;
                    bool m_layerCmdHasBeenSet;

                    /**
                     * <p>Mirror layer size</p>
                     */
                    uint64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * <p>Critical vulnerability count</p>
                     */
                    uint64_t m_criticalLevelVulCnt;
                    bool m_criticalLevelVulCntHasBeenSet;

                    /**
                     * <p>High-risk vulnerability count</p>
                     */
                    uint64_t m_highLevelVulCnt;
                    bool m_highLevelVulCntHasBeenSet;

                    /**
                     * <p>medium-risk vulnerability count</p>
                     */
                    uint64_t m_mediumLevelVulCnt;
                    bool m_mediumLevelVulCntHasBeenSet;

                    /**
                     * <p>Number of low-risk vulnerabilities</p>
                     */
                    uint64_t m_lowLevelVulCnt;
                    bool m_lowLevelVulCntHasBeenSet;

                    /**
                     * <p>Number of Trojans</p>
                     */
                    uint64_t m_virusCnt;
                    bool m_virusCntHasBeenSet;

                    /**
                     * <p>Number of sensitive information entries.</p>
                     */
                    uint64_t m_sensitiveCnt;
                    bool m_sensitiveCntHasBeenSet;

                    /**
                     * <p>Image layer creation time</p><p>Parameter format: YYYY-MM-DD hh:mm:ss</p>
                     */
                    std::string m_layerCreateTime;
                    bool m_layerCreateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_IMAGELAYER_H_
