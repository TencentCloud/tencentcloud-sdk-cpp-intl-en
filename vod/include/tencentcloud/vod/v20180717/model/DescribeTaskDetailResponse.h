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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBETASKDETAILRESPONSE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBETASKDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/ProcedureTask.h>
#include <tencentcloud/vod/v20180717/model/EditMediaTask.h>
#include <tencentcloud/vod/v20180717/model/WechatPublishTask.h>
#include <tencentcloud/vod/v20180717/model/ComposeMediaTask.h>
#include <tencentcloud/vod/v20180717/model/SplitMediaTask.h>
#include <tencentcloud/vod/v20180717/model/WechatMiniProgramPublishTask.h>
#include <tencentcloud/vod/v20180717/model/PullUploadTask.h>
#include <tencentcloud/vod/v20180717/model/TranscodeTask2017.h>
#include <tencentcloud/vod/v20180717/model/ConcatTask2017.h>
#include <tencentcloud/vod/v20180717/model/ClipTask2017.h>
#include <tencentcloud/vod/v20180717/model/CreateImageSpriteTask2017.h>
#include <tencentcloud/vod/v20180717/model/SnapshotByTimeOffsetTask2017.h>
#include <tencentcloud/vod/v20180717/model/RemoveWatermarkTask.h>
#include <tencentcloud/vod/v20180717/model/RebuildMediaTask.h>
#include <tencentcloud/vod/v20180717/model/ExtractTraceWatermarkTask.h>
#include <tencentcloud/vod/v20180717/model/ExtractCopyRightWatermarkTask.h>
#include <tencentcloud/vod/v20180717/model/ReviewAudioVideoTask.h>
#include <tencentcloud/vod/v20180717/model/ReduceMediaBitrateTask.h>
#include <tencentcloud/vod/v20180717/model/DescribeFileAttributesTask.h>
#include <tencentcloud/vod/v20180717/model/QualityInspectTask.h>
#include <tencentcloud/vod/v20180717/model/QualityEnhanceTask.h>
#include <tencentcloud/vod/v20180717/model/ComplexAdaptiveDynamicStreamingTask.h>
#include <tencentcloud/vod/v20180717/model/ProcessMediaByMPS.h>
#include <tencentcloud/vod/v20180717/model/AigcImageTask.h>
#include <tencentcloud/vod/v20180717/model/AigcVideoTask.h>
#include <tencentcloud/vod/v20180717/model/ImportMediaKnowledgeTask.h>
#include <tencentcloud/vod/v20180717/model/SceneAigcImageTask.h>
#include <tencentcloud/vod/v20180717/model/SceneAigcVideoTask.h>
#include <tencentcloud/vod/v20180717/model/ProcessImageAsync.h>
#include <tencentcloud/vod/v20180717/model/ExtractBlindWatermarkTask.h>
#include <tencentcloud/vod/v20180717/model/CreateAigcAdvancedCustomElementTask.h>
#include <tencentcloud/vod/v20180717/model/CreateAigcCustomVoiceTask.h>
#include <tencentcloud/vod/v20180717/model/CreateAigcSubjectTask.h>
#include <tencentcloud/vod/v20180717/model/AigcVideoRedrawTask.h>
#include <tencentcloud/vod/v20180717/model/AigcAudioTask.h>
#include <tencentcloud/vod/v20180717/model/CreateAigcAudioCloneTask.h>
#include <tencentcloud/vod/v20180717/model/DescribeAigcFaceInfoAsyncTask.h>
#include <tencentcloud/vod/v20180717/model/AigcHunyuan3DTask.h>
#include <tencentcloud/vod/v20180717/model/DesignVoiceAsyncTask.h>
#include <tencentcloud/vod/v20180717/model/CloneVoiceAsyncTask.h>
#include <tencentcloud/vod/v20180717/model/TextToSpeechAsyncTask.h>
#include <tencentcloud/vod/v20180717/model/VideoDubbingAsyncTask.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * DescribeTaskDetail response structure.
                */
                class DescribeTaskDetailResponse : public AbstractModel
                {
                public:
                    DescribeTaskDetailResponse();
                    ~DescribeTaskDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Task type. Valid values: <li>Procedure: Video processing task;</li><li>EditMedia: Video editing task;</li><li>SplitMedia: Video splitting task;</li><li>ComposeMedia: Media file creation task;</li><li>WechatPublish: WeChat publishing task;</li><li>WechatMiniProgramPublish: WeChat Mini Program Video Publishing Task;</li><li>PullUpload: Pull and upload media files task;</li><li>FastClipMedia: Quick trimming task;</li><li>RemoveWatermarkTask: Intelligent watermark removal task;</li><li>DescribeFileAttributesTask: File attribute retrieval task;</li><li>RebuildMedia: Audio and video quality regeneration task (not recommended);</li><li>ReviewAudioVideo: Audio/video moderation task;</li><li>ExtractTraceWatermark: Source watermark extraction task;</li><li>ExtractCopyRightWatermark: Copyright Watermark Extraction Task;</li><li>QualityInspect: Audio and video quality inspection task;</li><li>QualityEnhance: Audio and video quality regeneration task;</li><li>ComplexAdaptiveDynamicStreaming: Complex adaptive bitstream task;</li><li>ProcessMediaByMPS: MPS video processing task;</li><li>AigcImageTask: AIGC image generation task;</li><li>SceneAigcImageTask: Scenario-based AIGC image generation task;</li><li>AigcVideoTask: AIGC video generation task;</li><li>AigcAudioTask: AIGC audio generation task;</li><li>ImportMediaKnowledge: Import media knowledge task.</li><li>SceneAigcVideoTask: Scenario-based AIGC video generation task;</li><li> ExtractBlindWatermark: Digital watermark extraction task.</li><li> ExtractBlindWatermark: Digital watermark extraction task.</li><li> CreateAigcAdvancedCustomElement: Create custom subject task</li><li>CreateAigcCustomVoice: Create custom voice type task</li><li>CreateAigcSubject: Create subject task</li><li>AigcVideoRedrawTask: AIGC video redraw task</li><li>CreateAigcAudioClone: AIGC voice clone task</li><li>DescribeAigcFaceInfoAsync: Asynchronously fetch AIGC face information task</li><li>WandAsrTask: WAND speech recognition</li><li>AigcHunyuan3DTask: AIGC Hunyuan 3D task</li><li>DesignVoiceAsync: Voice type design</li><li>CloneVoiceAsync: Voice type clone</li><li>TextToSpeechAsync: Speech generation</li><li>VideoDubbingAsync: Video translation dubbing</li></p>
                     * @return TaskType <p>Task type. Valid values: <li>Procedure: Video processing task;</li><li>EditMedia: Video editing task;</li><li>SplitMedia: Video splitting task;</li><li>ComposeMedia: Media file creation task;</li><li>WechatPublish: WeChat publishing task;</li><li>WechatMiniProgramPublish: WeChat Mini Program Video Publishing Task;</li><li>PullUpload: Pull and upload media files task;</li><li>FastClipMedia: Quick trimming task;</li><li>RemoveWatermarkTask: Intelligent watermark removal task;</li><li>DescribeFileAttributesTask: File attribute retrieval task;</li><li>RebuildMedia: Audio and video quality regeneration task (not recommended);</li><li>ReviewAudioVideo: Audio/video moderation task;</li><li>ExtractTraceWatermark: Source watermark extraction task;</li><li>ExtractCopyRightWatermark: Copyright Watermark Extraction Task;</li><li>QualityInspect: Audio and video quality inspection task;</li><li>QualityEnhance: Audio and video quality regeneration task;</li><li>ComplexAdaptiveDynamicStreaming: Complex adaptive bitstream task;</li><li>ProcessMediaByMPS: MPS video processing task;</li><li>AigcImageTask: AIGC image generation task;</li><li>SceneAigcImageTask: Scenario-based AIGC image generation task;</li><li>AigcVideoTask: AIGC video generation task;</li><li>AigcAudioTask: AIGC audio generation task;</li><li>ImportMediaKnowledge: Import media knowledge task.</li><li>SceneAigcVideoTask: Scenario-based AIGC video generation task;</li><li> ExtractBlindWatermark: Digital watermark extraction task.</li><li> ExtractBlindWatermark: Digital watermark extraction task.</li><li> CreateAigcAdvancedCustomElement: Create custom subject task</li><li>CreateAigcCustomVoice: Create custom voice type task</li><li>CreateAigcSubject: Create subject task</li><li>AigcVideoRedrawTask: AIGC video redraw task</li><li>CreateAigcAudioClone: AIGC voice clone task</li><li>DescribeAigcFaceInfoAsync: Asynchronously fetch AIGC face information task</li><li>WandAsrTask: WAND speech recognition</li><li>AigcHunyuan3DTask: AIGC Hunyuan 3D task</li><li>DesignVoiceAsync: Voice type design</li><li>CloneVoiceAsync: Voice type clone</li><li>TextToSpeechAsync: Speech generation</li><li>VideoDubbingAsync: Video translation dubbing</li></p>
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取<p>Task status. Valid values: </p><li>WAITING: Waiting; </li><li>PROCESSING: Processing; </li><li>FINISH: Completed; </li><li>ABORTED: Terminated.</li>
                     * @return Status <p>Task status. Valid values: </p><li>WAITING: Waiting; </li><li>PROCESSING: Processing; </li><li>FINISH: Completed; </li><li>ABORTED: Terminated.</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>Task creation time, in <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO date and time format</a>.</p>
                     * @return CreateTime <p>Task creation time, in <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO date and time format</a>.</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>Task start execution time, in <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO date and time format</a>.</p>
                     * @return BeginProcessTime <p>Task start execution time, in <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO date and time format</a>.</p>
                     * 
                     */
                    std::string GetBeginProcessTime() const;

                    /**
                     * 判断参数 BeginProcessTime 是否已赋值
                     * @return BeginProcessTime 是否已赋值
                     * 
                     */
                    bool BeginProcessTimeHasBeenSet() const;

                    /**
                     * 获取<p>Task completion time, in <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO date and time format</a>.</p>
                     * @return FinishTime <p>Task completion time, in <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO date and time format</a>.</p>
                     * 
                     */
                    std::string GetFinishTime() const;

                    /**
                     * 判断参数 FinishTime 是否已赋值
                     * @return FinishTime 是否已赋值
                     * 
                     */
                    bool FinishTimeHasBeenSet() const;

                    /**
                     * 获取<p>Video processing task information. This field has a value only when TaskType is Procedure.</p>
                     * @return ProcedureTask <p>Video processing task information. This field has a value only when TaskType is Procedure.</p>
                     * 
                     */
                    ProcedureTask GetProcedureTask() const;

                    /**
                     * 判断参数 ProcedureTask 是否已赋值
                     * @return ProcedureTask 是否已赋值
                     * 
                     */
                    bool ProcedureTaskHasBeenSet() const;

                    /**
                     * 获取<p>Video editing task information. This field has a value only when TaskType is EditMedia.</p>
                     * @return EditMediaTask <p>Video editing task information. This field has a value only when TaskType is EditMedia.</p>
                     * 
                     */
                    EditMediaTask GetEditMediaTask() const;

                    /**
                     * 判断参数 EditMediaTask 是否已赋值
                     * @return EditMediaTask 是否已赋值
                     * 
                     */
                    bool EditMediaTaskHasBeenSet() const;

                    /**
                     * 获取<p>WeChat publishing task information. This field has a value only when TaskType is WechatPublish.</p>
                     * @return WechatPublishTask <p>WeChat publishing task information. This field has a value only when TaskType is WechatPublish.</p>
                     * 
                     */
                    WechatPublishTask GetWechatPublishTask() const;

                    /**
                     * 判断参数 WechatPublishTask 是否已赋值
                     * @return WechatPublishTask 是否已赋值
                     * 
                     */
                    bool WechatPublishTaskHasBeenSet() const;

                    /**
                     * 获取<p>Media file production task information. This field has a value only when TaskType is ComposeMedia.</p>
                     * @return ComposeMediaTask <p>Media file production task information. This field has a value only when TaskType is ComposeMedia.</p>
                     * 
                     */
                    ComposeMediaTask GetComposeMediaTask() const;

                    /**
                     * 判断参数 ComposeMediaTask 是否已赋值
                     * @return ComposeMediaTask 是否已赋值
                     * 
                     */
                    bool ComposeMediaTaskHasBeenSet() const;

                    /**
                     * 获取<p>Video splitting task information. This field has a value only when TaskType is SplitMedia.</p>
                     * @return SplitMediaTask <p>Video splitting task information. This field has a value only when TaskType is SplitMedia.</p>
                     * 
                     */
                    SplitMediaTask GetSplitMediaTask() const;

                    /**
                     * 判断参数 SplitMediaTask 是否已赋值
                     * @return SplitMediaTask 是否已赋值
                     * 
                     */
                    bool SplitMediaTaskHasBeenSet() const;

                    /**
                     * 获取<p>WeChat Mini Program publishing task information. This field has a value only when TaskType is WechatMiniProgramPublish.</p>
                     * @return WechatMiniProgramPublishTask <p>WeChat Mini Program publishing task information. This field has a value only when TaskType is WechatMiniProgramPublish.</p>
                     * 
                     */
                    WechatMiniProgramPublishTask GetWechatMiniProgramPublishTask() const;

                    /**
                     * 判断参数 WechatMiniProgramPublishTask 是否已赋值
                     * @return WechatMiniProgramPublishTask 是否已赋值
                     * 
                     */
                    bool WechatMiniProgramPublishTaskHasBeenSet() const;

                    /**
                     * 获取<p>Pull and upload media files task information. This field has a value only when TaskType is PullUpload.</p>
                     * @return PullUploadTask <p>Pull and upload media files task information. This field has a value only when TaskType is PullUpload.</p>
                     * 
                     */
                    PullUploadTask GetPullUploadTask() const;

                    /**
                     * 判断参数 PullUploadTask 是否已赋值
                     * @return PullUploadTask 是否已赋值
                     * 
                     */
                    bool PullUploadTaskHasBeenSet() const;

                    /**
                     * 获取<p>Video transcoding task information. This field has a value only when TaskType is Transcode.</p>
                     * @return TranscodeTask <p>Video transcoding task information. This field has a value only when TaskType is Transcode.</p>
                     * 
                     */
                    TranscodeTask2017 GetTranscodeTask() const;

                    /**
                     * 判断参数 TranscodeTask 是否已赋值
                     * @return TranscodeTask 是否已赋值
                     * 
                     */
                    bool TranscodeTaskHasBeenSet() const;

                    /**
                     * 获取<p>Video splicing task information. This field has a value only when TaskType is Concat.</p>
                     * @return ConcatTask <p>Video splicing task information. This field has a value only when TaskType is Concat.</p>
                     * 
                     */
                    ConcatTask2017 GetConcatTask() const;

                    /**
                     * 判断参数 ConcatTask 是否已赋值
                     * @return ConcatTask 是否已赋值
                     * 
                     */
                    bool ConcatTaskHasBeenSet() const;

                    /**
                     * 获取<p>Video editing task information. This field has a value only when TaskType is Clip.</p>
                     * @return ClipTask <p>Video editing task information. This field has a value only when TaskType is Clip.</p>
                     * 
                     */
                    ClipTask2017 GetClipTask() const;

                    /**
                     * 判断参数 ClipTask 是否已赋值
                     * @return ClipTask 是否已赋值
                     * 
                     */
                    bool ClipTaskHasBeenSet() const;

                    /**
                     * 获取<p>Capturing sprite image task information. This field has a value only when TaskType is ImageSprite.</p>
                     * @return CreateImageSpriteTask <p>Capturing sprite image task information. This field has a value only when TaskType is ImageSprite.</p>
                     * 
                     */
                    CreateImageSpriteTask2017 GetCreateImageSpriteTask() const;

                    /**
                     * 判断参数 CreateImageSpriteTask 是否已赋值
                     * @return CreateImageSpriteTask 是否已赋值
                     * 
                     */
                    bool CreateImageSpriteTaskHasBeenSet() const;

                    /**
                     * 获取<p>Video screenshot at specified time point task information. This field has a value only when TaskType is SnapshotByTimeOffset.</p>
                     * @return SnapshotByTimeOffsetTask <p>Video screenshot at specified time point task information. This field has a value only when TaskType is SnapshotByTimeOffset.</p>
                     * 
                     */
                    SnapshotByTimeOffsetTask2017 GetSnapshotByTimeOffsetTask() const;

                    /**
                     * 判断参数 SnapshotByTimeOffsetTask 是否已赋值
                     * @return SnapshotByTimeOffsetTask 是否已赋值
                     * 
                     */
                    bool SnapshotByTimeOffsetTaskHasBeenSet() const;

                    /**
                     * 获取<p>Intelligent watermark removal task information. This field has a value only when TaskType is RemoveWatermark.</p>
                     * @return RemoveWatermarkTask <p>Intelligent watermark removal task information. This field has a value only when TaskType is RemoveWatermark.</p>
                     * 
                     */
                    RemoveWatermarkTask GetRemoveWatermarkTask() const;

                    /**
                     * 判断参数 RemoveWatermarkTask 是否已赋值
                     * @return RemoveWatermarkTask 是否已赋值
                     * 
                     */
                    bool RemoveWatermarkTaskHasBeenSet() const;

                    /**
                     * 获取<p>Audio and video quality revival task information. This field has a value only when TaskType is RebuildMedia.</p>
                     * @return RebuildMediaTask <p>Audio and video quality revival task information. This field has a value only when TaskType is RebuildMedia.</p>
                     * 
                     */
                    RebuildMediaTask GetRebuildMediaTask() const;

                    /**
                     * 判断参数 RebuildMediaTask 是否已赋值
                     * @return RebuildMediaTask 是否已赋值
                     * 
                     */
                    bool RebuildMediaTaskHasBeenSet() const;

                    /**
                     * 获取<p>Extract traceability watermark task information. This field has a value only when TaskType is ExtractTraceWatermark.</p>
                     * @return ExtractTraceWatermarkTask <p>Extract traceability watermark task information. This field has a value only when TaskType is ExtractTraceWatermark.</p>
                     * 
                     */
                    ExtractTraceWatermarkTask GetExtractTraceWatermarkTask() const;

                    /**
                     * 判断参数 ExtractTraceWatermarkTask 是否已赋值
                     * @return ExtractTraceWatermarkTask 是否已赋值
                     * 
                     */
                    bool ExtractTraceWatermarkTaskHasBeenSet() const;

                    /**
                     * 获取<p>Extract copyright watermark task information. This field has a value only when TaskType is ExtractCopyRightWatermark.</p>
                     * @return ExtractCopyRightWatermarkTask <p>Extract copyright watermark task information. This field has a value only when TaskType is ExtractCopyRightWatermark.</p>
                     * 
                     */
                    ExtractCopyRightWatermarkTask GetExtractCopyRightWatermarkTask() const;

                    /**
                     * 判断参数 ExtractCopyRightWatermarkTask 是否已赋值
                     * @return ExtractCopyRightWatermarkTask 是否已赋值
                     * 
                     */
                    bool ExtractCopyRightWatermarkTaskHasBeenSet() const;

                    /**
                     * 获取<p>Audio/video moderation task information. This field has a value only when TaskType is ReviewAudioVideo.</p>
                     * @return ReviewAudioVideoTask <p>Audio/video moderation task information. This field has a value only when TaskType is ReviewAudioVideo.</p>
                     * 
                     */
                    ReviewAudioVideoTask GetReviewAudioVideoTask() const;

                    /**
                     * 判断参数 ReviewAudioVideoTask 是否已赋值
                     * @return ReviewAudioVideoTask 是否已赋值
                     * 
                     */
                    bool ReviewAudioVideoTaskHasBeenSet() const;

                    /**
                     * 获取<p>This field is invalid.</p>
                     * @return ReduceMediaBitrateTask <p>This field is invalid.</p>
                     * 
                     */
                    ReduceMediaBitrateTask GetReduceMediaBitrateTask() const;

                    /**
                     * 判断参数 ReduceMediaBitrateTask 是否已赋值
                     * @return ReduceMediaBitrateTask 是否已赋值
                     * 
                     */
                    bool ReduceMediaBitrateTaskHasBeenSet() const;

                    /**
                     * 获取<p>File attribute acquisition task information. This field has a value only when TaskType is DescribeFileAttributes.</p>
                     * @return DescribeFileAttributesTask <p>File attribute acquisition task information. This field has a value only when TaskType is DescribeFileAttributes.</p>
                     * 
                     */
                    DescribeFileAttributesTask GetDescribeFileAttributesTask() const;

                    /**
                     * 判断参数 DescribeFileAttributesTask 是否已赋值
                     * @return DescribeFileAttributesTask 是否已赋值
                     * 
                     */
                    bool DescribeFileAttributesTaskHasBeenSet() const;

                    /**
                     * 获取<p>Audio and video quality detection task information. This field has a value only when TaskType is QualityInspect.</p>
                     * @return QualityInspectTask <p>Audio and video quality detection task information. This field has a value only when TaskType is QualityInspect.</p>
                     * 
                     */
                    QualityInspectTask GetQualityInspectTask() const;

                    /**
                     * 判断参数 QualityInspectTask 是否已赋值
                     * @return QualityInspectTask 是否已赋值
                     * 
                     */
                    bool QualityInspectTaskHasBeenSet() const;

                    /**
                     * 获取<p>Audio and video quality revival task information. This field has a value only when TaskType is QualityEnhance.</p>
                     * @return QualityEnhanceTask <p>Audio and video quality revival task information. This field has a value only when TaskType is QualityEnhance.</p>
                     * 
                     */
                    QualityEnhanceTask GetQualityEnhanceTask() const;

                    /**
                     * 判断参数 QualityEnhanceTask 是否已赋值
                     * @return QualityEnhanceTask 是否已赋值
                     * 
                     */
                    bool QualityEnhanceTaskHasBeenSet() const;

                    /**
                     * 获取<p>Complex adaptive bitrate task information. This field has a value only when TaskType is ComplexAdaptiveDynamicStreaming.</p>
                     * @return ComplexAdaptiveDynamicStreamingTask <p>Complex adaptive bitrate task information. This field has a value only when TaskType is ComplexAdaptiveDynamicStreaming.</p>
                     * 
                     */
                    ComplexAdaptiveDynamicStreamingTask GetComplexAdaptiveDynamicStreamingTask() const;

                    /**
                     * 判断参数 ComplexAdaptiveDynamicStreamingTask 是否已赋值
                     * @return ComplexAdaptiveDynamicStreamingTask 是否已赋值
                     * 
                     */
                    bool ComplexAdaptiveDynamicStreamingTaskHasBeenSet() const;

                    /**
                     * 获取<p>MPS video processing task information. This field has a value only when TaskType is ProcessMediaByMPS.</p>
                     * @return ProcessMediaByMPSTask <p>MPS video processing task information. This field has a value only when TaskType is ProcessMediaByMPS.</p>
                     * 
                     */
                    ProcessMediaByMPS GetProcessMediaByMPSTask() const;

                    /**
                     * 判断参数 ProcessMediaByMPSTask 是否已赋值
                     * @return ProcessMediaByMPSTask 是否已赋值
                     * 
                     */
                    bool ProcessMediaByMPSTaskHasBeenSet() const;

                    /**
                     * 获取<p>AIGC image generation task information. This field has a value only when TaskType is AigcImageTask.</p>
                     * @return AigcImageTask <p>AIGC image generation task information. This field has a value only when TaskType is AigcImageTask.</p>
                     * 
                     */
                    AigcImageTask GetAigcImageTask() const;

                    /**
                     * 判断参数 AigcImageTask 是否已赋值
                     * @return AigcImageTask 是否已赋值
                     * 
                     */
                    bool AigcImageTaskHasBeenSet() const;

                    /**
                     * 获取<p>AIGC video task information. This field has a value only when TaskType is AigcVideoTask.</p>
                     * @return AigcVideoTask <p>AIGC video task information. This field has a value only when TaskType is AigcVideoTask.</p>
                     * 
                     */
                    AigcVideoTask GetAigcVideoTask() const;

                    /**
                     * 判断参数 AigcVideoTask 是否已赋值
                     * @return AigcVideoTask 是否已赋值
                     * 
                     */
                    bool AigcVideoTaskHasBeenSet() const;

                    /**
                     * 获取<p>Media import knowledge base task info. This field has a value only when TaskType is ImportMediaKnowledge.</p>
                     * @return ImportMediaKnowledge <p>Media import knowledge base task info. This field has a value only when TaskType is ImportMediaKnowledge.</p>
                     * 
                     */
                    ImportMediaKnowledgeTask GetImportMediaKnowledge() const;

                    /**
                     * 判断参数 ImportMediaKnowledge 是否已赋值
                     * @return ImportMediaKnowledge 是否已赋值
                     * 
                     */
                    bool ImportMediaKnowledgeHasBeenSet() const;

                    /**
                     * 获取<p>Scenario-based AIGC image generation task info. This field has a value only when TaskType is SceneAigcImageTask.</p>
                     * @return SceneAigcImageTask <p>Scenario-based AIGC image generation task info. This field has a value only when TaskType is SceneAigcImageTask.</p>
                     * 
                     */
                    SceneAigcImageTask GetSceneAigcImageTask() const;

                    /**
                     * 判断参数 SceneAigcImageTask 是否已赋值
                     * @return SceneAigcImageTask 是否已赋值
                     * 
                     */
                    bool SceneAigcImageTaskHasBeenSet() const;

                    /**
                     * 获取<p>Scenario-based AIGC video task info. This field has a value only when TaskType is SceneAigcVideoTask.</p>
                     * @return SceneAigcVideoTask <p>Scenario-based AIGC video task info. This field has a value only when TaskType is SceneAigcVideoTask.</p>
                     * 
                     */
                    SceneAigcVideoTask GetSceneAigcVideoTask() const;

                    /**
                     * 判断参数 SceneAigcVideoTask 是否已赋值
                     * @return SceneAigcVideoTask 是否已赋值
                     * 
                     */
                    bool SceneAigcVideoTaskHasBeenSet() const;

                    /**
                     * 获取<p>Image asynchronous processing task information. This field has a value only when TaskType is ProcessImageAsync.</p>
                     * @return ProcessImageAsyncTask <p>Image asynchronous processing task information. This field has a value only when TaskType is ProcessImageAsync.</p>
                     * 
                     */
                    ProcessImageAsync GetProcessImageAsyncTask() const;

                    /**
                     * 判断参数 ProcessImageAsyncTask 是否已赋值
                     * @return ProcessImageAsyncTask 是否已赋值
                     * 
                     */
                    bool ProcessImageAsyncTaskHasBeenSet() const;

                    /**
                     * 获取<p>Extraction task info of digital watermark. This field has a value only when TaskType is ExtractBlindWatermark.</p>
                     * @return ExtractBlindWatermarkTask <p>Extraction task info of digital watermark. This field has a value only when TaskType is ExtractBlindWatermark.</p>
                     * 
                     */
                    ExtractBlindWatermarkTask GetExtractBlindWatermarkTask() const;

                    /**
                     * 判断参数 ExtractBlindWatermarkTask 是否已赋值
                     * @return ExtractBlindWatermarkTask 是否已赋值
                     * 
                     */
                    bool ExtractBlindWatermarkTaskHasBeenSet() const;

                    /**
                     * 获取<p>Create custom entity information. This field has a value only when TaskType is CreateAigcAdvancedCustomElement.</p>
                     * @return CreateAigcAdvancedCustomElementTask <p>Create custom entity information. This field has a value only when TaskType is CreateAigcAdvancedCustomElement.</p>
                     * 
                     */
                    CreateAigcAdvancedCustomElementTask GetCreateAigcAdvancedCustomElementTask() const;

                    /**
                     * 判断参数 CreateAigcAdvancedCustomElementTask 是否已赋值
                     * @return CreateAigcAdvancedCustomElementTask 是否已赋值
                     * 
                     */
                    bool CreateAigcAdvancedCustomElementTaskHasBeenSet() const;

                    /**
                     * 获取<p>Create custom tone information. This field has a value only when TaskType is CreateAigcCustomVoice.</p>
                     * @return CreateAigcCustomVoiceTask <p>Create custom tone information. This field has a value only when TaskType is CreateAigcCustomVoice.</p>
                     * 
                     */
                    CreateAigcCustomVoiceTask GetCreateAigcCustomVoiceTask() const;

                    /**
                     * 判断参数 CreateAigcCustomVoiceTask 是否已赋值
                     * @return CreateAigcCustomVoiceTask 是否已赋值
                     * 
                     */
                    bool CreateAigcCustomVoiceTaskHasBeenSet() const;

                    /**
                     * 获取<p>Create entity information. This field has a value only when TaskType is CreateAigcSubject.</p>
                     * @return CreateAigcSubjectTask <p>Create entity information. This field has a value only when TaskType is CreateAigcSubject.</p>
                     * 
                     */
                    CreateAigcSubjectTask GetCreateAigcSubjectTask() const;

                    /**
                     * 判断参数 CreateAigcSubjectTask 是否已赋值
                     * @return CreateAigcSubjectTask 是否已赋值
                     * 
                     */
                    bool CreateAigcSubjectTaskHasBeenSet() const;

                    /**
                     * 获取<p>AIGC video redraw information. This field has a value only when TaskType is AigcVideoRedrawTask.</p>
                     * @return AigcVideoRedrawTask <p>AIGC video redraw information. This field has a value only when TaskType is AigcVideoRedrawTask.</p>
                     * 
                     */
                    AigcVideoRedrawTask GetAigcVideoRedrawTask() const;

                    /**
                     * 判断参数 AigcVideoRedrawTask 是否已赋值
                     * @return AigcVideoRedrawTask 是否已赋值
                     * 
                     */
                    bool AigcVideoRedrawTaskHasBeenSet() const;

                    /**
                     * 获取<p>AIGC sound effect information. This field has a value only when TaskType is AigcAudioTask.</p>
                     * @return AigcAudioTask <p>AIGC sound effect information. This field has a value only when TaskType is AigcAudioTask.</p>
                     * 
                     */
                    AigcAudioTask GetAigcAudioTask() const;

                    /**
                     * 判断参数 AigcAudioTask 是否已赋值
                     * @return AigcAudioTask 是否已赋值
                     * 
                     */
                    bool AigcAudioTaskHasBeenSet() const;

                    /**
                     * 获取<p>AIGC voice clone information. This field has a value only when TaskType is CreateAigcAudioClone.</p>
                     * @return CreateAigcAudioCloneTask <p>AIGC voice clone information. This field has a value only when TaskType is CreateAigcAudioClone.</p>
                     * 
                     */
                    CreateAigcAudioCloneTask GetCreateAigcAudioCloneTask() const;

                    /**
                     * 判断参数 CreateAigcAudioCloneTask 是否已赋值
                     * @return CreateAigcAudioCloneTask 是否已赋值
                     * 
                     */
                    bool CreateAigcAudioCloneTaskHasBeenSet() const;

                    /**
                     * 获取<p>Asynchronously fetch AIGC face information. This field has a value only when TaskType is DescribeAigcFaceInfoAsync.</p>
                     * @return DescribeAigcFaceInfoAsyncTask <p>Asynchronously fetch AIGC face information. This field has a value only when TaskType is DescribeAigcFaceInfoAsync.</p>
                     * 
                     */
                    DescribeAigcFaceInfoAsyncTask GetDescribeAigcFaceInfoAsyncTask() const;

                    /**
                     * 判断参数 DescribeAigcFaceInfoAsyncTask 是否已赋值
                     * @return DescribeAigcFaceInfoAsyncTask 是否已赋值
                     * 
                     */
                    bool DescribeAigcFaceInfoAsyncTaskHasBeenSet() const;

                    /**
                     * 获取<p>Hunyuan 3D task. This field has a value only when TaskType is AigcHunyuan3DTask.</p>
                     * @return AigcHunyuan3DTask <p>Hunyuan 3D task. This field has a value only when TaskType is AigcHunyuan3DTask.</p>
                     * 
                     */
                    AigcHunyuan3DTask GetAigcHunyuan3DTask() const;

                    /**
                     * 判断参数 AigcHunyuan3DTask 是否已赋值
                     * @return AigcHunyuan3DTask 是否已赋值
                     * 
                     */
                    bool AigcHunyuan3DTaskHasBeenSet() const;

                    /**
                     * 获取<p>Voice type design. This field has a value only when TaskType is DesignVoiceAsync.</p>
                     * @return DesignVoiceAsyncTask <p>Voice type design. This field has a value only when TaskType is DesignVoiceAsync.</p>
                     * 
                     */
                    DesignVoiceAsyncTask GetDesignVoiceAsyncTask() const;

                    /**
                     * 判断参数 DesignVoiceAsyncTask 是否已赋值
                     * @return DesignVoiceAsyncTask 是否已赋值
                     * 
                     */
                    bool DesignVoiceAsyncTaskHasBeenSet() const;

                    /**
                     * 获取<p>Voice type clone. This field has a value only when TaskType is CloneVoiceAsync.</p>
                     * @return CloneVoiceAsyncTask <p>Voice type clone. This field has a value only when TaskType is CloneVoiceAsync.</p>
                     * 
                     */
                    CloneVoiceAsyncTask GetCloneVoiceAsyncTask() const;

                    /**
                     * 判断参数 CloneVoiceAsyncTask 是否已赋值
                     * @return CloneVoiceAsyncTask 是否已赋值
                     * 
                     */
                    bool CloneVoiceAsyncTaskHasBeenSet() const;

                    /**
                     * 获取<p>Text to speech. This field has a value only when TaskType is TextToSpeechAsync.</p>
                     * @return TextToSpeechAsyncTask <p>Text to speech. This field has a value only when TaskType is TextToSpeechAsync.</p>
                     * 
                     */
                    TextToSpeechAsyncTask GetTextToSpeechAsyncTask() const;

                    /**
                     * 判断参数 TextToSpeechAsyncTask 是否已赋值
                     * @return TextToSpeechAsyncTask 是否已赋值
                     * 
                     */
                    bool TextToSpeechAsyncTaskHasBeenSet() const;

                    /**
                     * 获取<p>Video translation and dubbing. This field has a value only when TaskType is VideoDubbingAsync.</p>
                     * @return VideoDubbingAsyncTask <p>Video translation and dubbing. This field has a value only when TaskType is VideoDubbingAsync.</p>
                     * 
                     */
                    VideoDubbingAsyncTask GetVideoDubbingAsyncTask() const;

                    /**
                     * 判断参数 VideoDubbingAsyncTask 是否已赋值
                     * @return VideoDubbingAsyncTask 是否已赋值
                     * 
                     */
                    bool VideoDubbingAsyncTaskHasBeenSet() const;

                private:

                    /**
                     * <p>Task type. Valid values: <li>Procedure: Video processing task;</li><li>EditMedia: Video editing task;</li><li>SplitMedia: Video splitting task;</li><li>ComposeMedia: Media file creation task;</li><li>WechatPublish: WeChat publishing task;</li><li>WechatMiniProgramPublish: WeChat Mini Program Video Publishing Task;</li><li>PullUpload: Pull and upload media files task;</li><li>FastClipMedia: Quick trimming task;</li><li>RemoveWatermarkTask: Intelligent watermark removal task;</li><li>DescribeFileAttributesTask: File attribute retrieval task;</li><li>RebuildMedia: Audio and video quality regeneration task (not recommended);</li><li>ReviewAudioVideo: Audio/video moderation task;</li><li>ExtractTraceWatermark: Source watermark extraction task;</li><li>ExtractCopyRightWatermark: Copyright Watermark Extraction Task;</li><li>QualityInspect: Audio and video quality inspection task;</li><li>QualityEnhance: Audio and video quality regeneration task;</li><li>ComplexAdaptiveDynamicStreaming: Complex adaptive bitstream task;</li><li>ProcessMediaByMPS: MPS video processing task;</li><li>AigcImageTask: AIGC image generation task;</li><li>SceneAigcImageTask: Scenario-based AIGC image generation task;</li><li>AigcVideoTask: AIGC video generation task;</li><li>AigcAudioTask: AIGC audio generation task;</li><li>ImportMediaKnowledge: Import media knowledge task.</li><li>SceneAigcVideoTask: Scenario-based AIGC video generation task;</li><li> ExtractBlindWatermark: Digital watermark extraction task.</li><li> ExtractBlindWatermark: Digital watermark extraction task.</li><li> CreateAigcAdvancedCustomElement: Create custom subject task</li><li>CreateAigcCustomVoice: Create custom voice type task</li><li>CreateAigcSubject: Create subject task</li><li>AigcVideoRedrawTask: AIGC video redraw task</li><li>CreateAigcAudioClone: AIGC voice clone task</li><li>DescribeAigcFaceInfoAsync: Asynchronously fetch AIGC face information task</li><li>WandAsrTask: WAND speech recognition</li><li>AigcHunyuan3DTask: AIGC Hunyuan 3D task</li><li>DesignVoiceAsync: Voice type design</li><li>CloneVoiceAsync: Voice type clone</li><li>TextToSpeechAsync: Speech generation</li><li>VideoDubbingAsync: Video translation dubbing</li></p>
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * <p>Task status. Valid values: </p><li>WAITING: Waiting; </li><li>PROCESSING: Processing; </li><li>FINISH: Completed; </li><li>ABORTED: Terminated.</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Task creation time, in <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO date and time format</a>.</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>Task start execution time, in <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO date and time format</a>.</p>
                     */
                    std::string m_beginProcessTime;
                    bool m_beginProcessTimeHasBeenSet;

                    /**
                     * <p>Task completion time, in <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO date and time format</a>.</p>
                     */
                    std::string m_finishTime;
                    bool m_finishTimeHasBeenSet;

                    /**
                     * <p>Video processing task information. This field has a value only when TaskType is Procedure.</p>
                     */
                    ProcedureTask m_procedureTask;
                    bool m_procedureTaskHasBeenSet;

                    /**
                     * <p>Video editing task information. This field has a value only when TaskType is EditMedia.</p>
                     */
                    EditMediaTask m_editMediaTask;
                    bool m_editMediaTaskHasBeenSet;

                    /**
                     * <p>WeChat publishing task information. This field has a value only when TaskType is WechatPublish.</p>
                     */
                    WechatPublishTask m_wechatPublishTask;
                    bool m_wechatPublishTaskHasBeenSet;

                    /**
                     * <p>Media file production task information. This field has a value only when TaskType is ComposeMedia.</p>
                     */
                    ComposeMediaTask m_composeMediaTask;
                    bool m_composeMediaTaskHasBeenSet;

                    /**
                     * <p>Video splitting task information. This field has a value only when TaskType is SplitMedia.</p>
                     */
                    SplitMediaTask m_splitMediaTask;
                    bool m_splitMediaTaskHasBeenSet;

                    /**
                     * <p>WeChat Mini Program publishing task information. This field has a value only when TaskType is WechatMiniProgramPublish.</p>
                     */
                    WechatMiniProgramPublishTask m_wechatMiniProgramPublishTask;
                    bool m_wechatMiniProgramPublishTaskHasBeenSet;

                    /**
                     * <p>Pull and upload media files task information. This field has a value only when TaskType is PullUpload.</p>
                     */
                    PullUploadTask m_pullUploadTask;
                    bool m_pullUploadTaskHasBeenSet;

                    /**
                     * <p>Video transcoding task information. This field has a value only when TaskType is Transcode.</p>
                     */
                    TranscodeTask2017 m_transcodeTask;
                    bool m_transcodeTaskHasBeenSet;

                    /**
                     * <p>Video splicing task information. This field has a value only when TaskType is Concat.</p>
                     */
                    ConcatTask2017 m_concatTask;
                    bool m_concatTaskHasBeenSet;

                    /**
                     * <p>Video editing task information. This field has a value only when TaskType is Clip.</p>
                     */
                    ClipTask2017 m_clipTask;
                    bool m_clipTaskHasBeenSet;

                    /**
                     * <p>Capturing sprite image task information. This field has a value only when TaskType is ImageSprite.</p>
                     */
                    CreateImageSpriteTask2017 m_createImageSpriteTask;
                    bool m_createImageSpriteTaskHasBeenSet;

                    /**
                     * <p>Video screenshot at specified time point task information. This field has a value only when TaskType is SnapshotByTimeOffset.</p>
                     */
                    SnapshotByTimeOffsetTask2017 m_snapshotByTimeOffsetTask;
                    bool m_snapshotByTimeOffsetTaskHasBeenSet;

                    /**
                     * <p>Intelligent watermark removal task information. This field has a value only when TaskType is RemoveWatermark.</p>
                     */
                    RemoveWatermarkTask m_removeWatermarkTask;
                    bool m_removeWatermarkTaskHasBeenSet;

                    /**
                     * <p>Audio and video quality revival task information. This field has a value only when TaskType is RebuildMedia.</p>
                     */
                    RebuildMediaTask m_rebuildMediaTask;
                    bool m_rebuildMediaTaskHasBeenSet;

                    /**
                     * <p>Extract traceability watermark task information. This field has a value only when TaskType is ExtractTraceWatermark.</p>
                     */
                    ExtractTraceWatermarkTask m_extractTraceWatermarkTask;
                    bool m_extractTraceWatermarkTaskHasBeenSet;

                    /**
                     * <p>Extract copyright watermark task information. This field has a value only when TaskType is ExtractCopyRightWatermark.</p>
                     */
                    ExtractCopyRightWatermarkTask m_extractCopyRightWatermarkTask;
                    bool m_extractCopyRightWatermarkTaskHasBeenSet;

                    /**
                     * <p>Audio/video moderation task information. This field has a value only when TaskType is ReviewAudioVideo.</p>
                     */
                    ReviewAudioVideoTask m_reviewAudioVideoTask;
                    bool m_reviewAudioVideoTaskHasBeenSet;

                    /**
                     * <p>This field is invalid.</p>
                     */
                    ReduceMediaBitrateTask m_reduceMediaBitrateTask;
                    bool m_reduceMediaBitrateTaskHasBeenSet;

                    /**
                     * <p>File attribute acquisition task information. This field has a value only when TaskType is DescribeFileAttributes.</p>
                     */
                    DescribeFileAttributesTask m_describeFileAttributesTask;
                    bool m_describeFileAttributesTaskHasBeenSet;

                    /**
                     * <p>Audio and video quality detection task information. This field has a value only when TaskType is QualityInspect.</p>
                     */
                    QualityInspectTask m_qualityInspectTask;
                    bool m_qualityInspectTaskHasBeenSet;

                    /**
                     * <p>Audio and video quality revival task information. This field has a value only when TaskType is QualityEnhance.</p>
                     */
                    QualityEnhanceTask m_qualityEnhanceTask;
                    bool m_qualityEnhanceTaskHasBeenSet;

                    /**
                     * <p>Complex adaptive bitrate task information. This field has a value only when TaskType is ComplexAdaptiveDynamicStreaming.</p>
                     */
                    ComplexAdaptiveDynamicStreamingTask m_complexAdaptiveDynamicStreamingTask;
                    bool m_complexAdaptiveDynamicStreamingTaskHasBeenSet;

                    /**
                     * <p>MPS video processing task information. This field has a value only when TaskType is ProcessMediaByMPS.</p>
                     */
                    ProcessMediaByMPS m_processMediaByMPSTask;
                    bool m_processMediaByMPSTaskHasBeenSet;

                    /**
                     * <p>AIGC image generation task information. This field has a value only when TaskType is AigcImageTask.</p>
                     */
                    AigcImageTask m_aigcImageTask;
                    bool m_aigcImageTaskHasBeenSet;

                    /**
                     * <p>AIGC video task information. This field has a value only when TaskType is AigcVideoTask.</p>
                     */
                    AigcVideoTask m_aigcVideoTask;
                    bool m_aigcVideoTaskHasBeenSet;

                    /**
                     * <p>Media import knowledge base task info. This field has a value only when TaskType is ImportMediaKnowledge.</p>
                     */
                    ImportMediaKnowledgeTask m_importMediaKnowledge;
                    bool m_importMediaKnowledgeHasBeenSet;

                    /**
                     * <p>Scenario-based AIGC image generation task info. This field has a value only when TaskType is SceneAigcImageTask.</p>
                     */
                    SceneAigcImageTask m_sceneAigcImageTask;
                    bool m_sceneAigcImageTaskHasBeenSet;

                    /**
                     * <p>Scenario-based AIGC video task info. This field has a value only when TaskType is SceneAigcVideoTask.</p>
                     */
                    SceneAigcVideoTask m_sceneAigcVideoTask;
                    bool m_sceneAigcVideoTaskHasBeenSet;

                    /**
                     * <p>Image asynchronous processing task information. This field has a value only when TaskType is ProcessImageAsync.</p>
                     */
                    ProcessImageAsync m_processImageAsyncTask;
                    bool m_processImageAsyncTaskHasBeenSet;

                    /**
                     * <p>Extraction task info of digital watermark. This field has a value only when TaskType is ExtractBlindWatermark.</p>
                     */
                    ExtractBlindWatermarkTask m_extractBlindWatermarkTask;
                    bool m_extractBlindWatermarkTaskHasBeenSet;

                    /**
                     * <p>Create custom entity information. This field has a value only when TaskType is CreateAigcAdvancedCustomElement.</p>
                     */
                    CreateAigcAdvancedCustomElementTask m_createAigcAdvancedCustomElementTask;
                    bool m_createAigcAdvancedCustomElementTaskHasBeenSet;

                    /**
                     * <p>Create custom tone information. This field has a value only when TaskType is CreateAigcCustomVoice.</p>
                     */
                    CreateAigcCustomVoiceTask m_createAigcCustomVoiceTask;
                    bool m_createAigcCustomVoiceTaskHasBeenSet;

                    /**
                     * <p>Create entity information. This field has a value only when TaskType is CreateAigcSubject.</p>
                     */
                    CreateAigcSubjectTask m_createAigcSubjectTask;
                    bool m_createAigcSubjectTaskHasBeenSet;

                    /**
                     * <p>AIGC video redraw information. This field has a value only when TaskType is AigcVideoRedrawTask.</p>
                     */
                    AigcVideoRedrawTask m_aigcVideoRedrawTask;
                    bool m_aigcVideoRedrawTaskHasBeenSet;

                    /**
                     * <p>AIGC sound effect information. This field has a value only when TaskType is AigcAudioTask.</p>
                     */
                    AigcAudioTask m_aigcAudioTask;
                    bool m_aigcAudioTaskHasBeenSet;

                    /**
                     * <p>AIGC voice clone information. This field has a value only when TaskType is CreateAigcAudioClone.</p>
                     */
                    CreateAigcAudioCloneTask m_createAigcAudioCloneTask;
                    bool m_createAigcAudioCloneTaskHasBeenSet;

                    /**
                     * <p>Asynchronously fetch AIGC face information. This field has a value only when TaskType is DescribeAigcFaceInfoAsync.</p>
                     */
                    DescribeAigcFaceInfoAsyncTask m_describeAigcFaceInfoAsyncTask;
                    bool m_describeAigcFaceInfoAsyncTaskHasBeenSet;

                    /**
                     * <p>Hunyuan 3D task. This field has a value only when TaskType is AigcHunyuan3DTask.</p>
                     */
                    AigcHunyuan3DTask m_aigcHunyuan3DTask;
                    bool m_aigcHunyuan3DTaskHasBeenSet;

                    /**
                     * <p>Voice type design. This field has a value only when TaskType is DesignVoiceAsync.</p>
                     */
                    DesignVoiceAsyncTask m_designVoiceAsyncTask;
                    bool m_designVoiceAsyncTaskHasBeenSet;

                    /**
                     * <p>Voice type clone. This field has a value only when TaskType is CloneVoiceAsync.</p>
                     */
                    CloneVoiceAsyncTask m_cloneVoiceAsyncTask;
                    bool m_cloneVoiceAsyncTaskHasBeenSet;

                    /**
                     * <p>Text to speech. This field has a value only when TaskType is TextToSpeechAsync.</p>
                     */
                    TextToSpeechAsyncTask m_textToSpeechAsyncTask;
                    bool m_textToSpeechAsyncTaskHasBeenSet;

                    /**
                     * <p>Video translation and dubbing. This field has a value only when TaskType is VideoDubbingAsync.</p>
                     */
                    VideoDubbingAsyncTask m_videoDubbingAsyncTask;
                    bool m_videoDubbingAsyncTaskHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBETASKDETAILRESPONSE_H_
