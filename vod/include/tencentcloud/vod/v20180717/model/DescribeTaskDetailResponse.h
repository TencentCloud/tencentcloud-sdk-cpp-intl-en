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
                     * 获取The task type. Valid values:
<li>`Procedure`: Video processing</li>
<li>`EditMedia`: Video editing</li>
<li>`SplitMedia`: Video splitting</li>
<li>`ComposeMedia`: Media file production</li>
<li>`WechatPublish`: Weixin publishing</li>
<li>`WechatMiniProgramPublish`: Publishing videos on Weixin Mini Program</li>
<li>`PullUpload`: Pulling media files for upload</li>
<li>`FastClipMedia`: Quick clipping</li>
<li>`RemoveWatermarkTask`: Watermark removal</li>
<li>`DescribeFileAttributesTask`: Getting file attributes</li>
<li> `ReviewAudioVideo`: Moderation</li>
<li>`ExtractTraceWatermark`: Digital watermark extraction</li>
<li>`QualityEnhance`: Enhance audio/video</li>
<li>`ComplexAdaptiveDynamicStreaming`: Complex adaptive bitrate streaming processing task</li><li>`ProcessMediaByMPS`: Process media by MPS.</li>
                     * @return TaskType The task type. Valid values:
<li>`Procedure`: Video processing</li>
<li>`EditMedia`: Video editing</li>
<li>`SplitMedia`: Video splitting</li>
<li>`ComposeMedia`: Media file production</li>
<li>`WechatPublish`: Weixin publishing</li>
<li>`WechatMiniProgramPublish`: Publishing videos on Weixin Mini Program</li>
<li>`PullUpload`: Pulling media files for upload</li>
<li>`FastClipMedia`: Quick clipping</li>
<li>`RemoveWatermarkTask`: Watermark removal</li>
<li>`DescribeFileAttributesTask`: Getting file attributes</li>
<li> `ReviewAudioVideo`: Moderation</li>
<li>`ExtractTraceWatermark`: Digital watermark extraction</li>
<li>`QualityEnhance`: Enhance audio/video</li>
<li>`ComplexAdaptiveDynamicStreaming`: Complex adaptive bitrate streaming processing task</li><li>`ProcessMediaByMPS`: Process media by MPS.</li>
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
                     * 获取Task status. Valid values:
<li>WAITING: waiting;</li>
<li>PROCESSING: processing;</li>
<li>FINISH: completed.</li>
                     * @return Status Task status. Valid values:
<li>WAITING: waiting;</li>
<li>PROCESSING: processing;</li>
<li>FINISH: completed.</li>
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
                     * 获取Creation time of task in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @return CreateTime Creation time of task in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).
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
                     * 获取Start time of task execution in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @return BeginProcessTime Start time of task execution in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).
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
                     * 获取End time of task execution in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @return FinishTime End time of task execution in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).
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
                     * 获取
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ProcedureTask 
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return EditMediaTask 
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return WechatPublishTask 
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ComposeMediaTask 
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return SplitMediaTask 
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return WechatMiniProgramPublishTask 
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return PullUploadTask 
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TranscodeTask 
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ConcatTask 
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ClipTask 
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return CreateImageSpriteTask 
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return SnapshotByTimeOffsetTask 
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return RemoveWatermarkTask 
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return RebuildMediaTask 
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ExtractTraceWatermarkTask 
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ExtractCopyRightWatermarkTask 
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ReviewAudioVideoTask 
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ReduceMediaBitrateTask 
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return DescribeFileAttributesTask 
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return QualityInspectTask 
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Media Quality Enhance task information. This field has a value only when TaskType is QualityEnhance.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return QualityEnhanceTask Media Quality Enhance task information. This field has a value only when TaskType is QualityEnhance.
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Complex adaptive bitrate streaming processing task information. This field has a value only when TaskType is ComplexAdaptiveDynamicStreaming. 
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ComplexAdaptiveDynamicStreamingTask Complex adaptive bitrate streaming processing task information. This field has a value only when TaskType is ComplexAdaptiveDynamicStreaming. 
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Media processing by MPS task information. This field contains a value only when TaskType is ProcessMediaByMPS.
                     * @return ProcessMediaByMPSTask Media processing by MPS task information. This field contains a value only when TaskType is ProcessMediaByMPS.
                     * 
                     */
                    ProcessMediaByMPS GetProcessMediaByMPSTask() const;

                    /**
                     * 判断参数 ProcessMediaByMPSTask 是否已赋值
                     * @return ProcessMediaByMPSTask 是否已赋值
                     * 
                     */
                    bool ProcessMediaByMPSTaskHasBeenSet() const;

                private:

                    /**
                     * The task type. Valid values:
<li>`Procedure`: Video processing</li>
<li>`EditMedia`: Video editing</li>
<li>`SplitMedia`: Video splitting</li>
<li>`ComposeMedia`: Media file production</li>
<li>`WechatPublish`: Weixin publishing</li>
<li>`WechatMiniProgramPublish`: Publishing videos on Weixin Mini Program</li>
<li>`PullUpload`: Pulling media files for upload</li>
<li>`FastClipMedia`: Quick clipping</li>
<li>`RemoveWatermarkTask`: Watermark removal</li>
<li>`DescribeFileAttributesTask`: Getting file attributes</li>
<li> `ReviewAudioVideo`: Moderation</li>
<li>`ExtractTraceWatermark`: Digital watermark extraction</li>
<li>`QualityEnhance`: Enhance audio/video</li>
<li>`ComplexAdaptiveDynamicStreaming`: Complex adaptive bitrate streaming processing task</li><li>`ProcessMediaByMPS`: Process media by MPS.</li>
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * Task status. Valid values:
<li>WAITING: waiting;</li>
<li>PROCESSING: processing;</li>
<li>FINISH: completed.</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Creation time of task in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Start time of task execution in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).
                     */
                    std::string m_beginProcessTime;
                    bool m_beginProcessTimeHasBeenSet;

                    /**
                     * End time of task execution in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).
                     */
                    std::string m_finishTime;
                    bool m_finishTimeHasBeenSet;

                    /**
                     * 
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    ProcedureTask m_procedureTask;
                    bool m_procedureTaskHasBeenSet;

                    /**
                     * 
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    EditMediaTask m_editMediaTask;
                    bool m_editMediaTaskHasBeenSet;

                    /**
                     * 
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    WechatPublishTask m_wechatPublishTask;
                    bool m_wechatPublishTaskHasBeenSet;

                    /**
                     * 
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    ComposeMediaTask m_composeMediaTask;
                    bool m_composeMediaTaskHasBeenSet;

                    /**
                     * 
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    SplitMediaTask m_splitMediaTask;
                    bool m_splitMediaTaskHasBeenSet;

                    /**
                     * 
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    WechatMiniProgramPublishTask m_wechatMiniProgramPublishTask;
                    bool m_wechatMiniProgramPublishTaskHasBeenSet;

                    /**
                     * 
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    PullUploadTask m_pullUploadTask;
                    bool m_pullUploadTaskHasBeenSet;

                    /**
                     * 
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    TranscodeTask2017 m_transcodeTask;
                    bool m_transcodeTaskHasBeenSet;

                    /**
                     * 
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    ConcatTask2017 m_concatTask;
                    bool m_concatTaskHasBeenSet;

                    /**
                     * 
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    ClipTask2017 m_clipTask;
                    bool m_clipTaskHasBeenSet;

                    /**
                     * 
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    CreateImageSpriteTask2017 m_createImageSpriteTask;
                    bool m_createImageSpriteTaskHasBeenSet;

                    /**
                     * 
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    SnapshotByTimeOffsetTask2017 m_snapshotByTimeOffsetTask;
                    bool m_snapshotByTimeOffsetTaskHasBeenSet;

                    /**
                     * 
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    RemoveWatermarkTask m_removeWatermarkTask;
                    bool m_removeWatermarkTaskHasBeenSet;

                    /**
                     * 
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    RebuildMediaTask m_rebuildMediaTask;
                    bool m_rebuildMediaTaskHasBeenSet;

                    /**
                     * 
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    ExtractTraceWatermarkTask m_extractTraceWatermarkTask;
                    bool m_extractTraceWatermarkTaskHasBeenSet;

                    /**
                     * 
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    ExtractCopyRightWatermarkTask m_extractCopyRightWatermarkTask;
                    bool m_extractCopyRightWatermarkTaskHasBeenSet;

                    /**
                     * 
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    ReviewAudioVideoTask m_reviewAudioVideoTask;
                    bool m_reviewAudioVideoTaskHasBeenSet;

                    /**
                     * 
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    ReduceMediaBitrateTask m_reduceMediaBitrateTask;
                    bool m_reduceMediaBitrateTaskHasBeenSet;

                    /**
                     * 
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    DescribeFileAttributesTask m_describeFileAttributesTask;
                    bool m_describeFileAttributesTaskHasBeenSet;

                    /**
                     * 
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    QualityInspectTask m_qualityInspectTask;
                    bool m_qualityInspectTaskHasBeenSet;

                    /**
                     * Media Quality Enhance task information. This field has a value only when TaskType is QualityEnhance.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    QualityEnhanceTask m_qualityEnhanceTask;
                    bool m_qualityEnhanceTaskHasBeenSet;

                    /**
                     * Complex adaptive bitrate streaming processing task information. This field has a value only when TaskType is ComplexAdaptiveDynamicStreaming. 
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    ComplexAdaptiveDynamicStreamingTask m_complexAdaptiveDynamicStreamingTask;
                    bool m_complexAdaptiveDynamicStreamingTaskHasBeenSet;

                    /**
                     * Media processing by MPS task information. This field contains a value only when TaskType is ProcessMediaByMPS.
                     */
                    ProcessMediaByMPS m_processMediaByMPSTask;
                    bool m_processMediaByMPSTaskHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBETASKDETAILRESPONSE_H_
