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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_VIDEOTEMPLATEINFOFORUPDATE_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_VIDEOTEMPLATEINFOFORUPDATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/SegmentSpecificInfo.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Video stream configuration parameters
                */
                class VideoTemplateInfoForUpdate : public AbstractModel
                {
                public:
                    VideoTemplateInfoForUpdate();
                    ~VideoTemplateInfoForUpdate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return Codec 
                     * 
                     */
                    std::string GetCodec() const;

                    /**
                     * 设置
                     * @param _codec 
                     * 
                     */
                    void SetCodec(const std::string& _codec);

                    /**
                     * 判断参数 Codec 是否已赋值
                     * @return Codec 是否已赋值
                     * 
                     */
                    bool CodecHasBeenSet() const;

                    /**
                     * 获取
                     * @return Fps 
                     * 
                     */
                    int64_t GetFps() const;

                    /**
                     * 设置
                     * @param _fps 
                     * 
                     */
                    void SetFps(const int64_t& _fps);

                    /**
                     * 判断参数 Fps 是否已赋值
                     * @return Fps 是否已赋值
                     * 
                     */
                    bool FpsHasBeenSet() const;

                    /**
                     * 获取
                     * @return Bitrate 
                     * 
                     */
                    int64_t GetBitrate() const;

                    /**
                     * 设置
                     * @param _bitrate 
                     * 
                     */
                    void SetBitrate(const int64_t& _bitrate);

                    /**
                     * 判断参数 Bitrate 是否已赋值
                     * @return Bitrate 是否已赋值
                     * 
                     */
                    bool BitrateHasBeenSet() const;

                    /**
                     * 获取
                     * @return ResolutionAdaptive 
                     * 
                     */
                    std::string GetResolutionAdaptive() const;

                    /**
                     * 设置
                     * @param _resolutionAdaptive 
                     * 
                     */
                    void SetResolutionAdaptive(const std::string& _resolutionAdaptive);

                    /**
                     * 判断参数 ResolutionAdaptive 是否已赋值
                     * @return ResolutionAdaptive 是否已赋值
                     * 
                     */
                    bool ResolutionAdaptiveHasBeenSet() const;

                    /**
                     * 获取
                     * @return Width 
                     * 
                     */
                    uint64_t GetWidth() const;

                    /**
                     * 设置
                     * @param _width 
                     * 
                     */
                    void SetWidth(const uint64_t& _width);

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     * 
                     */
                    bool WidthHasBeenSet() const;

                    /**
                     * 获取
                     * @return Height 
                     * 
                     */
                    uint64_t GetHeight() const;

                    /**
                     * 设置
                     * @param _height 
                     * 
                     */
                    void SetHeight(const uint64_t& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     * 
                     */
                    bool HeightHasBeenSet() const;

                    /**
                     * 获取
                     * @return Gop 
                     * 
                     */
                    uint64_t GetGop() const;

                    /**
                     * 设置
                     * @param _gop 
                     * 
                     */
                    void SetGop(const uint64_t& _gop);

                    /**
                     * 判断参数 Gop 是否已赋值
                     * @return Gop 是否已赋值
                     * 
                     */
                    bool GopHasBeenSet() const;

                    /**
                     * 获取
                     * @return GopUnit 
                     * 
                     */
                    std::string GetGopUnit() const;

                    /**
                     * 设置
                     * @param _gopUnit 
                     * 
                     */
                    void SetGopUnit(const std::string& _gopUnit);

                    /**
                     * 判断参数 GopUnit 是否已赋值
                     * @return GopUnit 是否已赋值
                     * 
                     */
                    bool GopUnitHasBeenSet() const;

                    /**
                     * 获取
                     * @return FillType 
                     * 
                     */
                    std::string GetFillType() const;

                    /**
                     * 设置
                     * @param _fillType 
                     * 
                     */
                    void SetFillType(const std::string& _fillType);

                    /**
                     * 判断参数 FillType 是否已赋值
                     * @return FillType 是否已赋值
                     * 
                     */
                    bool FillTypeHasBeenSet() const;

                    /**
                     * 获取
                     * @return Vcrf 
                     * 
                     */
                    uint64_t GetVcrf() const;

                    /**
                     * 设置
                     * @param _vcrf 
                     * 
                     */
                    void SetVcrf(const uint64_t& _vcrf);

                    /**
                     * 判断参数 Vcrf 是否已赋值
                     * @return Vcrf 是否已赋值
                     * 
                     */
                    bool VcrfHasBeenSet() const;

                    /**
                     * 获取
                     * @return ContentAdaptStream 
                     * 
                     */
                    uint64_t GetContentAdaptStream() const;

                    /**
                     * 设置
                     * @param _contentAdaptStream 
                     * 
                     */
                    void SetContentAdaptStream(const uint64_t& _contentAdaptStream);

                    /**
                     * 判断参数 ContentAdaptStream 是否已赋值
                     * @return ContentAdaptStream 是否已赋值
                     * 
                     */
                    bool ContentAdaptStreamHasBeenSet() const;

                    /**
                     * 获取
                     * @return HlsTime 
                     * 
                     */
                    uint64_t GetHlsTime() const;

                    /**
                     * 设置
                     * @param _hlsTime 
                     * 
                     */
                    void SetHlsTime(const uint64_t& _hlsTime);

                    /**
                     * 判断参数 HlsTime 是否已赋值
                     * @return HlsTime 是否已赋值
                     * 
                     */
                    bool HlsTimeHasBeenSet() const;

                    /**
                     * 获取
                     * @return SegmentType 
                     * 
                     */
                    int64_t GetSegmentType() const;

                    /**
                     * 设置
                     * @param _segmentType 
                     * 
                     */
                    void SetSegmentType(const int64_t& _segmentType);

                    /**
                     * 判断参数 SegmentType 是否已赋值
                     * @return SegmentType 是否已赋值
                     * 
                     */
                    bool SegmentTypeHasBeenSet() const;

                    /**
                     * 获取
                     * @return FpsDenominator 
                     * 
                     */
                    int64_t GetFpsDenominator() const;

                    /**
                     * 设置
                     * @param _fpsDenominator 
                     * 
                     */
                    void SetFpsDenominator(const int64_t& _fpsDenominator);

                    /**
                     * 判断参数 FpsDenominator 是否已赋值
                     * @return FpsDenominator 是否已赋值
                     * 
                     */
                    bool FpsDenominatorHasBeenSet() const;

                    /**
                     * 获取
                     * @return Stereo3dType 
                     * 
                     */
                    std::string GetStereo3dType() const;

                    /**
                     * 设置
                     * @param _stereo3dType 
                     * 
                     */
                    void SetStereo3dType(const std::string& _stereo3dType);

                    /**
                     * 判断参数 Stereo3dType 是否已赋值
                     * @return Stereo3dType 是否已赋值
                     * 
                     */
                    bool Stereo3dTypeHasBeenSet() const;

                    /**
                     * 获取
                     * @return VideoProfile 
                     * 
                     */
                    std::string GetVideoProfile() const;

                    /**
                     * 设置
                     * @param _videoProfile 
                     * 
                     */
                    void SetVideoProfile(const std::string& _videoProfile);

                    /**
                     * 判断参数 VideoProfile 是否已赋值
                     * @return VideoProfile 是否已赋值
                     * 
                     */
                    bool VideoProfileHasBeenSet() const;

                    /**
                     * 获取
                     * @return VideoLevel 
                     * 
                     */
                    std::string GetVideoLevel() const;

                    /**
                     * 设置
                     * @param _videoLevel 
                     * 
                     */
                    void SetVideoLevel(const std::string& _videoLevel);

                    /**
                     * 判断参数 VideoLevel 是否已赋值
                     * @return VideoLevel 是否已赋值
                     * 
                     */
                    bool VideoLevelHasBeenSet() const;

                    /**
                     * 获取
                     * @return Bframes 
                     * 
                     */
                    int64_t GetBframes() const;

                    /**
                     * 设置
                     * @param _bframes 
                     * 
                     */
                    void SetBframes(const int64_t& _bframes);

                    /**
                     * 判断参数 Bframes 是否已赋值
                     * @return Bframes 是否已赋值
                     * 
                     */
                    bool BframesHasBeenSet() const;

                    /**
                     * 获取
                     * @return Mode 
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置
                     * @param _mode 
                     * 
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取
                     * @return Sar 
                     * 
                     */
                    std::string GetSar() const;

                    /**
                     * 设置
                     * @param _sar 
                     * 
                     */
                    void SetSar(const std::string& _sar);

                    /**
                     * 判断参数 Sar 是否已赋值
                     * @return Sar 是否已赋值
                     * 
                     */
                    bool SarHasBeenSet() const;

                    /**
                     * 获取
                     * @return NoScenecut 
                     * 
                     */
                    int64_t GetNoScenecut() const;

                    /**
                     * 设置
                     * @param _noScenecut 
                     * 
                     */
                    void SetNoScenecut(const int64_t& _noScenecut);

                    /**
                     * 判断参数 NoScenecut 是否已赋值
                     * @return NoScenecut 是否已赋值
                     * 
                     */
                    bool NoScenecutHasBeenSet() const;

                    /**
                     * 获取
                     * @return BitDepth 
                     * 
                     */
                    int64_t GetBitDepth() const;

                    /**
                     * 设置
                     * @param _bitDepth 
                     * 
                     */
                    void SetBitDepth(const int64_t& _bitDepth);

                    /**
                     * 判断参数 BitDepth 是否已赋值
                     * @return BitDepth 是否已赋值
                     * 
                     */
                    bool BitDepthHasBeenSet() const;

                    /**
                     * 获取
                     * @return RawPts 
                     * 
                     */
                    int64_t GetRawPts() const;

                    /**
                     * 设置
                     * @param _rawPts 
                     * 
                     */
                    void SetRawPts(const int64_t& _rawPts);

                    /**
                     * 判断参数 RawPts 是否已赋值
                     * @return RawPts 是否已赋值
                     * 
                     */
                    bool RawPtsHasBeenSet() const;

                    /**
                     * 获取
                     * @return Compress 
                     * 
                     */
                    int64_t GetCompress() const;

                    /**
                     * 设置
                     * @param _compress 
                     * 
                     */
                    void SetCompress(const int64_t& _compress);

                    /**
                     * 判断参数 Compress 是否已赋值
                     * @return Compress 是否已赋值
                     * 
                     */
                    bool CompressHasBeenSet() const;

                    /**
                     * 获取
                     * @return SegmentSpecificInfo 
                     * 
                     */
                    SegmentSpecificInfo GetSegmentSpecificInfo() const;

                    /**
                     * 设置
                     * @param _segmentSpecificInfo 
                     * 
                     */
                    void SetSegmentSpecificInfo(const SegmentSpecificInfo& _segmentSpecificInfo);

                    /**
                     * 判断参数 SegmentSpecificInfo 是否已赋值
                     * @return SegmentSpecificInfo 是否已赋值
                     * 
                     */
                    bool SegmentSpecificInfoHasBeenSet() const;

                    /**
                     * 获取
                     * @return ScenarioBased 
                     * 
                     */
                    int64_t GetScenarioBased() const;

                    /**
                     * 设置
                     * @param _scenarioBased 
                     * 
                     */
                    void SetScenarioBased(const int64_t& _scenarioBased);

                    /**
                     * 判断参数 ScenarioBased 是否已赋值
                     * @return ScenarioBased 是否已赋值
                     * 
                     */
                    bool ScenarioBasedHasBeenSet() const;

                    /**
                     * 获取
                     * @return SceneType 
                     * 
                     */
                    std::string GetSceneType() const;

                    /**
                     * 设置
                     * @param _sceneType 
                     * 
                     */
                    void SetSceneType(const std::string& _sceneType);

                    /**
                     * 判断参数 SceneType 是否已赋值
                     * @return SceneType 是否已赋值
                     * 
                     */
                    bool SceneTypeHasBeenSet() const;

                    /**
                     * 获取
                     * @return CompressType 
                     * 
                     */
                    std::string GetCompressType() const;

                    /**
                     * 设置
                     * @param _compressType 
                     * 
                     */
                    void SetCompressType(const std::string& _compressType);

                    /**
                     * 判断参数 CompressType 是否已赋值
                     * @return CompressType 是否已赋值
                     * 
                     */
                    bool CompressTypeHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    std::string m_codec;
                    bool m_codecHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_fps;
                    bool m_fpsHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_bitrate;
                    bool m_bitrateHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_resolutionAdaptive;
                    bool m_resolutionAdaptiveHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_gop;
                    bool m_gopHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_gopUnit;
                    bool m_gopUnitHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_fillType;
                    bool m_fillTypeHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_vcrf;
                    bool m_vcrfHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_contentAdaptStream;
                    bool m_contentAdaptStreamHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_hlsTime;
                    bool m_hlsTimeHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_segmentType;
                    bool m_segmentTypeHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_fpsDenominator;
                    bool m_fpsDenominatorHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_stereo3dType;
                    bool m_stereo3dTypeHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_videoProfile;
                    bool m_videoProfileHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_videoLevel;
                    bool m_videoLevelHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_bframes;
                    bool m_bframesHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_sar;
                    bool m_sarHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_noScenecut;
                    bool m_noScenecutHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_bitDepth;
                    bool m_bitDepthHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_rawPts;
                    bool m_rawPtsHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_compress;
                    bool m_compressHasBeenSet;

                    /**
                     * 
                     */
                    SegmentSpecificInfo m_segmentSpecificInfo;
                    bool m_segmentSpecificInfoHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_scenarioBased;
                    bool m_scenarioBasedHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_sceneType;
                    bool m_sceneTypeHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_compressType;
                    bool m_compressTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_VIDEOTEMPLATEINFOFORUPDATE_H_
